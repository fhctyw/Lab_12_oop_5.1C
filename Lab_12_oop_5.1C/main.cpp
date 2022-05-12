#include <iostream>
#include <Windows.h>
#include "PrivateRational.h"
#include "PublicRational.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	try
	{
		int f, s;
		cin >> f;
		cin >> s;
		PrivateRational p(f, s);
	}
	catch (RationalException r)
	{
		cout << "RationalException " << r.what() << endl;
	}
	
	try
	{
		int f, s;
		cin >> f;
		cin >> s;
		PublicRational p(f, s);
	}
	catch (RationalException r)
	{
		cout << "RationalException " << r.what() << endl;
	}

	try
	{
		PrivateRational p;
		cin >> p;
	}
	catch (exception& e)
	{
		cout << "exception& " << e.what() << endl;
	}


	try
	{
		PublicRational p1;
		cin >> p1;
	}
	catch (exception& e)
	{
		cout << "exception& " << e.what() << endl;
	}

	try
	{
		PrivateRational p;
		p--;
	}
	catch (int* n)
	{
		cout << "int* " << *n << endl;
	}

	try
	{
		PublicRational p1;
		p1--;
	}
	catch (int* n)
	{
		cout << "int* " << *n << endl;
	}

	return 0;
}