/*

	Author :. Ahmed_Adel_Hekal
	Descripton :.
				This code is use to reverse entered number 

*/

#include <iostream>
using namespace std;
int main()
{
	int Number, reversedNumber=0;
	cout << "Please enter number to revese \n";
	cin >> Number; 
	while (Number != 0)
	{
		int temp;
		reversedNumber *= 10;
		temp = Number % 10;
		Number = Number / 10;
		reversedNumber += temp;
	}
	cout << "reversed Number is " << reversedNumber;
}

