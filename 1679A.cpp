#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;

void solve()
{
    int n;
    cin >> n;
    if(n%2 != 0 || n < 4){
        cout << -1 << endl;
        return;
    }

    int min = ceil(n*1.0/6);
    int max  = n/4;
    cout << min << " " << max << endl;
    return;
    
   
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}