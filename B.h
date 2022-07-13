#pragma once
#include <iostream>
#include "A.h"
using namespace std;
class B
{
private:
	int a;
protected:
	int b;
public:
	int c;

	friend class A; // friend class
	friend void test(); // friend function
};
