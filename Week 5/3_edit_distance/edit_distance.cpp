
#include <iostream>
#include <string>
#include <vector>

using std::string;
using namespace std;

int min(int a, int b, int c)
{
	if (a <= b)   
	{
		/// a is smaller
		if (a <= c)
		{
			/// a is smaller
			return a;
		}

		/// c is smaller
		return c;
	}

/// b is smaller
	if (b <= c)
	{
		///b is smaller
		return b;
	}
	/// c is smaller
	return c;



}


int edit_distance(const string& str1, const string& str2) {
	//Before begining you have to specify which one is the column and which one is the row
	// It doesn't matter which one to choose but you have to make your choice consistant

	// Here we choose str2 as rows
	// str1 as columns
	int rows = str2.size();
	int cols = str1.size();


	vector<vector<int>> matrix;

	// Remember that you have an extra row,col with 0,0 

	for (int i = 0; i <= rows; i++)
	{
		vector<int>row;

		// The next loop we construct the one row with all columns
		// This is how you make 2D vector with custom size
		for (int j = 0; j <= cols; j++)
		{
			row.push_back(0);
		}
		matrix.push_back(row);
	}

	int ins, del, mis, match;
	matrix[0][0] = 0;
	for (int i = 1; i <= cols; i++)
	{
		matrix[0][i] = i;
		for (int j = 1; j <= rows; j++)
		{
			matrix[j][0] = j;
			ins = matrix[j-1][i] + 1;
			del = matrix[j][i-1] + 1;
			mis = matrix[j - 1][i - 1] + 1;
			match = matrix[j - 1][i - 1];

			if (str1[i-1] == str2[j-1])
			{
				matrix[j][i] = min(ins, del, match);
			}
			else
			{
				matrix[j][i] = min(ins, del, mis);

			}
		}
	}
	return matrix[str2.size()][str1.size()];
}



/*
int edit_distance_lecture(const string& str1, const string& str2) {

	//Before begining you have to specify which one is the column and which one is the row
	// It doesn't matter which one to choose but you have to make your choice consistant

	// Here we choose str1 as rows
	// str2 as columns

	int rows = str1.size();
	int cols = str2.size();

	vector<vector<int>> matrix;

	// Remember that you have an extra row,col with 0,0 


	for (int i = 0; i <= rows; i++)
	{
		vector<int>row;
		// The next loop we construct the one row with all columns
		// This is how you make 2D vector with custom size
		for (int j = 0; j <= cols; j++)
		{
			row.push_back(0);
		}
		matrix.push_back(row);
	}

	int ins, del, mis, match;
	matrix[0][0] = 0;

	for (int j = 1; j <= cols; j++)
	{
		matrix[0][j] = j;
		for (int i = 1; i <= rows; i++)
		{
			matrix[i][0] = i;
			ins = matrix[i][j-1] + 1;
			del = matrix[i - 1][j] + 1;
			mis = matrix[i - 1][j - 1] + 1;
			match = matrix[i - 1][j - 1];

			if (str1[i - 1] == str2[j - 1])
			{
				matrix[i][j] = min(ins, del, match);
			}
			else
			{
				matrix[i][j] = min(ins, del, mis);

			}
		}
	}
	return matrix[str1.size()][str2.size()];

}
*/


int main() {
	string str1;
	string str2;
	std::cin >> str1 >> str2;
	std::cout << edit_distance(str1, str2) << std::endl;
	return 0;
}
