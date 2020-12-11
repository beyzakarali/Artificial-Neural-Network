
#include "Classification.h"
#include <math.h>



int Ypoint(int x, W* w, int factor){
	// -1 -> bias degeri (dogrunun kaydýrýlmasý)
	return (int)((double)(-1 * (double)factor * w->w3 - w->w1 * x) / (double)(w->w2));

}
 

int sgn(double value) {
	
	return value > 0 ? 1 : -1;
}


//Matrix multiplication.
double TransMul(W  *matrix1, Samples  matrix2) { 
	return matrix1->w1* matrix2.x + matrix1->w2 * matrix2.y + matrix1->w3 * matrix2.bias;
}

//Matrix multiplication with constant value.
Samples w_mulCalculation(double val, Samples m ) {
	Samples m1;

	m1.x = m.x * val;
	m1.y = m.y * val;
	m1.bias = BIAS * val;

	

	return m1;
} 

//Matrix Sum Function.
W* w_sumCalculation(W *w1, Samples p) {
	W *ret = new W[1];
	ret->w1 = w1->w1 + p.x;
	ret->w2 = w1->w2 + p.y;
	ret->w3 = w1->w3 + p.bias;

	return ret;
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

double derSigmoidFunc(double fnet ) { // doðru çalýsýyor.
	double ret = (1 - pow(fnet, 2)) * 0.5;
	

	return ret;
		
}

//Leaky relu func
double LeakyReluFunc(double fnet) {
	return fnet < 0 ? 0.01 * fnet : fnet;
}
	




void BatchNormalization(Samples *p , int total_size) {

	double tempx = 0.0, ao_x = 0.0,ss_x=0.0,var_x=0.0 ,tempy=0.0, ao_y=0.0,ss_y=0.0,var_y=0.0;
	for (int i = 0; i < total_size; i++) {
		tempx += p[i].x;
		tempy += p[i].y;

	}
	ao_x = tempx / total_size;
	ao_y = tempy / total_size;

	for (int i = 0; i < total_size; i++) {
	   var_x += pow((p[i].x - ao_x),2);
	   var_y += pow((p[i].y - ao_y), 2);


	}
	var_x = var_x / total_size;
	var_y = var_y / total_size;


	ss_x = sqrt(var_x);
	ss_y = sqrt(var_y);


	for (int i = 0; i < total_size; i++) {
		 p[i].x = (p[i].x - ao_x) / ss_x;
		//p[i].x = (p[i].x * 10);//+ p[i].bias ;

		 p[i].y = (p[i].y - ao_y) / ss_y;
		//p[i].y = (p[i].y * 10);//+ p[i].bias;

	}
	


}


void NormalizationR1(Samples* p,int total_size) {

	double norm_x = 0.0,norm_y=0;
	for (int i = 0; i < total_size; i++) {
		norm_x += pow(p[i].x, 2);
		norm_y += pow(p[i].y, 2);
	}

	norm_x = sqrt(norm_x);
	norm_y = sqrt(norm_y);

	for (int i = 0; i < total_size; i++) {
		p[i].x =fabs((p[i].x) / norm_x);
		p[i].y =fabs((p[i].y) / norm_y);
	}




}




