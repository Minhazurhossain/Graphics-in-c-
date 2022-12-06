#include<iostream>
using namespace std;

int main()
{

     int determMatrix[2][2]={11,12,13,24};
	int determinant = ((determMatrix[0][0] * determMatrix[1][1]) -
					(determMatrix[0][1] * determMatrix[1][0]));

 	cout << "\nThe Determinant of 2 * 2 Matrix = " << determinant;

 	return 0;
}
