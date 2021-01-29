
#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#define LLONG_MAX     9223372036854775807

#define LLONG_MIN   (-9223372036854775807)


using namespace std;

long long eval(long long a, long long b, char op) {
  if (op == '*') {
    return a * b;
  } else if (op == '+') {
    return a + b;
  } else if (op == '-') {
    return a - b;
  } else {
    assert(0);
  }
}


void MinAndMax(int i , int j , vector<vector<long long>> &M , vector<vector<long long>> &m , vector<int> nums , vector<char> ops)
{
    long long MIN = LLONG_MAX;
    long long MAX = LLONG_MIN;

    for (int k = i; k < j ; k++)
    {
        long long a = eval(M[i][k], M[k + 1][j], ops[k]);
        long long b = eval(M[i][k], m[k + 1][j], ops[k]);
        long long c = eval(m[i][k], M[k + 1][j], ops[k]);
        long long d = eval(m[i][k], m[k + 1][j], ops[k]);
        MIN = min(MIN, min(a, min(b, min(c, d))));
        MAX = max(MAX, max(a, max(b, max(c, d))));
    }
    M[i][j] = MAX;
    m[i][j] = MIN;
    
}




long long get_maximum_value(const string &exp) {
  
    int n = (exp.size() + 1) / 2;
    //First we need to convert the string into arrays of numbers and operations
    //this is simple as the input constraints for numbers in this problem is (1->9)
    vector<int> nums(n);
    vector<char> ops(n - 1);
    for (size_t i = 0; i < exp.size(); i++)
    {
        if (i%2==0)
        {
            nums[i / 2] = exp[i]-48; //To convert ASCII into numbers
        }
        else
        {
            ops[i / 2] = exp[i];
        }
    }


    //Build the Max matrix:M & Min matrix:m with sizes n*n
    vector<vector<long long>> M(n, vector<long long>(n, 0));
    vector<vector<long long>> m(n, vector<long long>(n, 0));

    for (int i = 0; i < n; i++)
    {
        M[i][i] = nums[i];
        m[i][i] = nums[i];
    }
    int j;
    for (int s = 1; s < n; s++)
    {
        for (int i = 0; i < n-s; i++)
        {
            j = i + s;
            MinAndMax(i, j, M, m, nums, ops);
        }
    }



  return M[0][n-1];
}

int main() {
  string s;
  std::cin >> s;
  std::cout << get_maximum_value(s) << '\n';
}