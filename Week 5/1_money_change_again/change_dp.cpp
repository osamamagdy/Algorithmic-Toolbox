/*
#include <iostream>
using namespace std;

int min(int a, int b)
{
	return a <= b ? a : b;
}

int get_change(int m) {
  //write your code here
	int numcoins;
	int coins[3] = { 1,3,4 };
	int* change = new int[m + 1];
	change[0] = 0;
	for (int i = 1; i <= m; i++)
	{
		change[i] = change[i-1] + 1;
		for (int j = 1; j < 3; j++)
		{
			if (i >= coins[j] )
			{
				numcoins = change[i - coins[j]] + 1;
				change[i] = min(change[i], numcoins);
			}

		}
	}

  return change[m];
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
*/