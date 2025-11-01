#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;

void solve()
{
    int n ; 
    int k;
    cin >> n >> k;
    int ans = 1e9;
    for(int i = 1 ; i <= sqrt(n) ;i++){
        if(n%i == 0){
            if(n/i <= k){
                ans = min(ans , i);
            }
        
        if(i <= k){
            ans = min(ans,n/i);
        }
        }
    }

    cout << ans << endl;

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