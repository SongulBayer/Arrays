// MultidimensionalArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9}};
	int matrix2[3][3] = { {9,8,7},{4,5,6},{1,4,7} };
	int matrix3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j]<<" ";
			//cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-----------------------------"<<endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//cout << matrix[i][j] << " ";
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix3[i][j] = matrix[i][j] + matrix2[i][j];
			cout << matrix3[i][j]<<" ";
		}
		cout << endl;
	}


}
