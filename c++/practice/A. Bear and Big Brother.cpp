#include<bits/stdc++.h>


using namespace std;

int main()
{
    int t=1 ;// Number of test cases
//    cin >> t;

    while (t--)
    {
        int a, b; // Number of problems and number of upcoming rounds
        cin >> a >> b;
        for(int i=1; i<=b; i++)
        {
            a=a*3;
            b=b*2;
            if(a>b)
            {
                cout<<i;
                break;
            }
        }
    }

    return 0;
}
