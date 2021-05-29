// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
int main()
{	

	string isim1 = "Kaan";
	string isim2 = "Mert";
	string isim3 = "Burcu";
	int vize[3];
	int final[3];
	int odev[3];
	int ortalama[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Vize Notlar : "<<endl;
		cin >> vize[i];
		cout << " Final :" << endl;
		cin >> final[i];
		cout << "Odev : " << endl;
		cin >> odev[i];
		ortalama[i] = (vize[i] + final[i] + odev[i]) / 3;
	}
	cout << isim1 << ":" << ortalama[0] << endl;
	cout << isim2 << ":" << ortalama[1]<<endl;
	cout << isim3 << ":" << ortalama[2]<<endl;
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
