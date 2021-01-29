/*
#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  int x = 0;
  while (n>0)
  {
	  if (x+1 <= n )
	  {
		  x++;
		  summands.push_back(x);
		  n -= x;
	  }
	  else
	  {
		  summands[summands.size() - 1] += n;
		  n = 0;
	  }
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
*/