#pragma GCC target ("avx2")
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;

#define getBit(x,i) (x&(1<<i))
#define setBit(x,i) (x|(1<<i))
#define mem(A,N) memset(A,N,sizeof(A))
#define mid(L,R) ((L+R)/2)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define rep(i, x, y)  for(int i = x; i < y; ++i)
#define rep2(i, x, y)  for(int i = x; i < y; i+=2)
#define Rep(i, x, y)  for(int i = x; i <= y; ++i)
#define Rep2(i, x, y)  for(int i = x; i <= y; i+=2)
#define srep(i, x, y) for(int i = x; i > y; --i)
#define srep2(i, x, y) for(int i = x; i > y; i-=2)
#define sRep(i, x, y) for(int i = x; i >= y; --i)
#define sRep2(i, x, y) for(int i = x; i >= y; i-=2)
#define sumsTo(s) ((int)((-1+sqrt(1+8*s))/2))
#define ite(it,s) for(auto it = s.begin(); it!=s.end(); ++it)
#define all(v) v.begin(),v.end()
#define rev(v) reverse(v.begin(),v.end())
#define Sort(x) sort(x.begin(),x.end());
#define f1(i,n) for (int i=1;i<=n;++i)
#define f0(i,n) for (int i=0;i<n;++i)
#define sz(x) ((int)(x).size())
#define len(x) ((int)(x).length())
#define fi first
#define se second

#define linf 1000000000000000001LL
#define inf 1000000001
#define mod 1000000007
#define eps 1e-9
#define Pi 3.14159265358979323846

// Debug
#define dump(x)  cerr << #x << "=" << (x) << endl;
#define write(x) cerr << #x << "=" << (x) << ", ";
#define writeSet(s) cerr << #s << "= "; for(auto it = s.begin(); it!=s.end(); it++) (it==s.begin())? cerr << *it : cerr << ' ' << *it;
#define dumpSet(s) cerr << #s << "= "; for(auto it = s.begin(); it!=s.end(); it++) (it==s.begin())? cerr << *it : cerr << ' ' << *it; cerr << endl;
#define writeMap(s) cerr << #s << "= "; for(auto it = s.begin(); it!=s.end(); it++) (it==s.begin())? cerr << it->first << ',' << it->second : cerr << ' ' << it->first << ',' << it->second;
#define dumpMap(s) cerr << #s << "= "; for(auto it = s.begin(); it!=s.end(); it++) (it==s.begin())? cerr << it->first << ',' << it->second : cerr << ' ' << it->first << ',' << it->second; cerr << endl;

// Debug - Printing loop counters (i,j,k,p)
#define writei cerr << "i = " << i << ".. ";
#define dumpi cerr << "i = " << i << endl;
#define writej cerr << "j = " << j << ".. ";
#define dumpj cerr << "j = " << j << endl;
#define writek cerr << "k = " << k << ".. ";
#define dumpk cerr << "k = " << k << endl;
#define writep cerr << "p = " << p << ".. ";
#define dumpp cerr << "p = " << p << endl;

// Print objects
#define printSet(s) for(auto it = s.begin(); it!=s.end(); it++) (it==s.begin())? cout << *it : cout << ' ' << *it; cout << '\n';
#define printPairset(s) for(auto it = s.begin(); it!=s.end(); it++) (it==s.begin())? cout << '(' << it->first << ',' << it->second << ')' : cout << " (" << it->first << ',' << it->second << ')'; cout << '\n';
#define printVector(x) for(auto it = x.begin(); it!=x.end(); it++) (it==x.begin())? cout << *it : cout << ' ' << *it; cout << '\n';
#define printArray(a,x,y) for(auto it = a+x; it != a+y; it++) (it==a+x)? cout << *it : cout << ' ' << *it; cout << '\n';
#define PrintArray(a,x,y) for(auto it = a+x; it != a+y+1; it++) (it==a+x)? cout << *it : cout << ' ' << *it; cout << '\n';

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
bool is_int(double a) { return floor(a) == a; }
ostream& operator << (ostream& os, const ii& p) { return (os << '(' << p.first << ',' << p.second << ')'); }
template<typename T> typename T::iterator min_map_element(T& m) { return min_element(m.begin(), m.end(), [](typename T::value_type& l, typename T::value_type& r) -> bool { return l.second < r.second; }); }
template<typename T> typename T::iterator max_map_element(T& m) { return max_element(m.begin(), m.end(), [](typename T::value_type& l, typename T::value_type& r) -> bool { return l.second < r.second; }); }

// ***************** End Of Template ********************

int dp[1000][1000];
char a[1000][1000];

int dx[] {1,0};
int dy[] {0,1};

int n, m;

bool ch(int i, int j) {
	return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == '.';
}

int f(int i, int j) {
	if(dp[i][j] != -1) return dp[i][j];
	
	int ans = 0;
	rep(k,0,2) {
		int tx = i + dx[k];
		int ty = j + dy[k];
		if (ch(tx, ty)) {
			ans = (ans + f(tx, ty)) % mod;
		}
	}
	
	return dp[i][j] = ans;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> n >> m;
	rep(i,0,n) {
		rep(j,0,m) {
			cin >> a[i][j];
		}
	}
	mem(dp,-1);
	dp[n-1][m-1] = 1;
	cout << f(0,0);
	return 0;
}

