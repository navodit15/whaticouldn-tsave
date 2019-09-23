/*#include <iostream>
using namespace std;
typedef unsigned __int64 u64;
#define L 100000000
char np[L+1];

u64 inv(u64 n, u64 m) { return n>1 ? m/n*(m-inv(m%n, m))%m : 1; }
u64 S(u64 n) {
  u64 s1=n-1;
  u64 s2=s1*inv(n-1,n)%n;
  u64 s3=s2*inv(n-2,n)%n;
  u64 s4=s3*inv(n-3,n)%n;
  u64 s5=s4*inv(n-4,n)%n;
  return (s1+s2+s3+s4+s5)%n;
}

void main() {
  u64 s=0;
  for(u64 n=2;n<L;n++) if(!np[n]) {
    for(u64 x=n*n;x<=L;x+=n) np[x]=1;
    if(n>=5) s+=S(n);
  }
  cout << s << endl;
}*/


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
  

const int maxn = 1e6+1;
ll primes[maxn];

void normal(){
	memset(primes,true,sizeof primes);
	primes[0]=primes[1]=false;
	for(int i =2 ; i*i<=maxn ;++i){
		if(primes[i]){
			for(int j = i ; j<=maxn ;j+=i){
				primes[j]=false;
			}
		}		
	}
}




vector<bool>seive;

bool isprime(ll x){
	if((x&1)==0) return x==2; //even numbers
	return seive[x>>1]; // lookup for odd numbers
}

void fill(ll n){
	const ll half=(n>>1)+1;
	seive.resize(half,true);
	seive[0]=false; // 1 is not prime
	for(ll i =1 ; i*i*2 < half ; ++i){
		if(seive[i]){
			ll curr = 3*i +1;
			while(curr < half){
				seive[curr] = false;
				curr += 2*i +1;
			}
		}
	}
}

//ll mod =MOD;

inline ll powr(ll a , ll b , ll mod){
	int  t =1 ; 
	while(b>0){
		if(b&1) t=(t*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return t;
}

inline ll inv(ll a, ll mod){ return powr(a,mod-2,mod); }



/*
? using wilson theorem  for factorial computations
	(p-1)!mod p  = p-1;




*/

inline ll fact(ll n , ll mod){
	if(n >= mod) return 0;
	ll res=mod-1;
	for(auto i = mod-1 ; i>mod ; --i){
		res*= inv(i,mod);
		res%=mod;
	}
	return (long long)res;
}

void solve(){
	ll xam = 1e8;
	fill(xam);
	ll sum =0 ;
	for(ll i=5 ; i<xam ; ++i){
		if(isprime(i)){
			ll five = fact(i-5,i);
			ll four = (five*(i-4))%i;
			ll three = (four*(i-3))%i;
			ll two = (three * (i-2))%i;
			ll one = i -1 ;
		}
		sum+= (one + two + three + four + five)%i;
	}
	cout<<sum<<endl;
}

signed main(){
	boost
	int T =1 ; 
	//cin>>T;
	while(T--){
		solve();
	}
 
#ifdef np
	cout<<endl<<endl<<endl<<"Time elapsed: "<<(double)(clock()-clk)/CLOCKS_PER_SEC<<endl;
#endif
	return 0;
}
