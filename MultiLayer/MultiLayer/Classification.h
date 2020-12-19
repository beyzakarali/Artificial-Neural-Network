#pragma once
#define BIAS -1


struct Color_ {
	int R;
	int G;
	int B;
};

struct Samples {
	double x;
	double y;
	double bias = -1;
	int id;
	int temp_id;
	Color_ cl;
	Color_ c2;

};

// For weights point
struct W {
	double w1;
	double w2;
	double w3;
	
};


struct V {
	double v1;
	double v2;
	double v3;

};




int Ypoint(int x, W w, int factor);
int Ypoint(int x, V v, int factor);

int sgn(double value);

double TransMul(V matrix1, Samples matrix2);
void multiply_matrix(double a[], int row1, int col1, double b[], int row2, int col2, double o[]);

Samples w_mulCalculation(double val, Samples m);

V w_sumCalculation(V w1, Samples p);
W w_sumCalculation(W w, Samples p);

void Cal_Error_O(double Error_o[], double w[], int class_numb, int neuron_numb, double Error_o_Sum[]);

double SigmoidFunc(double fnet);
double derSigmoidFunc(double fnet);
double LeakyReluFunc(double fnet);



void BatchNormalization(Samples* p, int total_size);
void NormalizationR1(Samples* p, int total_size);

