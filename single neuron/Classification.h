#define CLASS1 -1
#define CLASS2 1
#define BIAS -1


struct Samples {
	double x;
	double y;
	//double z =1;
	double bias = -1;
	int id;

};

// For weights point
struct W {
	double w1;
	double w2;
	double w3;
};


// Probably used for orjin 
int Ypoint(int x, W *w, int factor = 1); 

int sgn(double value);

//ÝLERDE ÝNÞALLAH SÝZÝ YAPICAM (: ÝNÞAALLAHH
//double transpose(double matrix);
//int mulmatrix(double *matrix1[3][1], double *matrix2[1][3]);
double TransMul(W *matrix1, Samples matrix2);
Samples w_mulCalculation(double val, Samples m);
W* w_sumCalculation(W* w, Samples p);
double SigmoidFunc(double fnet);
double derSigmoidFunc(double fnet);
double LeakyReluFunc(double fnet);



void BatchNormalization(Samples *p, int total_size);
void NormalizationR1(Samples* p, int total_size);



