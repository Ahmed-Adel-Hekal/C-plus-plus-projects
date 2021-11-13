/*

    Author :. Ahmed_Adel_Hekal
	Descripton :. 
	            This code is use to calculate BMI for you body 
				the formula needed to calculate is bmi = weight/(height*height)
				good example for if statment
				
*/

#include <iostream>


using namespace std;
int main()
{
	int weight, height; // Enter your measures in kg / meter
	cout << "enter your weight (KG) & height (M)" << endl;
	cin >> weight >> height; 
	float bmi = weight / (height * height);  // bmi score calculation 

	if (bmi < 18.5) {
		cout << "underweight\n"<<"your bmi is " <<bmi;
	}
	else if (bmi < 25.0) {
			cout << "Normal\n" << "your bmi is " << bmi;
		}
	else
		{
			cout << "overweight \n" << "your bmi is " << bmi;
		}
	


	system("pause > 0 ");
}

