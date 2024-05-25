#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

#define inf numeric_limits<int>::max()
#define ninf numeric_limits<int>::lowest()
#define f(i,n) for(ll i = 0; i < n; ++i)
#define fr(i,n) for(ll i = n-1; i >= 0; --i)
#define fi(i,a,b) for(auto i=a;i!=b;advance(it,1))
#define fv(i,a) for(auto it=begin(a);it!=end(a);++it)

#define sf(x) scanf("%d", &x)
#define sfl(x) scanf("%lld", &x)
#define pf(x) printf("%d\n", &x)
#define pfl(x) printf("%lld\n", &x)

// common memset settings
// memset(memo, -1, sitzeof memo); // init DP memoization table
// memset(arr, 0, sizeof arr); // clear int array

#define debug(x) \
    (cerr << #x << ": " << (x) << endl)
#define debugit(a) \
    {cerr << #a << " = { "; for(auto debug_x : a) cerr << debug_x << ' '; cerr << "}\n";}

#define N 1'000'000

ll t, n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}
