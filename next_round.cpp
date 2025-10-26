#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;
 
int n , k;
 
 
void solve()
{
    cin >> n;
    cin >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }    
 
    int count = 0;
    for(int i = 0 ; i< n ; i++){
        if(v[i] >= v[k-1] && v[i] > 0){
            count ++;
        }
    }
 
    cout << count << endl;
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
    t=1;
    while(t--)
    {
        solve();
    }
 
    return 0;
}