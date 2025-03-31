#include <iostream>
using namespace std;



int main()
{
	int a, b;
	cout << "Enter a value in double variable a: ";
	cin >> a;
	cout << "Enter a value in double variable b: ";
	cin >> b;

	int* pa, * pb;
	pa = &a;
	pb = &b;

	if (*pa > *pb) {
		*pa *= 2;
	}
	else {
		*pb /= 2;
	}

	cout << "An address of var a = " << pa << endl;
	cout << "A value of var a = " << *pa << endl;
	cout << "An address of var b = " << pb << endl;
	cout << "A value of var b = " << *pb << endl;
}
