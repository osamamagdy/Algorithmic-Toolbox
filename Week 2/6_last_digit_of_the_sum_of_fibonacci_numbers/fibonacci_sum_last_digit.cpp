/*

#include <iostream>
#include <vector>
using namespace std;

int fibonacci_sum_naive(long long n) {
	if (n <= 1)
		return n;

	long long previous = 0;
	long long current = 1;
	long long sum = 1;

	for (long long i = 0; i < n - 1; ++i) {
		long long tmp_previous = previous;
		previous = current;
		current = tmp_previous + current;
		sum += current;
	}

	return sum % 10;
}

int fibonacci_sum_fast(long long n)
{
	//if n is small, no need to calculations
	if (n <= 1) return n;

	//Start Computing pisano period
	int prev = 0;
	int curr = 1;
	int result;

	//Store pisano period in a vector
	vector<int> v;
	v.push_back(0);
	v.push_back(1);

	do
	{
		result = (curr + prev) % 10;
		prev = curr;
		curr = result;
		v.push_back(result);
	} while ((prev != 0) || (curr != 1));

	//Get rid of the occurence of 0 1 
	v.pop_back();
	v.pop_back();

	//pisano period length
	int period = v.size();


	//Reduce n as the last digit of the sum remains the same for each period
	//it depends only on its index in pisano period
	n = n % period;

	//If its index is small return it
	if (n <= 1) return n;

	//Compute the last digit of the sum of all last digits in pisano period
	int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum = (sum + v[i]) % 10;
	}


	return sum;
}


int main() {
	long long n = 0;
	std::cin >> n;
	//std::cout << fibonacci_sum_naive(n)<<std::endl;
	std::cout << fibonacci_sum_fast(n);
	return 0;
}
*/