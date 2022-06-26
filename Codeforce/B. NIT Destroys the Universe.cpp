#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;





void solve(){
	
	ll n;
	cin >>n;
	int arr[n];
	
	for (int i=0; i<=n; i++){
		cin>>arr[i];
	}
	int c=count(arr, arr+n, 0);
	if(c==n){
		cout <<0<<endl;
		return;
		}
	if(c==0){
		cout <<1<<endl;
		return ;
		}
	if(arr[0]==0 && arr[n-1]==0) c--;
	cout<<c<<endl;
	}




int main()
{
    fastread();
    
    ll t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}
