/*

Author:.Ahmed_Adel_Hekal
Descripton : .
This code is Word counting (count numbers that user enters)
each time we divide the number by 10 & increase counter by 1 untill we reach 0 
*/

#include <iostream>
using namespace std;
int main()
{
	int Number,counter = 0;
	cout << "please enter number to reverse\n";
	cin >> Number;
	if (Number == 0)
		cout << "you have entered Zero";
	if (Number < 0)
	{
		Number *= -1;
	}
	while (Number > 0) {
		Number = Number / 10;
		counter ++;
	}
	cout << "Number entered is " << counter;
}

