#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t;while(t--)
#define rep(i,s,n) for(int i=s;i<n;i++)
#define repp(i,n,e) for(int i=n-1;i>=e;i--)
#define mset(x,v)   memset(x,v,sizeof(x))
#define isnum(a)    (a>=48 && a<=57)
#define ischar(a)   (a>='a' && a<='z')
#define isChar(a)   (a>='A' && a<='Z')
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef unsigned long long llu;
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define boostio ios_base::sync_with_stdio(false);cin.tie(0);
#define mod 1000000007


const int N = 2e5 + 5;

//template<typename T>
//void printIntArray(vector<T> a){
//	for(T elem : a)
//    	cout << elem << endl;
//}

bool comparerVi(vi a,vi b){
	return a[0] < b[0];
}

bool comparerint(int a,int b){
	return a > b;
}
bool isDigit(char c){
	return c >='0' && c <= '9';
}
bool isOperator(char c){
	return c == '/' || c == '*' || c == '+' || c == '-';
}

vector<int> v[N];

void solve(){
	
	int n;
	cin >> n;
	set<int> s;
	for(int i=1;i<=n;i++){
		v[i].clear();
		v[i].pb(0);
	}
	
	for(int i=1;i<=n;i++){
		int x;
		cin >> x;
		if(v[x].back() == i-1)
			v[x].pop_back();
		v[x].pb(i);
		s.insert(x);
	}
	
	for(int i=1;i<=n;i++){
		if(v[i].back() == n){
			v[i].pop_back();
		}
		v[i].pb(n+1);
	}
	int ans = INT_MAX;
	for(int x = 1;x <= n;x++){
		if(!s.count(x)) continue;
		int c = v[x].size()-1;
	//	cout << c << endl;
		ans = min(ans,c);
	}
	cout << ans << "\n";
}

int main()
{
 test(t)
 solve();
 return 0;
}

