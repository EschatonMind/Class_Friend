#include <iostream>
#include "A.h"
#include "B.h"
using namespace std;
void A::print() { // class A function is called
	B b;
	b.a = 1;
	b.b = 2;
	b.c = 3;
	cout << b.a << endl << b.b << endl << b.c << endl;
}
void test() { // regular function created
	B b;
	b.a = 1;
	b.b = 2;
	b.c = 3;
	cout << b.a << endl << b.b << endl << b.c << endl;
}
int main() {

	A a;
	a.print();
	test();
	
	return 0;
}