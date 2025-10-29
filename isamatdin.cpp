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
    for(int i = 0 ; i < n ; i++)
    {
        cin >> toy[i];
    }
    
    bool f=false;
    for(int i=0;i<n-1;i++)
    {
        if(toy[i]%2!=toy[i+1]%2)
        {
            f=true;
            break;
        }
    }

    if(f)
    {
        sort(all(toy));
    }
    
    for(int i = 0 ; i < n ; i++)
    {
        cout << toy[i] << " ";
    }
    
    cout << endl;
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
