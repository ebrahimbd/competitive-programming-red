#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int n, k, a, b = 0, mas[10000];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        mas[i] = a;
    }
    for (int j = 1; j <= n; j++) {
        if (mas[j] >= mas[k] && mas[j] > 0) {
            b++;
        }
    }
    cout << b;
}
