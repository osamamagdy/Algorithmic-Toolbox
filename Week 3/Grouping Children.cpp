/*
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float * arr = new float[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int groups = 0;
	float max;
	for (int i = 0; i < n;)
	{
		max = arr[i]+1;
		while (arr[i]<= max && i<n )
		{
			i++;
		}
		groups++;

	}

	cout << groups << endl;
	return 0;
}

*/