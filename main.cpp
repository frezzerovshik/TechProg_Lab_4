#include <iostream>
#include "merge_sort.h"
#include <ctime>

using namespace std;

int main()
{
	long ltime;
	int stime;
	ltime = time(NULL);
	stime = (unsigned int)ltime / 2;
	srand(stime);

	int *tmp_int = new int[10];
	int *buf_int = new int[10];

	char* tmp_char = new char[10];
	char *start_c, *end_c;

	float* tmp_float = new float[10];
	float *start_f, *end_f;

	double* tmp_double = new double[10];
	double *start_d, *end_d;

	for (int i = 0; i < 10; ++i)
		tmp_int[i] = rand() % 100 + 1;
	char c = 'z';
	for (int i = 0; i < 10; ++i) {
		tmp_char[i] = c;
		c += 2;
	}
	for (int i = 0; i < 10; ++i)
		tmp_float[i] = (rand() % 100 + 1)/2;
	for (int i = 0; i < 10; ++i)
		tmp_double[i] = (rand() % 100 + 1)/2;

	for (int i = 0; i < 10; ++i)
		cout << tmp_double[i] << ' ';
	cout << endl;
	merge_sort(tmp_double,0,9);
	for (int i = 0; i < 10; ++i)
		cout << tmp_double[i] << ' ';
	cout << endl;
	return 0;
}