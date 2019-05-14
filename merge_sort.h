#pragma once
template <typename T>
//рекурсивная процедура сортировки
void merge_sort(T *A, int first, int last)
{
	int middle, start, final, j;
	T *mas = new T[10];
	middle = (first + last) / 2; //вычисление среднего элемента
	start = first; //начало левой части
	final = middle + 1; //начало правой части
	{
		if (first < last)
		{
			merge_sort(A, first, (first + last) / 2); //сортировка левой части
			merge_sort(A, (first + last) / 2 + 1, last); //сортировка правой части
			for (j = first; j <= last; j++) //выполнять от начала до конца
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
			//возвращение результата в список
			for (j = first; j <= last; j++) A[j] = mas[j];
			delete[]mas;
		}
	}
};