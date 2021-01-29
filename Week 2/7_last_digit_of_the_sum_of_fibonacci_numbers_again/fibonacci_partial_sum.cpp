/*
#include <iostream>
#include <vector>
using std::vector;

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}



int get_fibonacci_partial_sum_fast(long long m , long long n)
{
	
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


	//Reduce n,m as the last digit of the sum remains the same for each period
	//it depends only on its index in pisano period
	n = n % period;
	m = m % period;

	//Compute the last digit of the sum of all last digits in pisano period
	int sum = 0;

	
	/// <summary>
	///  It might happen to you that the index of smaller number(m) in pisano period is actually beyond the index of bigger number (n)
	/// In that case you need to split your sum into two parts: 
	/// 1-from m to the end of the period 
	/// 2-assign 0 to m and start the next loop from 0 to n
	/// </summary>
	/// <param name="m"></param>
	/// <param name="n"></param>
	/// <returns></returns>

	if (m>n)
	{
		for (int i = m; i < period; i++)
		{
			sum = (sum + v[i]) % 10;
		}
		m = 0;
	}

	/// <summary>
	/// The main Computation loop
	/// </summary>
	/// <param name="m"></param>
	/// <param name="n"></param>
	/// <returns></returns>

	for (int i = m; i <= n; i++)
	{
		sum = (sum + v[i]) % 10;
	}


	return sum;
}





int main() {
    long long from, to;
    std::cin >> from >> to;
    //std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
	std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
	return 0;
}
*/