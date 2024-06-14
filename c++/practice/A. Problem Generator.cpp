#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int k, q; // Number of problems and number of upcoming rounds
        cin >> k >> q;
        vector<int>a(k);
        for (int i=0; i<k; i++) {
            cin>>a[i];
        }
        vector<int>n(q);
        for (int i=0; i<q; i++) {
            cin>>n[i];
        }

        for(auto &i: n) {
            if(i<a[0]) {
                cout<<i<<endl;
            } else {
                cout<<a[0]-1<<endl;
            }
        }

    }

    return 0;
}
