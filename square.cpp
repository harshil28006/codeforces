#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;

void solve()
{
    int n , m , a;
    cin >> n >> m >> a;
    int l;
    int b;
    l = ceil(n*1.0/a);
    b = ceil(m*1.0/a);
    cout << l*b << endl;   
    return;
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fast_io;

    int t=1;
    
    while(t--)
    {
        solve();
    }

    return 0;
}