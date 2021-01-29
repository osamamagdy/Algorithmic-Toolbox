/*
#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using namespace std;


string largest_number(vector<string> a) {
	//write your code here
	stringstream ret;


	while (!a.empty())
	{
		int index = 0;
		for (size_t i = 0; i < a.size(); i++)
		{
			if (index != i && (a[i] + a[index]) > (a[index] + a[i]))
			{
				index = i;
			}
		}

		ret << a[index];

		a[index] = a[a.size() - 1];
		a.pop_back();

	}
	string result;
	ret >> result;
	return result;
}

int main() {
	int n;
	std::cin >> n;
	vector<string> a(n);
	for (size_t i = 0; i < a.size(); i++) {
		std::cin >> a[i];
	}
	std::cout << largest_number(a);
}
*/