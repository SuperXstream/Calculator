

#include "pch.h"
#include <iostream>
#include <cmath>
#include <istream>
#include <string>

using namespace std;

int main()
{

	double finalout;
	double mun1;
    double mun2;
	string num;
	cout << "Enter The First Number.";
	cin >> mun1;
	cout << "Enter The Second Number.";
	cin >> mun2;
	cout << "Please Enter The Type Of Math. +, -, /, *.";
	cin >> num;
	if ( mun1 == 0, mun2 == 0)
	{
		cout << "Error";
		exit;
	}




	//if's
	if (num == "+")
	{
		finalout = mun1 + mun2;
	}
	else if (num == "-")
	{
		finalout = mun1 - mun2;
	}
	else if (num == "*")
	{
		finalout = mun1 * mun2;
	}
	else if (num == "/")
	{
		finalout = mun1 / mun2;
	}
	cout << finalout;
	//end one start two.

	while (true)
	{

		cout << endl << "Enter The First Number.";
		cin >> mun1;
		cout << "Enter The Second Number.";
		cin >> mun2;
		cout << "Please Enter The Type Of Math. +, -, /, *.";
		cin >> num;
		if (mun1 == 0, mun2 == 0)
		{
			cout << "Error";
			exit;
		}
		//if's
		if (num == "+")
		{
			finalout = mun1 + mun2;
		}
		else if (num == "-")
		{
			finalout = mun1 - mun2;
		}
		else if (num == "*")
		{
			finalout = mun1 * mun2;
		}
		else if (num == "/")
		{
			finalout = mun1 / mun2;
		}
		cout << finalout;
	}
	//end




}

