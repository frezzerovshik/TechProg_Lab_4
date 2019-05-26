#include <iostream>
#include <conio.h>
#include "merge_sort.h"
#include "cq.hpp"
#include <ctime>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	int *test_int_pointer = nullptr;
	char *test_char_pointer = nullptr;
	double *test_double_pointer = nullptr;
	float *test_float_pointer = nullptr;
	cq<int> *int_q = nullptr;
	cq<char> *ch_q = nullptr;
	cq<float> *float_q = nullptr;
	cq<double> *double_q = nullptr;
	bool exit = true;
	char c = 0;
	
	do {
		cout << "1 - ���������� �������� ������ � ����� int" << endl << "2 - ���������� �������� ������ � ����� char" << endl << "3 - ���������� �������� ������ � ����� float" << endl << "4 - ���������� �������� ������ � ����� double" << endl << "���������� ������ � �������� ���������� - ����� �������" << endl;
		c = _getch();
		switch (c) 
		{
		case '1':
		{
			int num;
			cout << "������� ����������� �������" << endl;
			cin >> num;
			test_int_pointer = new int[num];
			cout << "������� ������" << endl;
			for (int i =0;i<num;++i)
			{
				cout << "int[" << i << "]:" << endl;
				cin >> test_int_pointer[i];
			}
			try
			{
				merge_sort(test_int_pointer, 0, num - 1);
			}
			catch (int myException)
			{
				cout << "������ ������� �� ������ ��������" << endl;
				delete[] test_int_pointer;
				break;
			}
			cout << "��������� ����������" << endl;
			for (int i = 0; i < num; ++i)
			{
				cout << "int[" << i << "]:" ;
				cout << test_int_pointer[i];
				cout << endl;
			}
			delete[] test_int_pointer;
			break;
		}
		case '2':
		{
			int num;
			cout << "������� ����������� �������" << endl;
			cin >> num;
			test_char_pointer = new char[num];
			cout << "������� ������" << endl;
			for (int i = 0; i < num; ++i)
			{
				cout << "char[" << i << "]:" << endl;
				cin >> test_char_pointer[i];
			}
			try {
				merge_sort(test_char_pointer, 0, num - 1);
			}
			catch (int myException)
			{
				cout << "������ ������� �� ������ ��������" << endl;
				delete[] test_char_pointer;
				break;
			}
			cout << "��������� ����������" << endl;
			for (int i = 0; i < num; ++i)
			{
				cout << "char[" << i << "]:";
				cout << test_char_pointer[i];
				cout << endl;
			}
			delete[] test_char_pointer;
			break;
		}
		case '3':
		{
			int num;
			cout << "������� ����������� �������" << endl;
			cin >> num;
			test_float_pointer = new float[num];
			cout << "������� ������" << endl;
			for (int i = 0; i < num; ++i)
			{
				cout << "float[" << i << "]:" << endl;
				cin >> test_float_pointer[i];
			}
			try
			{
				merge_sort(test_float_pointer, 0, num - 1);
			}
			catch (int myException)
			{
				cout << "������ ������� �� ������ ��������" << endl;
				delete[] test_float_pointer;
				break;
			}
			cout << "��������� ����������" << endl;
			for (int i = 0; i < num; ++i)
			{
				cout << "float[" << i << "]:";
				cout << test_float_pointer[i];
				cout << endl;
			}
			delete[] test_float_pointer;
			break;
		}
		case '4':
		{
			int num;
			cout << "������� ����������� �������" << endl;
			cin >> num;
			test_double_pointer = new double[num];
			cout << "������� ������" << endl;
			for (int i = 0; i < num; ++i)
			{
				cout << "double[" << i << "]:" << endl;
				cin >> test_double_pointer[i];
			}
			try {
				merge_sort(test_double_pointer, 0, num - 1);
			}
			catch (int myException)
			{
				cout << "������ ������� �� ������ ��������" << endl;
				delete[] test_double_pointer;
				break;
			}
			cout << "��������� ����������" << endl;
			for (int i = 0; i < num; ++i)
			{
				cout << "double[" << i << "]:";
				cout << test_double_pointer[i];
				cout << endl;
			}
			delete[] test_double_pointer;
			break;
		}
		default:
		{
			exit = false;
			break;
		}
		}
	
	} while (exit);
	exit = true;
	do {
		cout << "1 - ������� ������� int" << endl << "2 - ������� ������� char" << endl << "3 - ������� ������� float" << endl << "4 - ������� ������� double" << endl;
		c = _getch();
		switch (c)
		{
		case '1':
		{
			int num;
			cout << "������� �����������" << endl;
			cin >> num;
			int_q = new cq<int>(num);
			char a = 0;
			do {
				cout << "1 - �������� ������� � �������" << endl << "2 - ������� ������� �� �������" << endl << "3 - ��������� �� �������" << endl << "����� - ����� �������" << endl;
				cin >> a;
				switch (a)
				{
				case '1':
				{
					int_q->print();
					+*int_q;
					int_q->print();
					break;
				}
				case '2':
				{
					int_q->print();
					try
					{
						-*int_q;
					}
					catch (int myException)
					{
						cout << "�������� ������� �������� �� ������ �������!" << endl;
					}
					int_q->print();
					break;
				}
				case '3':
				{
					if (!*int_q)
					{
						cout << "������� �����" << endl;
					}
					else
					{
						cout << "������� �� �����, � ��� " << int_q->getnum() << "���������" << endl;
					}
					break;
				}
				default:
				{
					exit = false;
					break;
				}
				}
			} while (exit);
			break;
		}
		case '2':
		{
			int num;
			cout << "������� �����������" << endl;
			cin >> num;
			ch_q = new cq<char>(num);
			char a = 0;
			cout << "1 - �������� ������� � �������" << endl << "2 - ������� ������� �� �������" << endl << "3 - ��������� �� �������" << "����� - ����� �������" << endl;
			cin >> a;
			switch (a)
			{
			case '1':
			{
				ch_q->print();
				+*ch_q;
				ch_q->print();
				break;
			}
			case '2':
			{
				ch_q->print();
				try
				{
					-*ch_q;
				}
				catch (int myException)
				{
					cout << "�������� ������� �������� �� ������ �������!" << endl;
				}
				ch_q->print();
				break;
			}
			case '3':
			{
				if (!*ch_q)
				{
					cout << "������� �����" << endl;
				}
				else
				{
					cout << "������� �� �����, � ��� " << ch_q->getnum() << "���������" << endl;
				}
				break;
			}
			default:
			{
				exit = false;
				break;
			}
			}
			break;
			
		}
		case '3':
		{
			int num;
			cout << "������� �����������" << endl;
			cin >> num;
			float_q = new cq<float>(num);
			char a = 0;
			cout << "1 - �������� ������� � �������" << endl << "2 - ������� ������� �� �������" << endl << "3 - ��������� �� �������" << "����� - ����� �������" << endl;
			cin >> a;
			switch (a)
			{
			case '1':
			{
				float_q->print();
				+*float_q;
				float_q->print();
				break;
			}
			case '2':
			{
				float_q->print();
				try
				{
					-*float_q;
				}
				catch (int myException)
				{
					cout << "�������� ������� �������� �� ������ �������!" << endl;
				}
				float_q->print();
				break;
			}
			case '3':
			{
				if (!*float_q)
				{
					cout << "������� �����" << endl;
				}
				else
				{
					cout << "������� �� �����, � ��� " << int_q->getnum() << "���������" << endl;
				}
				break;
			}
			default:
			{
				exit = false;
				break;
			}
			}
			break;
		}
		case '4':
		{
			int num;
			cout << "������� �����������" << endl;
			cin >> num;
			double_q = new cq<double>(num);
			char a = 0;
			cout << "1 - �������� ������� � �������" << endl << "2 - ������� ������� �� �������" << endl << "3 - ��������� �� �������" << "����� - ����� �������" << endl;
			cin >> a;
			switch (a)
			{
			case '1':
			{
				double_q->print();
				+*double_q;
				double_q->print();
				break;
			}
			case '2':
			{
				double_q->print();
				try
				{
					-*double_q;
				}
				catch (int myException)
				{
					cout << "�������� ������� �������� �� ������ �������!" << endl;
				}
				double_q->print();
				break;
			}
			case '3':
			{
				if (!*double_q)
				{
					cout << "������� �����" << endl;
				}
				else
				{
					cout << "������� �� �����, � ��� " << double_q->getnum() << "���������" << endl;
				}
				break;
			}
			default:
			{
				exit = false;
				break;
			}
			}
			break;
		}
		}
	
	} while (exit);
	delete int_q;
	delete ch_q;
	delete float_q;
	delete double_q;
	return 0;
}