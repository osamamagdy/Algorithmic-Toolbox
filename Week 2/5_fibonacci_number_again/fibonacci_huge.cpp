/*
#include <iostream>
#include <vector>

using namespace std;

long long get_fibonacci_huge_naive(long long n, long long m) {
	if (n <= 1)
		return n;

	long long previous = 0;
	long long current = 1;

	for (long long i = 0; i < n - 1; ++i) {
		long long tmp_previous = previous;
		previous = current;
		current = tmp_previous + current;
	}

	return current % m;
}

int pisano_period(int m)
{
	int previous = 0;
	int curr = 1;
	for (int i = 0; i < m * m; i++)
	{

		return i;
	}
}

long long get_fibonacci_huge_fast(long long n, int m)
{
	if (n <= 1) return n;

	vector <int> v;

	int first = 0;
	int second = 1;
	int result ;
	v.push_back(0);
	v.push_back(1);

	do
	{
		result = (first + second) % m;
		v.push_back(result);
		first = second;
		second = result;

	} while (!((first == 0) && (second == 1)));

	v.pop_back();
	v.pop_back();

	int period = v.size();

	n = n % period;

	return v[n];
}


int main() {
	long long n;
	int m;
	std::cin >> n >> m;
	std::cout << get_fibonacci_huge_fast(n, m) << '\n';
}
*/