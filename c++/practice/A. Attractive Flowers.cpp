#include <bits/stdc++.h>
using namespace std;

int last_true(int lo, int hi, function<bool(int)> f)
{
    // if none of the values in the range work, return lo - 1
    lo--;
    while (lo < hi)
    {
        // find the middle of the current range (rounding up)
        int mid = lo + (hi - lo + 1) / 2;
        if (f(mid))
        {
            // if mid works, then all numbers smaller than mid also work
            lo = mid;
        }
        else
        {
            // if mid does not work, greater values would not work either
            hi = mid - 1;
        }
    }
    return lo;
}

int main()
{
    long long n;
    cin>>n;
    vector<int>a(n);
    for(auto &i: a)
    {
        cin >> i;
    }
    int sum=0;
    for(auto &j: a)
    {
        if(j%2 !=0)
        {
            sum+=j;
        }
        else if ((j-1)%2 !=0)
        {
            sum+=j-1;
        }

    }
    if(sum%2 !=0)
    {
        cout<<sum;
    }
    else
    {
        cout<<sum-1;
    }


}
