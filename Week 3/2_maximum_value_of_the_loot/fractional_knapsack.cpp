/*
#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;

int getmin(int a, int b)
{
    return a < b ? a : b;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values , int n) {
  double value = 0.0;

  //You need to know 
  vector<double> per(n);
  for (int i = 0; i < n; i++)
  {
      per[i] = (values[i] * 1.0) / weights[i];
  }

  while (capacity>0)
  {
      //Get the most valuable item in the Loot
      int maxElementIndex = std::max_element(per.begin(), per.end()) - per.begin();

      //Get the size of how many items you can take out of it
      int size = getmin(capacity, weights[maxElementIndex]);

      //Increment your value
      value += size * per[maxElementIndex];

      //Decrement your capacity
      capacity -= size;

      //Make the most valuable item now zero as it won't be chosen in the next iteration
      per[maxElementIndex] = 0.0;
  }

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values,n);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
*/