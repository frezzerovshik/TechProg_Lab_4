#pragma once
//
//  cq.hpp
//  T.P.L.B.4
//
//  Created by Артем Шарапов on 15/05/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#pragma once
#include "node.hpp"
#include <iostream>
using namespace std;
template<typename T>
class cq
{
	Node<T> *Head;//Указатель на голову очереди
	Node<T> *Tail;//Указатель на хвост очереди
	int Num;//Суммарное количество элементов в очереди
public:
	//Конструкторы и деструкторы
	cq() :Num(0), Head(nullptr), Tail(nullptr) {};
	cq(int lenght_of_queue);
	//~cq();
	//Методы-геттеры
	Node<T>* gethead() { return Head; }
	Node<T>* gettail() { return Tail; }
	int getnum() { return Num; }
	//Методы-сеттеры
	void sethead(Node<T>* init_head);
	void settail(Node<T>* init_tail);
	void setnum(int init_num);
	//Перегружаемые операторы согласно заданию
	cq& operator+();
	cq& operator-();
	bool operator!();
	//Служебная функция
	void print();
};
template <typename T>
cq<T>& cq<T>::operator+()
{
	Node<T> *tmp = new Node<T>;//Выделяем память под новый узел

	tmp->setdata(rand() % 50);//В значение узла кладем значение, введенное пользователем

	if (Num == 0)//Если очередь пуста - мы добавили головной элемент
	{
		tmp->setnext(nullptr);
		Head = tmp;
		Tail = Head;
	}
	else//Иначе - добавляем в конец
	{
		tmp->setnext(Tail);//Текущий хвост - предыдущий для добавляемого
		Tail = tmp;
	}
	Num++;
	return *this;
}
template<typename T>
cq<T>& cq<T>::operator-()
{
	if (!*this)
		throw 666;
	Node<T> *tmp;
	tmp = Tail;
	while (tmp->getnext() != Head)
	{
		tmp = tmp->getnext();
	}
	delete Head;
	Head = tmp;
	tmp = Tail;

	Num--;
	return *this;
}
template<typename T>
bool cq<T>::operator!()
{
	if (Num != 0)
		return false;
	else
		return true;
}
template <typename T>
cq<T>::cq(int lenght_of_queue)
{
	Num = 0;
	for (int i = 0; i < lenght_of_queue; ++i)
	{
		Node<T> *tmp = new Node<T>;//Выделяем память под новый узел
		tmp->setdata(rand() % 50);
		if (Num == 0)//Если очередь пуста - мы добавили головной элемент
		{
			tmp->setnext(nullptr);
			Head = tmp;
			Tail = Head;
		}
		else//Иначе - добавляем в конец
		{
			tmp->setnext(Tail);
			Tail = tmp;
		}
		Num++;
	}
}

template <typename T>
void cq<T> ::print()
{
	Node<T> *tmp = Tail;
	int *tmp_1 = new int[Num];//Создаем массив для сохранения пользвательских данных элемента очереди
	int k = Num - 1;
	for (int i = 0; i < Num; ++i)
	{
		tmp_1[k--] = tmp->getdata();
		tmp = tmp->getnext();
	}

	for (k = 0; k < Num; ++k)
		k == Num - 1 ? cout << tmp_1[k] : cout << tmp_1[k] << "<<";
	cout << endl;
	delete[] tmp_1;
}