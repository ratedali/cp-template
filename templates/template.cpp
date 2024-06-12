#include <bits/stdc++.h>
using namespace std;

using l = long long;
using ii = pair<int, int>;
using ll = pair<l, l>;
using lll = tuple<l, l, l>;
using vi = vector<int>;
using vl = vector<l>;
using vii = vector<ii>;
using vll = vector<ll>;
using vlll = vector<lll>;
using vvl = vector<vl>;
using vvll = vector<vll>;
template <typename T>
using pq = priority_queue<T>;
template <typename T>
using pqr = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
using uset = unordered_set<T>;
template <typename K, typename V>
using umap = unordered_map<K, V>;

#define inf numeric_limits<l>::max() / 2
#define ninf numeric_limits<l>::lowest()
#define f(i, n) for (l i = 0; i < n; ++i)
#define fi(i, a, b) for (l i = a; i < b; ++i)
#define fr(i, n) for (l i = n - 1; i >= 0; --i)
#define fv(it,a) for(auto it=begin(a); it!=end(a); ++it)
#define fvi(it, a, b) for (auto it = a; it != b; advance(it, 1))
#define sf(x) scanf("%d", &x)
#define sfl(x) scanf("%lld", &x)
#define pf(x) printf("%d\n", &x)
#define pfl(x) printf("%lld\n", &x)

l m, n, s, t, u, v, w, ans = 0;
vl x, y, z, memo, pred, indeg;
l V, E;
vvl adj, madj, memo2;
vvll wadj;
vector<string> vertices;
// memo.assign(n,-1);
// memo2.assign(n,vl(m,-1));

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    return 0;
}