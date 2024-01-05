#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main() {

	ll N, T;
	cin >> N >> T;
	vector<ll> v(N);
	for(int i = 0; i < N; i++) {
		cin >> v[i];
	}
	// binary searching the K (the answer)

	/*
	   given a K -> mid, check whether I can
	   fit all the cows within a certain time frame
	*/

	// O(N logN)
	auto check = [&](int mid) {
		priority_queue<ll,vector<ll>,greater<ll>> pq;
		// current times
		// top will be smaller value, minimum
		int curTime = 0;
		for(int i = 0; i < N; i++) {
			if(pq.size() == mid)
			{
			    cout<<pq.top()<<"----"<<endl;
				curTime = pq.top();
				pq.pop();
			}
cout<<v[i]<<endl;
			pq.push(curTime + v[i]);
		}
		while(pq.size())
		{
			curTime = pq.top();
			pq.pop();
		}
		// cure time will be the max
		return curTime <= T;
	};

	// logN time
	int lo = 1, hi = N, sol = 0;
	while(lo <= hi) {
		int mid = lo + (hi - lo) / 2;

		// if check(mid) returned true, that means at K = mid, it works
		if(check(mid)) {
			hi = mid - 1; // find a smaller value
			sol  = mid;
		}
		else {
			lo = mid + 1;
		}
	}
	// O(NlogNlogN)
	cout << sol << endl;
}
