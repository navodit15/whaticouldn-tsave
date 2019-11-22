#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
 
const long long infl=0x3f3f3f3f3f3f3f3fLL;
const int infi=0x3f3f3f3f;
const int modo=998244353; 
#define start() ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD 1000000007
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) int (x.size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i,a,b) for(int i=a; i<b; i++)
#define NFOR(i,a,b) for(int i=(a);i>=(b);--i)

using ll =  long long ;
using namespace std;
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;  
typedef double ld;
typedef vector<ll> vll;
 
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}
template<typename T>
    inline std::ostream &operator << (std::ostream & os,const std::vector<T>& v){
        bool first = true;
        os << "[";
        for(unsigned int i = 0; i < v.size(); i++){
            if(!first) os << ", ";
            os << v[i];
            first = false;
        }
        return os << "]";
    }
    
template<class T,class U>
ostream& operator<<(ostream& os,const pair<T,U>& p){ os<<"("<<p.first<<", "<<p.second<<")"; return os;}

template<typename T>
    inline std::ostream &operator << (std::ostream & os,const std::set<T>& v){
        bool first = true;os << "[";
        for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii){
            if(!first)os << ", ";
            os << *ii;
            first = false;
        }
        return os << "]";
}

template<class T,class U>
ostream& operator<<(ostream& os,const map<T, U> & mp){os << "{";
    int i = 0;
    for(auto it : mp){  if(i) os<<", "; os << it; i++;} os << "}";    
    return os;
}


#ifdef np
#define trace(...) cout<<"Line:"<<__LINE__<<" "; __f(#__VA_ARGS__, __VA_ARGS__)
template<typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout<<name<<" : "<<arg1<<endl;}
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
 
void solve(){
    
}
 
signed main(){
    start()
    int T =1 ; 
    //cin>>T;
    while(T--){
        solve();
    }
 
#ifdef np
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}
