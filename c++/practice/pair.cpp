// Fibonacci Series using Space Optimized Method
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	int a = 0, b = 1, c, i;
	int sum=1;
	if( n == 0)
		return a;
	for(i = 2; i <= n; i++)
	{
	c = a + b;
	sum+=c;
	a = b;
	b = c;
	}
	return sum;
}

// Driver code
int main()
{
	int n;
	cin>>n;
	cout << fib(n);
	return 0;
}

// This code is contributed by Code_Mech
