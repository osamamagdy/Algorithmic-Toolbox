/*
#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int>& a, int start, int end) {
	if (start == end) return -1;
	if (start + 1 == end) return a[start];
	//write your code here
	int mid = start + ((end - start) / 2);
	int majority1 = get_majority_element(a, start, mid);
	int majority2 = get_majority_element(a, mid, end);
	int count1 = 0;
	int count2 = 0;
	if (majority1 != -1)
	{
		for (int i = start; i < end; i++)
		{
			if (a[i] == majority1)
			{
				count1++;
			}
		}
		if (count1 > (end-start) / 2)
		{
			return majority1;
		}
	}
	if (majority2 != -1)
	{
		for (int i = start; i < end; i++)
		{

			if (a[i] == majority2)
			{
				count2++;
			}
		}
		if (count2 > (end-start) /2 )
		{
			return majority2;
		}
	}

	return -1;
}





//works fime for small integers (from 1 --> 10^6)
//You can not allocate a vector of size bigger than 10^6 on your machine
// so this won't work as we need the size to equal the maximum value of the input array which can be 10^9
int get_majority_element_advanced(vector<int>& a, int start, int end)
{
	vector<int> count(1000000);
	for (int i = 0; i < a.size(); i++)
	{
		count[a[i]] += 1;
	}

	for (int i = 0; i < a.size(); i++)
	{
		if (count[a[i]] > a.size() / 2)
		{
			return 1;
		}
	}
	return -1;
}


int main() {
	int n;
	std::cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < a.size(); ++i) {
		std::cin >> a[i];
	}
	std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
*/