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
    string v;
    int x = 0;
    for (int i= 0; i  < n ; i++){
        cin >> v;
        if(v[1] == '+'){
            x += 1;
        }else{
            x -= 1;
        }
    }
    
    cout << x << endl;

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
    t = 1;
    while(t--)
    {
        solve();
    }

    return 0;
}
