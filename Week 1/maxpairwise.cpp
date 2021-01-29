// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,max1,max2,x;
	cin >> n;
	vector <int> V1;
	
	for (int i = 0; i < n; i++)
	{
		
		cin >> x;
		V1.push_back(x);
	}
	max1 = 0;
	max2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (V1[i] > max1)
		{
			max2 = max1;
			max1 = V1[i];
		}
		else if (V1[i] > max2)
		{
			max2 = V1[i];
		}

	}
	long long int result = max1;
		result *= max2;
	cout << result;
}
