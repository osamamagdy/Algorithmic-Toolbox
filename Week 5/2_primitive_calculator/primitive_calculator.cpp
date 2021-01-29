
/*
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using namespace std;

int min(int a, int b, int c)
{
	if (a <= b)   
	{
		/// a is smaller
		if (a <= c)
		{
			/// a is smaller
			return a;
		}

		/// c is smaller
		return c;
	}

/// b is smaller
	if (b <= c)
	{
		///b is smaller
		return b;
	}
	/// c is smaller
	return c;



}



vector<int> optimal_sequence(int n) {
	std::vector<int> sequence_count;
	int mult3;
	int mult2;
	int add1;
	int x = 2;

	sequence_count.push_back(0);
	sequence_count.push_back(0);
	while (x <= n) {
		mult3 = n;
		mult2 = n;
		add1 = n;
		if (x % 3 == 0) {
			mult3 = sequence_count[x / 3] + 1;
		}
		if (x % 2 == 0) {
			mult2 = sequence_count[x / 2] + 1;
		}
		add1 = sequence_count[x - 1] + 1;
		sequence_count.push_back(min(mult3, mult2, add1));
		x++;
	}
	return sequence_count;
}

int main() {
	int n;
	std::cin >> n;
	vector<int> sequence_count = optimal_sequence(n);
	std::cout << sequence_count[sequence_count.size() - 1] << std::endl;
	int i = n;
	vector<int> sequence ;
	while (i>1)
	{
		sequence.push_back(i);
		if ( (i%3 == 0 ) && sequence_count[i/3] == sequence_count[i]-1)
		{
			i = i / 3;
		}
		else if ((i % 2 == 0) && sequence_count[i / 2] == sequence_count[i] - 1)
		{
			i = i / 2;
		}
		else
		{
			i = i - 1;
		}


	}

	cout << 1<<" ";
	for (int i = sequence.size() - 1 ; i >=0 ; i--)
	{
		cout << sequence[i] << " ";
	}
	return 0;
}
*/