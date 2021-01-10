#include "Classification.h"
#include <math.h>
#include <iostream>
using namespace std;




int Ypoint(int x, V v, int factor) { // V_m icin hesaplama
	// -1 -> bias degeri (dogrunun kaydýrýlmasý)
	return (int)((double)(-1 * (double)factor * v.v3 - v.v1 * x) / (double)(v.v2));

}


int sgn(double value) {

	return value > 0 ? 1 : -1;
}


void multiply_matrix(double a[], int row1, int col1, double b[], int row2, int col2, double o[]) {

	if (col1 != row2)
		return;
	//double *d = new double[row1 * col2];
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col2; j++) {
			double sum = 0;
			for (int k = 0; k < col1; k++)
				sum = sum + a[i * col1 + k] * b[k * col2 + j];
			o[i * col2 + j] = sum;
		}

	}

}


// bipolar sigmoid func
double SigmoidFunc(double fnet) {
	int lambda = 1;
	double value = (-lambda) * fnet;
	value = exp(value);


	if (isinf(value)) {
		return sgn(value);
	}
	double retValue = (2 / (1 + value) - 1);

	return retValue;

}


double derSigmoidFunc(double fnet) { 


	fnet = (1 - pow(fnet, 2)) * 0.5;

	if (isinf(fnet)) {
		return sgn(fnet);
	}

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

	//HEPSINE ATAMAK YERINE SADECE ILK TERIME ATAMA YAPILDI
	p[0].ss_x = ss_x;
	p[0].ss_y = ss_y;
	p[0].ao_y = ao_y;
	p[0].ao_x = ao_x;


	for (int i = 0; i < total_size; i++) {
		p[i].x = (p[i].x - ao_x) / ss_x;

		p[i].y = (p[i].y - ao_y) / ss_y;


	}



}



