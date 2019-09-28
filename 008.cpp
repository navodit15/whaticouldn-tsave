#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>
 
 
//#pragma GCC optimize("O3")
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("unroll-loops")
 
 
#define boost ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD 1000000007
#define sd(x) scanf("%d", &(x))
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ones(x) __builtin_popcount(x)
#define sz(x) int (x.size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define REP(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define f1(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,a,b) for(int i=a; i<b; i++)
#define NFOR(i,a,b) for(int i=(a);i>=(b);--i)
 
 
using ll = unsigned long long ;
using namespace __gnu_pbds;
using namespace __gnu_cxx;
using namespace std;
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;  
typedef double ld;
typedef vector<ll> vll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// order_of_key (val): returns the no. of values less than val
// find_by_order (k): returns the iterator to kth largest element.(0-based)
 
 
template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}
 
#ifdef np
#define trace(...) cout<<"Line:"<<__LINE__<<" "; __f(#__VA_ARGS__, __VA_ARGS__)
template<typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
	cout<<name<<" : "<<arg1<<endl;
}
template<typename Arg1, typename ... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {
	const char *comma=strchr(names+1,',');
	cout.write(names,comma-names)<<" : "<<arg1<<" | ";
	__f(comma+1,args...);
}
#else
#define trace(...)
#define endl '\n'
#endif
 
auto clk=clock();
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
  

/*
const string s ="73167176531330624919225119674426574742355349194934
                  96983520312774506326239578318016984801869478851843
                  85861560789112949495459501737958331952853208805511
                  12540698747158523863050715693290963295227443043557
                  66896648950445244523161731856403098711121722383113
                  62229893423380308135336276614282806444486645238749
                  30358907296290491560440772390713810515859307960866
                  70172427121883998797908792274921901699720888093776
                  65727333001053367881220235421809751254540594752243
                  52584907711670556013604839586446706324415722155397
                  53697817977846174064955149290862569321978468622482
                  83972241375657056057490261407972968652414535100474
                  82166370484403199890008895243450658541227588666881
                  16427171479924442928230863465674813919123162824586
                  17866458359124566529476545682848912883142607690042
                  24219022671055626321111109370544217506941658960408
                  07198403850962455444362981230987879927244284909188
                  84580156166097919133875499200524063689912560717606
                  05886116467109405077541002256983155200055935729725
                  71636269561882670428252483600823257530420752963450"; */
	

void solve(){
	ll n , m ;
	string s;
	cin>>n>>m>>s;
	ll max = 0;
	for(ll i= 0 ; m+i <n ;++i){
		ll curr =1 ;
		for(ll ii =0 ;ii<m ;++ii){
			curr*=(s[i+ii]-'0');
		}
		if(curr>max) max = curr;
	}
	cout<<max<<endl;
}

signed main(){
	boost
	int T =1 ; 
	cin>>T;
	while(T--){
		solve();
	}
 
#ifdef np
	cout<<endl<<endl<<endl<<"Time elapsed: "<<(double)(clock()-clk)/CLOCKS_PER_SEC<<endl;
#endif
	return 0;
}

//23514624000



//Time elapsed: 3.7e-05
