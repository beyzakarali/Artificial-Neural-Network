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

};

// For weights point
struct W {
	double w1;
	double w2;
	double w3;
}; 



int Ypoint(int x, W w, int factor);
int sgn(double value);
double TransMul(W matrix1, Samples matrix2);
Samples w_mulCalculation(double val, Samples m);
W w_sumCalculation(W w, Samples p);
double SigmoidFunc(double fnet);
double derSigmoidFunc(double fnet);
double LeakyReluFunc(double fnet);



void BatchNormalization(Samples* p, int total_size);

