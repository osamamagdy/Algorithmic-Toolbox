/*
// Car Fueling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n, full, total;
	int refils = 0;

	//Inputs : total distance from start to end, distance cut by full tank, number of gas stations
	cin >> total >> full >> n;

	//The maximum reachable distance now
	int max = full;

	// Array of gas stations locations
	int* arr = new int[n];


	// Input : location of every gas station
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}


	// Traverse for all Gas stations
	for (int i = 0; i < n - 1; i++)
	{

		//If you can reach this gas station
		if (arr[i] <= max)
		{
			//If you can't reach the next gas station, you refill here
			if (arr[i + 1] > max)
			{
				refils++;
				max = full + arr[i];
			}
		}
		else //If you can't reach it, it's impossible to reach end ( as we have data of sorted gas stations from start to end
		{
			cout << -1 << endl;
			return 0;
		}
	}

	//If you can't reach the last station or you can't reach the end even using the last station
	if ((max < arr[n - 1]) || (total > full + arr[n - 1]))
	{
		cout << -1 << endl;
		return 0;
	}
	else if (total > max) //This will till you if you need the last station to reach the end or not
	// Remember that being a nested if makes you sure that you'll reach the end in both cases
	// but you need the minimum number of refils
	{
		refils++;
	}

	cout << refils << endl;
	return 0;

}
*/