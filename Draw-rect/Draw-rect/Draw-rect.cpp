/*

	Author :. Ahmed_Adel_Hekal
	Descripton :.
				This code is drawing rectangle 

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int height, width;
	cout << "please enter your height " << endl;
	cin >> height;
	cout << "please enter your width";
	cin >> width;

	for (int i = 0; i < height; i++) {
		for (int y = 0; y < width; y++)
		{
			cout << setw(3) << "+";
		}
		cout << endl;
	}

}
