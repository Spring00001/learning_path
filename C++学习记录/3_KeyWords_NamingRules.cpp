#include<iostream>
using namespace std;

int main() {
	// WARNING: DONOT USE A KEYWORD TO NAME A VARIABLE !
	// creat a variable: DataType VariableName = InitialValue
	int a = 10;

	//naming rules
	//1. identifiers cannot be a keyword
	//2. identifiers can only consisit of letters, numbers and underscores
	//3. the fst character of identifiers must be a letter or underscores
	//4. identifiers are case-sensitive

	int abc = 11;
	int _123 = 12;
	int _123ab = 13;

	// identifiers should be easy to understand
	int num1 = 1;
	int num2 = 3;
	int sum = num1 + num2;
	cout << sum << endl;

	system("pause");

	return 0;
}
