// constructor_demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

class A{
private:
	int a;
public:
	A() {
		cout<<"A constructor called"<<endl;
		a =2;
	}
	//A(const A &a) {
	//	cout<<"copy constructor called"<<endl;
	//}
	int GetA() {
		return a;
	}
	void SetA(int value) {
		this->a = value;
	}
};


int main() {
	A a;
	A b = a;
	cout<<&a<<endl;
	cout<<&b<<endl;
	cout<<b.GetA()<<endl;
	
	a.SetA(10);
	cout<<a.GetA()<<endl;
	cout<<b.GetA()<<endl;

	getchar();
}

