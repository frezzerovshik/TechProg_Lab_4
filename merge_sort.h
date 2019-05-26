#pragma once
template <typename T>

void merge_sort(T *A, int first, int last)
{
	if (first == last || last == 0)
		throw 666;
	int middle, start, final, j;
	T *mas = new T[10];
	middle = (first + last) / 2; 
	start = first; 
	final = middle + 1; 
	{
		if (first < last)
		{
			merge_sort(A, first, (first + last) / 2); 
			merge_sort(A, (first + last) / 2 + 1, last); 
			for (j = first; j <= last; j++)
				if ((start <= middle) && ((final > last) || (A[start] < A[final])))
				{
					mas[j] = A[start];
					start++;
				}
				else
				{
					mas[j] = A[final];
					final++;
				}
			for (j = first; j <= last; j++) A[j] = mas[j];
			delete[]mas;
		}
	}
};