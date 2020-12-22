#include "Classification.h"
#include <math.h>
#include <iostream>
using namespace std;



int Ypoint(int x, W w, int factor) {
	// -1 -> bias degeri (dogrunun kaydýrýlmasý)
	return (int)((double)(-1 * (double)factor * w.w3 - w.w1 * x) / (double)(w.w2));

}

int Ypoint(int x, V v , int factor) { // V_m icin hesaplama
	// -1 -> bias degeri (dogrunun kaydýrýlmasý)
	return (int)((double)(-1 * (double)factor * v.v3 - v.v1 * x) / (double)(v.v2));

}


int sgn(double value) {

	return value > 0 ? 1 : -1;
}



//Matrix multiplication.
double TransMul(V matrix1, Samples  matrix2) {
	return matrix1.v1 * matrix2.x + matrix1.v2 * matrix2.y + matrix1.v3 * matrix2.bias;
}
// Func Overloading

void multiply_matrix(double a[], int row1, int col1, double b[], int row2, int col2 , double o[]) {

	//double *d = new double[row1 * col2];
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col2; j++) {
			double sum = 0;
			for (int k = 0; k < col1; k++)
				sum = sum + a[i * col1 + k] * b[k * col2 + j];
			o[i * col2 + j] = sum;
		}

	}

	//double *d = new double[row1 * col2];
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col2; j++) {
			

		}
	}

}

//Matrix multiplication with constant value.
// sabit * x 
Samples w_mulCalculation(double val, Samples m) {
	Samples m1;

	m1.x = m.x * val;
	m1.y = m.y * val;
	m1.bias = BIAS * val;



	return m1;
}

//Matrix Sum Function.
W w_sumCalculation(W w1, Samples p) {
	W ret;
	ret.w1 = w1.w1 + p.x;
	ret.w2 = w1.w2 + p.y;
	ret.w3 = w1.w3 + p.bias;

	return ret;
}

// 
V w_sumCalculation(V w1, Samples p) {
	V ret;
	ret.v1 = w1.v1 + p.x;
	ret.v2 = w1.v2 + p.y;
	ret.v3 = w1.v3 + p.bias;

	return ret;
}

void Cal_Error_O(double Error_o[], double w[], int class_numb, int neuron_numb, double Error_o_Sum[]) {  // For Error_o update func.

	double* Temp = new double[class_numb]();
	for (int c = 0; c < class_numb; c++) {
		for (int n = 0; n < neuron_numb; n++) {
			Temp[c] = Temp[c] + Error_o[c] * w[c * neuron_numb + n];
		}
	}

	for (int i = 1; i <= class_numb; i++) {
		Error_o_Sum[i] = Temp[i];
	}
}

// bipolar sigmoid func
double SigmoidFunc(double fnet) { // doðru çalýþýyor.
	int lambda = 1;
	double value = (-lambda) * fnet;
	value = exp(value);


	if (isinf(value)) {
		return -1;
	}

	return (2 / (1 + value) - 1);
}

double derSigmoidFunc(double fnet  ) { // doðru çalýsýyor.



	

	fnet = (1 - pow(fnet, 2)) * 0.5;
	

	


	return fnet;

}

//Leaky relu func
double LeakyReluFunc(double fnet) {
	return fnet < 0 ? 0.01 * fnet : fnet;
}


void BatchNormalization(Samples* p, int total_size) {

	double tempx = 0.0, ao_x = 0.0, ss_x = 0.0, var_x = 0.0, tempy = 0.0, ao_y = 0.0, ss_y = 0.0, var_y = 0.0;
	for (int i = 0; i < total_size; i++) {
		tempx += p[i].x;
		tempy += p[i].y;

	}
	ao_x = tempx / total_size;
	ao_y = tempy / total_size;

	for (int i = 0; i < total_size; i++) {
		var_x += pow((p[i].x - ao_x), 2);
		var_y += pow((p[i].y - ao_y), 2);


	}
	var_x = var_x / total_size;
	var_y = var_y / total_size;


	ss_x = sqrt(var_x);
	ss_y = sqrt(var_y);


	for (int i = 0; i < total_size; i++) {
		p[i].x = (p[i].x - ao_x) / ss_x;
		//p[i].x = (p[i].x * 10);  // Attention coefficient  ;

		p[i].y = (p[i].y - ao_y) / ss_y;
		//p[i].y = (p[i].y * 10);

	}



}


void NormalizationR1(Samples* p, int total_size) {

	double norm_x = 0.0, norm_y = 0;
	for (int i = 0; i < total_size; i++) {
		norm_x += pow(p[i].x, 2);
		norm_y += pow(p[i].y, 2);
	}

	norm_x = sqrt(norm_x);
	norm_y = sqrt(norm_y);

	for (int i = 0; i < total_size; i++) {
		p[i].x = fabs((p[i].x) / norm_x);
		p[i].y = fabs((p[i].y) / norm_y);
	}




}
