#include<bits/stdc++.h>

//https://codeforces.com/problemset/problem/1592/A

using namespace std;

int solve(int val, int h, int sum) {
    if(h-sum<=0) {
        return val;
    } else {
        return val;
    }
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        int n, h;
        cin >> n >> h;
        vector<int>arr(n);
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        }
        int val=0;
        sort(arr.begin(), arr.end());

        vector<int>save(n);
        for(int i=0; i<n; i++) {
            int mid, left=0, right=arr.size();
            mid=left+ (right-left)/2;
            int helth=0;
            if(mid==h) {
                val++;
                break;
            }
            if(mid<=h) {
                left=mid+1;
                save.push_back(arr[left]);
                if(h-arr[left]<=0) {
                    val++;
                    break;
                }
            } else {
                right=mid-1;
            }
        }
        cout<<val<<endl;
    }
    return 0;
}
