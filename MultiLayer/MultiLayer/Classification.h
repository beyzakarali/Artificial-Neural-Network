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
	double ss_x; //test icin 
	double ao_x;
	double ss_y;
	double ao_y;

};


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




int Ypoint(int x, V v, int factor);

void multiply_matrix(double a[], int row1, int col1, double b[], int row2, int col2, double o[]);

//Aktivasyon fonk
int sgn(double value);
double SigmoidFunc(double fnet);
double derSigmoidFunc(double fnet);
double LeakyReluFunc(double fnet);


void BatchNormalization(Samples* p, int total_size);


