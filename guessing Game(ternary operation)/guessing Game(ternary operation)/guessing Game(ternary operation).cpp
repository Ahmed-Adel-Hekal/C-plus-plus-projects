/*

	Author :. Ahmed_Adel_Hekal
	Descripton :.
				This code is aguessing game a host who enters an integer number 
				then guest who try to guess that number

*/

#include <iostream>
using namespace std;
int main()
{
	int hostNumber, guestNumber;
	cout << "please enter your number " << endl;
	cin >> hostNumber;   // host enters number
	system("cls");   // clear console 
	cout << "please guess the number" << endl;
	cin >> guestNumber;  // guest enter number
	(hostNumber==guestNumber)?(cout<<"correct"):(cout<<"wrong");  /// ternary operation
 
	system("pause>0");
}

