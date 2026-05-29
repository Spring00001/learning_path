#include<iostream>
using namespace std;

// single-line comment

/* 
   multi-line comment 
*/

/*
   the style of define a constant
   1. "#define" global constant  
   2. use "const" to define a variable
*/

#define Day 7 // global const, cannot change "Day" 

int main()
{
	cout << "A week has " << Day << " day. " << endl;

	// define a variable : a
	int a = 10;
	cout << "a = " << 10 << endl;

	//use const
	const int month = 12;
	cout << "A year has " << month << " months." << endl;

	system("pause");

	return 0;
}