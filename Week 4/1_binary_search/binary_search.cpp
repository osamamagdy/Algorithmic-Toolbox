/*

#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int start = 0, end = (int)a.size() - 1 ; 
  int mid;
  while (start <= end)
  {
      mid = start + ((end - start) / 2);
      if (a[mid]==x)
      {
          return mid;
      }
      else if (a[mid]<x)
      {
          start = mid + 1;
      }
      else
      {
          end = mid - 1;
      }
  }
  return -1;
}

int Rec_binary_search(const vector<int>& a, int start, int end, int x)
{
    if (start>end)
    {
        return -1;
    }
    int mid = start + ((end - start) / 2);
    if (a[mid] == x)
    {
        return mid;
    }
    else if (a[mid] < x)
    {
        return Rec_binary_search(a, mid + 1, end, x);
    }
    else
    {
        return Rec_binary_search(a, start, mid-1, x);
    }
}




int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << Rec_binary_search(a,0,n-1, b[i]) << ' ';
  }
}
*/