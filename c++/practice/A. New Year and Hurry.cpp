#include<bits/stdc++.h>


using namespace std;

int main()
{
    int t=1 ;// Number of test cases
//    cin >> t;

    while (t--)
    {
        int n, k; // Number of problems and number of upcoming rounds
        cin >> n >> k;
        vector<int>arr(n+1, 0);

        for(int i=1; i<=n; i++)
        {
            arr[i]=i;
            arr[i]=arr[i]*5;
        }

        int count=0;
        int check=k;
        for(int i=1; i<=n; i++)
        {
            if(check<=240)
            {
                check+=arr[i];
                if(check>240)
                {
                    break;
                }
                count++;
            }
        }
        cout<<count<<"\n";


    }

    return 0;
}
