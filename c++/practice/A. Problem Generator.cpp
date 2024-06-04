#include<bits/stdc++.h>

//https://codeforces.com/contest/1980/problem/A
//3
//10 1
//BGECDCBDED
//10 2
//BGECDCBDED
//9 1
//BBCDEFFGG

using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n, m; // Number of problems and number of upcoming rounds
        cin >> n >> m;
        string a; // String representing the difficulties of the problems
        cin >> a;

        unordered_map<char, int> frequencyMap;

        for (char ebrahim : a)
        {
            frequencyMap[ebrahim]=frequencyMap[ebrahim]+1;
        }
        int insert=0;

        for(const auto pair: frequencyMap)
        {
            if (pair.second < m)
            {
                insert+=m-pair.second;
            }
//       cout<<pair.first<<"-"<<pair.second<<endl;
        }
//        cout<<insert<<endl;
        int count_a=frequencyMap.size();
        cout<<m*(7-count_a)+insert<<endl;
    }

    return 0;
}
