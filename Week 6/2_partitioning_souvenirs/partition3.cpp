/*
#include <iostream>
#include <vector>
#include<algorithm>

using std::vector;
using namespace std;

//This function backtracks the matrix and erase its elements from the vector A
void backtrack(vector<vector<int>>matrix, vector<int>& A , int required)
{
    int row = A.size() - 1;
    int col = required;
    int element = matrix[row][col];
    while (element>0)
    {
        if (element-A[row]>=0 && A[row] + matrix[row - 1][col - A[row]] >= matrix[row - 1][col])
        {

            col -= A[row];
            A[row] = required+1;
            row--;
            
        }
        else
        {
            row--;
        }
        element = matrix[row][col];
    }

    A.erase(std::remove(A.begin(), A.end(), required+1), A.end());

}

//A knapsack function that checks if you can reach the required with the current A
int partition(vector<int>& A, int required)
{

    vector<vector<int>> matrix(A.size(), vector<int>(required + 1, 0));


    for (int row = 1; row < A.size(); row++)
    {
        for (int col = 1; col <= required; col++)
        {
            matrix[row][col] = matrix[row - 1][col];
            if (A[row] <= col)
            {
                int val = matrix[row - 1][col - A[row]] + A[row];
                if (val > matrix[row][col])
                {
                    matrix[row][col] = val;
                }
            }
        }
    }
    if (matrix[A.size() - 1][required] == required)
    {
        backtrack(matrix, A, required);
        return 1;
    }

    return 0;

}


int partition3(vector<int> &A , int required) {

    int count = partition(A, required);
    count += partition(A, required);
    count += partition(A, required);
    return (count==3) ? 1 : 0;
}
*/

/*
* The matrix dimensions is rows = A.size() , cols = sum / 3;
* we intend to make two groups, each one of them have the sum of the required 
* The algorithm we follow is the knapsack without repetition but without weight, just a value 
* we first maximize the the matrix with the upper limit = sum / 3 
* If it reaches exactly the limit, we use backtracking to erase the chosen values and try the same algorithm again but on a smaller vector
* it it reaches exactly the limit for the second time, then it's quarenteed it will do it for the third so it's true without repeating
*/


/*
int main() {
  int n,sum,required;
  std::cin >> n;
  sum = 0;
  required = 0;
  vector<int> A(n);
  for (size_t i = 0; i < A.size(); ++i) {
    std::cin >> A[i];
    sum += A[i];
  }
  required = sum / 3;
  if (required*3 == sum)
  {
      sort(A.begin(), A.end());
      A.insert(A.begin(), 0);
      std::cout << partition3(A,required) << '\n';
  }
  else
  {
      cout << 0;
  }
  return 0;
}
*/