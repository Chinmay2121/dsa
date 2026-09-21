#include<bits/stdc++.h>
using namespace std;
// #include "template.h"
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second

const ll MOD = 1e9+7;
const int N = 1e5+5;
// Debugging Macros
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = "; _print(x); cerr << "\n";
#else
    #define debug(x)
#endif
// Data Types Printing Functions
void _print(int x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(unsigned x) { cerr << x; }
void _print(unsigned long x) { cerr << x; }
void _print(unsigned long long x) { cerr << x; }
void _print(float x) { cerr << x; }
void _print(double x) { cerr << x; }
void _print(long double x) { cerr << x; }
void _print(char x) { cerr << '\'' << x << '\''; }
void _print(const string& x) { cerr << '\"' << x << '\"'; }
void _print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V> void _print(const pair<T, V>& p);
template <typename T> void _print(const vector<T>& v);
template <typename T> void _print(const set<T>& s);
template <typename T> void _print(const unordered_set<T>& s);
template <typename T, typename V> void _print(const map<T, V>& m);
template <typename T> void _print(const multiset<T>& ms);
template <typename T> void _print(stack<T> s);
template <typename T> void _print(queue<T> q);
template <typename T> void _print(deque<T> dq);
template <typename T> void _print(priority_queue<T> pq);
template <typename T> void _print(priority_queue<T, vector<T>, greater<T>> pq);

// Pair
template <typename T, typename V> void _print(const pair<T, V>& p) {
    cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}";
}
// Vector
template <typename T> void _print(const vector<T>& v) {
    cerr << "[ ";
    for (const auto &i : v) { _print(i); cerr << " "; }
    cerr << "]";
}
// Set
template <typename T> void _print(const set<T>& s) {
    cerr << "{ ";
    for (const auto &i : s) { _print(i); cerr << " "; }
    cerr << "}";
}
// Unordered Set
template <typename T> void _print(const unordered_set<T>& s) {
    cerr << "{ ";
    for (const auto &i : s) { _print(i); cerr << " "; }
    cerr << "}";
}
//Multiset
template <typename T> void _print(const multiset<T>& ms) {
    cerr << "{ ";
    for (const auto &i : ms) { _print(i); cerr << " "; }
    cerr << "}";
}
// Map
template <typename T, typename V> void _print(const map<T, V>& m) {
    cerr << "{ ";
    for (const auto &i : m) {
        _print(i); cerr << " ";
    }
    cerr << "}";
}
//Unordered Map
template <typename T, typename V> void _print(const unordered_map<T, V>& m) {
    cerr << "{ ";
    for (const auto &i : m) {
        _print(i); cerr << " ";
    }
    cerr << "}";
}
// Stack
template <typename T> void _print(stack<T> s) {
    cerr << "[ ";
    while (!s.empty()) {
        _print(s.top()); cerr << " ";
        s.pop();
    }
    cerr << "]";
}
// Queue
template <typename T> void _print(queue<T> q) {
    cerr << "[ ";
    while (!q.empty()) {
        _print(q.front()); cerr << " ";
        q.pop();
    }
    cerr << "]";
}
//Deque 
template <typename T> void _print(deque<T> dq) {
    cerr << "[ ";
    for (const auto &i : dq) _print(i), cerr << " ";
    cerr << "]";
}
// For priority queues (max-heap and min-heap)
// Max-heap version
template <typename T> void _print(priority_queue<T> pq) {
    cerr << "[ ";
    while (!pq.empty()) {
        _print(pq.top()); cerr << " ";
        pq.pop();
    }
    cerr << "]";
}
// Min-heap version
template <typename T> void _print(priority_queue<T, vector<T>, greater<T>> pq) {
    cerr << "[ ";
    while (!pq.empty()) {
        _print(pq.top()); cerr << " ";
        pq.pop();
    }
    cerr << "]";
}
// // For vector of pairs, vectors of vectors, and vectors of maps
template <typename T, typename V> void _print(const vector<pair<T,V>>& v) {
    cerr << "[ ";
    for (const auto &i : v) _print(i), cerr << " ";
    cerr << "]";
}

