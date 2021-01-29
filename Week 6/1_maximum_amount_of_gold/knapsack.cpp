/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;

int optimal_weight(int W, const vector<int> &w) {
  
    vector<vector<int>> matrix(w.size(), vector<int>(W+1, 0));


    for (int row = 1; row < w.size(); row++)
    {
        for (int col = 1; col <= W; col++)
        {
            matrix[row][col] = matrix[row - 1][col];
            if (w[row]<=col)
            {
                int val = matrix[row - 1][col - w[row]] + w[row];
                if (val>=matrix[row][col])
                {
                    matrix[row][col] = val;
                }
            }
        }
    }

    return matrix[w.size()-1][W];

}

int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n + 1);
  w[0] = 0;
  for (int i = 1; i <= n; i++) {
    std::cin >> w[i];
  }
  std::cout << optimal_weight(W, w) << '\n';
}
*/


/*
10 4
6 3 4 2
*/