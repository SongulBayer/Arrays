// Arrays--.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string Name;
	string name[2];
	int exam[2];//vize final ve ödev
	int exam1[2];
	int exam2[2];
	cout << "Please enter students name" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> name[i];
	}

	cout << "Plese enter the first student exam" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> exam[i];
	}
	cout << "Please enter the second student exam" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> exam1[i];

	}
	cout << "Please enter the third student exam" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> exam2[i];

	}
	cout << "grade point averages : " << endl;
	cout << name[0] << ":" << (exam[0] + exam[1] + exam[2]) / 3 << endl;
	cout << name[1] << ":" << (exam1[0] + exam1[1] + exam1[2]) / 3 << endl;
	cout << name[2] << ":" << (exam2[0] + exam2[1] + exam2[2]) / 3 << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
