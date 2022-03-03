#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f
const int maxn=(int)2e5+100;
int main(){
	ll a[5];cin>>a[1]>>a[2]>>a[3]>>a[4];
	ll sum=(a[1]+a[2]+a[3]+a[4])/3;
	int fr=1;
	for(int i=1;i<5;++i){
		if(sum-a[i]){
			if(fr){fr=0;cout<<sum-a[i];}
			else cout<<" "<<sum-a[i];
		}
	}
}

