#include "Vector.h"
#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
	Vector a;
	int size;
	cout << "size = "; cin >> size;
	Vector b(size);
	cin >> b;
	cout << b << endl;
	cout << "Enter vector :" << endl;
	Vector d(size);
	cin >> d;
	cout << d << endl;
	Riz(b , d);
	if (b == d)
	{
		cout << " Vectors are equal " << endl;
	}
	else
	{
		cout << " Vectors are not equal " << endl;
	}

	cout << "Norma = " << d.Norma() << endl;
	
	return 0;

}
