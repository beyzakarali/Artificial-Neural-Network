
#include "Classification.h"



int Ypoint(int x, W* w, int factor){
	// -1 -> bias degeri (dogrunun kaydýrýlmasý)
	return (int)((double)(-1 * (double)factor * w->w3 - w->w1 * x) / (double)(w->w2));

}

void DrawLine(Samples nokta, W w) {


    

} 

int sgn(double value) {
	
	return value > 0 ? 1 : -1;
}
/*
double transpose(double matrix) {

	// Pek dinamik olmadý ama iþimi görür gibi .......................
	double *transpose; 
	for (int i = 0 ; i < 3 ; ++i) {
		for (int j = 0; j < 1; ++j) {
		//	transpose[j][i] = matrix[i][j];
		}
	}
	return *transpose;

}
*/

/*
int mulmatrix(double * matrix1[3][1], double* matrix2[1][3]) {
	int r = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			r += ((*matrix1[i][j]) * (*matrix2[j][i]));

		}
	}
	return r;
}
*/

int TransMul(W  *matrix1, Samples  matrix2) { // 
	return matrix1->w1* matrix2.x + matrix1->w2 * matrix2.y + matrix1->w3 * (-1);
}


Samples w_mulCalculation(double val, Samples m ) {
	Samples m1;

	m1.x = m.x * val;
	m1.y = m.y * val;
	m1.bias = m.bias * val;

	

	return m1;
}

W* w_sumCalculation(W *w1, Samples p) {
	W *ret = new W[1];
	ret->w1 = w1->w1 + p.x;
	ret->w2 = w1->w2 + p.y;
	ret->w3 = w1->w3 + p.bias;

	return ret;
}


	

