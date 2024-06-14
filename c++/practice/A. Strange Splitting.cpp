#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (a[0] != a[n - 1]) {
            cout << "YES" << endl;
            cout<<"BR";
            for(int i=0; i<n-2; i++){
            cout << "B";
            }
            cout<<endl;
        }  else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
