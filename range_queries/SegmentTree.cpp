#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define vl vector<ll>
#define sza(x) ((int)x.size())
/*if(tc==10000)
    {
        if(cur==414)
        {
            cout<<n<<" "<<k<<nl;
            cout<<a<<nl;
        }
        else
        {
            return;
        }
}*/
const int MAX_N = 1e5 + 5;
const int MOD =(int) 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

#define dbg(x...) cerr << #x << " "; _print(x); cerr << endl;
#define debug(x,y...) cerr << #x << " -> "; _print(y); cerr << endl;
#define crndl cerr << "\n";

template <typename T> void _print (T t) { cerr << t; }
void _print() {return;}

template <class T> void _print(T a[], int n);
template <class T> void _print(T a[], long long n);
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(unordered_map <T, V> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T> void _print(queue <T> q);
template <class T> void _print(stack <T> s);
template <class T> void _print(priority_queue <T> pq);
template <class T> void _print(priority_queue<T, vector<T>, greater<T>> pq);
template <class T> void _print(deque <T> v);

template <class T> void _print(T a[], int n) { cerr << "[ "; for(int i = 0; i < n; i++) { _print(a[i]); cerr << " "; } cerr << "]"; }
template <class T> void _print(T a[], long long n) { cerr << "[ "; for(int i = 0; i < n; i++) { _print(a[i]); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto &i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto &i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(deque <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(queue <T> q) {cerr << "[ "; while (!q.empty()) {_print(q.front()); cerr << " "; q.pop();} cerr << "]";}
template <class T> void _print(stack <T> s) {cerr << "[ "; stack<T> t; while (!s.empty()) {t.push(s.top()); s.pop();} while (!t.empty()) {_print(t.top()); cerr << " "; t.pop();} cerr << "]";}
template <class T> void _print(priority_queue <T> pq) {cerr << "[ "; while (!pq.empty()) {_print(pq.top()); cerr << " "; pq.pop();} cerr << "]";}
template <class T> void _print(priority_queue<T, vector<T>, greater<T>> pq) {cerr << "[ "; while (!pq.empty()) {_print(pq.top()); cerr << " "; pq.pop();} cerr << "]";}

template <class T, class... V> void _print(T t, V... v) {_print(t); if(sizeof...(v)) {cerr<<", "; _print(v...);}}
// template <class T> void _print(oset<T> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#define fr(i, k, n) for (ll i = k; k<n?i<n:i>n; k<n ? i+=1 : i-=1)
#define nfr(i, k, n) for (ll i = k; i<n ; i+=1)
#define dfr(i, k, n) for (ll i = k; k<n?i<n:i>n; k<n ? i+=1 : i-=1)
#define lfr(i, k, n) for (ll i = k; i<n ; i+=1)
#define rfr(i,k,n) for(ll i = k;i>=n;i--)
#define lxfr(i, k, n,y) for (ll i = k; i<n ; i+=y)
#define rxfr(i,k,n,y) for(ll i = k;i>=n;i-=y)
 
#define eb emplace_back
#define pb push_back
#define ff first
#define ss second
#define itv vector<ll>::iterator
#define itum unordered_map<ll, ll>::iterator
#define sz(x) ((ll)(x).size())
#define sortv(x) sort((x).begin(), (x).end())
#define sortd(x) sort((x).begin(), (x).end(),greater<int>())
#define sorta(x) sort((x),(x)+(int)(sizeof((x))/sizeof((x[0]))))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mp make_pair
#define mll map<ll,ll>
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
#define umll unordered_map<ll, ll>
int F = 10000;
vector<int> arr(F);
vector<int> seg(4*F);
int leftChild(int index){
    return 2*index;
}
int rightChild(int index){
    return 2*index+1;
}
int combineChildren(int left,int right){
    return left+right;
}
void build(int s,int e,int index){
    //leaf node
    if(s==e){
        seg[index]=arr[s];
        return;
    }
    int mid =(s+e)/2;
    build(s,mid,leftChild(index));
    build(mid+1,e,rightChild(index));
    seg[index]=combineChildren(seg[leftChild(index)],seg[rightChild(index)]);
}
void update(int s,int e,int index,int update_index,int update_value){
    //leaf node
    if(s==e){
        seg[index]=update_value;
        return;
    }
    int mid =(s+e)/2;
    if(update_index<=mid){
        update(s,mid,leftChild(index),update_index,update_value);
    }
    else{
        update(mid+1,e,rightChild(index),update_index,update_value);
    }
    seg[index]=combineChildren(seg[leftChild(index)],seg[rightChild(index)]);
}
int query(int s,int e,int index,int l,int r){
    //no overlap
    if(s>r || l>e){
        return 0;
    }
    //complete overlap
    if(l<=s && e<=r){
        return seg[index];
    }
    int mid =(s+e)/2;
    int leftContribution = query(s,mid,leftChild(index),l,r);
    int rightContribution = query(mid+1,e,rightChild(index),l,r);
    return combineChildren(seg[leftChild(index)],seg[rightChild(index)]);
}
void solve(int tc,int curr) {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(0,n-1,1);
    int q;
    cin>>q;
    lfr(i,0,q){
        int type;
        cin>>type;
        if(type==1){
            int index,x;
            cin>>index>>x;
            update(0,n-1,1,index-1,x);
        }
        else{
            int l,r;
            cin>>l>>r;
            cout<<query(0,n-1,1,l-1,r-1)<<endl;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1;
    //cin>>tc;
    for (int t = 1; t <= tc; t++) {
        //debug(Testcase, t);
        solve(tc,t);
        //crndl;
    }
}