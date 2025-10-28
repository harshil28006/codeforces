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
    vector<int> toy(n);
    for(int i = 0 ; i < n ; i++){
        cin >> toy[i];
    }
      vector<int> small(n);
    for(int i = 0 ; i < n ; i++){
        small[i] ==  toy[i];
    }

    sort(small.begin() , small.end());

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if()
        }
    }
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