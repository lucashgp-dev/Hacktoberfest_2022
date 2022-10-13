/* Natus Vincere*/
/* S1mple Electronic b1t Perfecto sdy */

#include<bits/stdc++.h>
#include <random>
using namespace std;
using namespace chrono;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;

#define ll long long
#define pi 3.1415926535897932385
#define mod 1000000007 
#define MOD 998244353
#define db double
#define pp(x) pair<x,x>
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vv(x) vector<x>
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof  pop_front
#define endl "\n"
#define umap unordered_map
#define uset unordered_set
#define pq priority_queue
#define bp ll kkk; cin >>kkk;
#define forn(i,n) for(ll i=0 ; i<n ; i++)
#define forn1(i,n) for(ll i=1 ; i<=n ; i++)
#define arr(a,n) for(ll i=0;i<n;i++){ cin>>a[i]; }
#define arr1(a,n) for(ll i=1;i<=n;i++){ cin>>a[i]; }
#define FILE freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define google cout<<"Case #"<<number<<": "
#define all(x) x.begin(), x.end()
#define trav(x, a) for(auto &x: a)
#define inf 1e18
#define sz(x) (long long)x.size()
//template <typename T> using ordered_set = tree<T, null_type,
//	less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//template<typename T>
//using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

//    order_of_key (k) : Number of items strictly smaller than k .
//    find_by_order(k) : K-th element in a set (counting from zero).

void _print(int x){cerr<<x;}
void _print(bool x){cerr<<x;}
void _print(char x){cerr<<x;}
void _print(string x){cerr<<x;}
void _print(ll x){cerr<<x;}
void _print(float x){cerr<<x;}
void _print(double x){cerr<<x;}
template<class T>void _print(set<T> v);
template<class T>void _print(vector<T> v);
template<class T>void _print(multiset<T> v);
template<class T>void _print(unordered_set<T> v);
template<class T,class V>void _print(map<T,V> v);
template<class T,class V>void _print(unordered_map<T,V> v);
template<class T>void _print(vector<vector<T>> v);
template<class T>void _print(stack<T> v);
template<class T>void _print(queue<T> v);
template<class T>void _print(queue<T> v){cerr<<"[ ";while(!v.empty()){_print(v.front());cerr<<" ";v.pop();}cerr<<" ]";}
template<class T>void _print(stack<T> v){cerr<<"[ ";while(!v.empty()){_print(v.top());cerr<<" ";v.pop();}cerr<<" ]";}
template<class T,class V>void _print(pair<T,V> p){_print(p.first);cerr<<" ";_print(p.second);cerr<<endl;}
template<class T>void _print(set<T> v){cerr<<"[ ";for(auto &i:v){_print(i);cerr<<" ";}cerr<<"]";}
template<class T>void _print(vector<T> v){cerr<<"[ ";for(auto &i:v){_print(i);cerr<<" ";}cerr<<"]";}
template<class T>void _print(multiset<T> v){cerr<<"[ ";for(auto &i:v){_print(i);cerr<<" ";}cerr<<"]";}
template<class T>void _print(unordered_set<T> v){cerr<<"[ ";for(auto &i:v){_print(i);cerr<<" ";}cerr<<"]";}
template<class T,class V>void _print(map<T,V> v){cerr<<"[ ";for(auto &i:v){_print(i.first);cerr<<" ";_print(i.second);cerr<<"\n";}cerr<<"]";}
template<class T,class V>void _print(unordered_map<T,V> v){cerr<<"[ ";for(auto &i:v){_print(i.first);cerr<<" ";_print(i.second);cerr<<"\n";}cerr<<"]";}
template<class T>void _print(vector<vector<T>> v){cerr<<"[ ";for(auto &i:v){_print(i);cerr<<endl;}cerr<<"]";}

#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x << " ";_print(x);cerr<<endl;
#else
#define debug(x)
#endif

mt19937 rng(steady_clock::now().time_since_epoch().count());

vector<int> countinversions(vector<int> a , int &ans) {
    if(a.size()==1) return a ;
    int mid = a.size()/2 ;
    vector<int> x(a.begin(),a.begin()+mid),y(a.begin()+mid,a.end());
    auto left = countinversions(x,ans);
    auto right = countinversions(y,ans);
    vector<int> temp ;
    int i=0,j=0 ;
    while(i<left.size() and j<right.size()) {
        if(left[i] <= right[j]) {
            temp.pb(left[i]);
            i++ ;
        }
        else {
            temp.pb(right[j]);
            ans+=left.size()-i ;
            j++ ;
        }
    }
    while(i<left.size()) temp.pb(left[i++]);
    while(j<right.size()) temp.pb(right[j++]);
    return temp ;
}

ll power(ll x, ll b) {ll p = 1;while (b > 0) {if(b&1) {p = p * x; p %= mod;} b >>= 1; x *= x; x %= mod;} return p % mod;}

vector<ll> primes ;
void sieve(ll n) {
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false ;
    for(ll p=2 ; p*p<=n ; p++) {
        if(prime[p]) {
            for(ll i=p*p ; i<=n ; i+=p)  prime[i]=false ;     
        }
    }
    forn1(i,n) if(prime[i]) primes.pb(i);
}

void yn(bool x) {
    cout<<(x==1 ? "YES\n" : "NO\n");
}

ll modinv(ll n) { 
    return power(n,mod-2); 
}

//auto flambda = [&/=](auto a, auto b) { return a < b; };
//auto flambda = [&/=](auto a, auto b , auto&& flambda) { return a < b; }; Recursive lambda expression ;

void build(vector<ll> &arr, vector<ll> &tree) {
    ll n=arr.size();
    forn(i,n) tree[i+n]=arr[i];
    for(ll i=n-1; i>=1; i--) {
        tree[i]=min(tree[2*i+1],tree[2*i]);
    }
}

ll query(vector<ll> &tree, ll l, ll r, ll n) {
    l+=n; r+=n;
    ll mi=n;
    while(l < r) {
        if(l&1LL) mi=min(mi,tree[l++]);
        if(r&1LL) mi=min(mi,tree[--r]);
        r>>=1LL;
        l>>=1LL;
    }
    return mi;
}

void solve() {
    ll n,q; cin>>n>>q;
    vector<ll> v(n); arr(v,n);
    vector<ll> pref(n+1,0), ind(n); iota(all(ind),0LL);
    forn1(i,n) pref[i]+=pref[i-1]+v[i-1];
    sort(all(ind),[&](auto &a, auto &b){
        return v[a] < v[b];
    });
    sort(all(v));
    vector<ll> tree(2*n,n);
    build(ind,tree);
    while(q--) {
        ll x ; cin>>x;
        auto j = upper_bound(all(v),x)-v.begin();
        ll i = query(tree,j,n,n);
        cout<<pref[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    auto start = high_resolution_clock::now();
    FIO
    #ifndef ONLINE_JUDGE
        FILE
    #endif
    ll TC=1 ; cin>>TC ;
    forn1(number,TC) solve();
    #ifndef ONLINE_JUDGE 
        auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<microseconds>(stop - start);
        cerr<<duration.count()<<" ms" ;
    #endif
    return 0;
}