template <typename T> void _print(const vector<vector<T>>& v) {
    cerr << "[ ";
    for (const auto &row : v) _print(row), cerr << " ";
    cerr << "]";
}

template <typename T, typename V> void _print(const vector<map<T, V>>& vm) {
    cerr << "[ ";
    for (const auto &m : vm) _print(m), cerr << " ";
    cerr << "]";
}

// ------------------ Number Theory ------------------ //

// GCD
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
    
}
// LCM
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
//Perfect Square
bool isPerfectSquare(long long n) {
    long long root = (long long)(sqrt(n) + 0.5);
    return root * root == n;
}

// Modular Exponentiation
ll mod_pow(ll a, ll b, ll mod = MOD) {
    ll res = 1; a %= mod;
    while(b) {
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

// Modular Inverse (Fermat's Little Theorem)
ll mod_inv(ll a, ll mod = MOD) {
    return mod_pow(a, mod - 2, mod);
}

// Extended Euclidean Algorithm
ll extended_gcd(ll a, ll b, ll &x, ll &y) {
    if (!b) return x = 1, y = 0, a;
    ll d = extended_gcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}
// Prime Number or not
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check for divisibility from 5 to sqrt(n), skipping multiples of 2 and 3
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Sieve of Eratosthenes
vector<bool> prime(N, true);
void sieve(int n = N) {
    prime[0] = prime[1] = false;
    for(int i = 2; i*i <= n; i++) {
        if(prime[i]) {
            for(int j = i*i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

// ------------------ Combinatorics ------------------ //

ll fact[N], inv_fact[N];
void init_fact() {
    fact[0] = 1;
    for (int i = 1; i < N; i++) fact[i] = fact[i-1] * i % MOD;
    inv_fact[N-1] = mod_inv(fact[N-1]);
    for (int i = N-2; i >= 0; i--) inv_fact[i] = inv_fact[i+1] * (i+1) % MOD;
}

ll nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
}

// ------------------ Prefix Sums ------------------ //

vector<ll> prefix_sum(const vector<int>& a) {
    vector<ll> pre(a.size() + 1, 0);
    for (int i = 0; i < a.size(); i++) pre[i + 1] = pre[i] + a[i];
    return pre;
}

// ------------------ Binary Search ------------------ //

int binary_search_lower(const vector<int>& a, int x) {
    int lo = 0, hi = a.size()-1, ans = -1;
    while (lo <= hi) {
        int mid = (lo+hi)/2;
        if (a[mid] >= x) {
            ans = mid;
            hi = mid - 1;
        } else lo = mid + 1;
    }
    return ans;
}

// ------------------ Graph Algorithms ------------------ //

// BFS
void bfs(int start, vector<vector<int>>& adj, vector<int>& dist) {
    queue<int> q; q.push(start);
    dist[start] = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

// DFS
void dfs(int u, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[u] = true;
    cout << u << " "; // Process the node (printing here)
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, adj, visited);
        }
    }
}

// Dijkstra
void dijkstra(int s, vector<vector<pair<int,int>>>& g, vector<ll>& d) {
    int n = g.size();
    d.assign(n, LLONG_MAX);
    d[s] = 0;
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<>> pq;
    pq.push({0, s});
    while (!pq.empty()) {
        auto [du, u] = pq.top(); pq.pop();
        if (du != d[u]) continue;
        for (auto [v, w] : g[u]) {
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                pq.push({d[v], v});
            }
        }
    }
}
// ------------------ Main Driver ------------------ //

void solve() {
    
    ll n;
    cin >> n;

    vector<ll> p(n);
    ll op = 0,ep =0;
    for(ll i = 0;i < n;i++){
        cin >> p[i];        
        if(p[i]&1) op++;
        else ep++;
    }
    ll m;
    cin >> m;
    vector<ll> q(m);
    ll oq = 0,eq = 0;
    for(ll i = 0;i < m;i++){
        cin >> q[i];
        if(q[i]&1) oq++;
        else eq++;
    }

    ll result = (1ll*op*oq + 1ll*ep*eq);
    cout << result << '\n';
    


}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;//Uncomment for multiple test cases
    
    while(t--){
        solve();   
    }

    return 0;
}
