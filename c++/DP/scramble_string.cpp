#include <iostream>
using namespace std;

// Function to check if strings 'X' and 'Y' are interleaving of 'S' or not
bool isInterleaving(string X, string Y, string S)
{
	int M = X.size();
	int N = Y.size();

	// base case: the size of a given string doesn't match
	// the sum of sizes of input strings
	if (M + N != S.size()) {
		return false;
	}

	// Create a lookup table T[][] to store solution to already computed
	// subproblems. T[i][j] is true when `S[0…i+j-1]` is an interleaving
	// of `X[0…i-1]` and `Y[0…j-1]`
	bool T[M + 1][N + 1];

	// fill the lookup table in a bottom-up manner
	for (int i = 0; i <= M; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			if (i == 0 && j == 0) {			// both strings are empty
				T[i][j] = true;
			}

			// if the current char of 'S' matches the current char of both 'A' and 'B'
			else if (i and j and X[i - 1] == S[i + j - 1] and
					Y[j - 1] == S[i + j - 1]) {
				T[i][j] = T[i - 1][j] || T[i][j - 1];
			}

			// if the current char of 'X' matches with the current char of 'S'
			else if (i and X[i - 1] == S[i + j - 1]) {
				T[i][j] = T[i - 1][j];
			}

			// if the current char of 'Y' matches with the current char of 'S'
			else if (j and Y[j - 1] == S[i + j - 1]) {
				T[i][j] = T[i][j - 1];
			}
		}
	}

	// T[M][N] stores the result
	return T[M][N];
}

int main()
{
	string X = "ABC";
	string Y = "ACD";
	string S = "ACDABC";

	if (isInterleaving(X, Y, S)) {
		cout << "Interleaving";
	}
	else {
		cout << "Not an Interleaving";
	}

	return 0;
}