#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ll long long
#define quickie ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(i, a, b) for(int i=a; i<b; i++)
#define rep1(i, a, b) for(int i=a; i<=b; i++)
#define repp(i, a, b) for(int i=b-1; i>=a; i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
#define db double
#define mi map<int, int>
#define vi vector<int>
#define qi queue<int>
#define MI(x) power(x, mod-2)
#define test int t; cin >> t;
#define all(a) a.begin(),a.end()
#define mod 1000000007
#define pi 3.141592653589
#define fact(n) rep(i, 1, n+1)ft.pb((ft[i-1]*i)%mod) ;
int power(int x, int y) ;
int gcd(int a, int b) ;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<typename T>
// using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
// template<typename T>
// using ordered_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//(*****FOR USING ORDERED SET CHANGE INT*******)

// struct chash {
//     const int RANDOM = (long long)(make_unique<char>().get()) ^ chrono::high_resolution_clock::now().time_since_epoch().count();
//     static unsigned long long hash_f(unsigned long long x) {
//         x += 0x9e3779b97f4a7c15;
//         x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//         x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//         return x ^ (x >> 31);
//     }
//     static unsigned hash_combine(unsigned a, unsigned b) { return a * 31 + b; }
//     int operator()(int x) const { return hash_f(x)^RANDOM; }
// };

int power(int x, int y) ;
int gcd(int a,int b) ; 

vi v[100001] ;
bool vis[100001] ;
int dis[100001] ;

void bfs(int root) {
    qi q ;
    q.push(root) ;
    vis[root] = true ;
    dis[root] = 0 ;
    while(!q.empty()) {
        int cur = q.front() ;
        q.pop() ;
        for(auto i : v[cur]) {
            if(!vis[i]) {
                q.push(i) ;
                dis[i] = dis[cur]+1 ;
                vis[i] = true ;
            }
        }
    }
}
 
signed main() {
    quickie
    int n, m, root ;
    cin >> n >> m >> root ;
    rep(i, 0, m) {
        int a, b ;
        cin >> a >> b ;
        v[a].pb(b) ;
        v[b].pb(a) ;
    }
    bfs(root) ;
    rep(i, 1, n+1) cout << dis[i] << " " ;
    cout << "\n" ;
}

int power(int x, int y) {
    int res = 1; x %= mod;
    while (y > 0) {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res%mod;
}

int gcd(int a,int b) {
    if(a==0) return b;
    return gcd(b%a,a);
}

