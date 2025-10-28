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
    cin >> n;
    vector<char> s(n);
    vector<char> t(n);
    for(int i = 0 ; i < n ;i ++){
        cin >> (s[i]);
    }
    for(int i = 0 ; i < n ;i ++){
        cin >> t[i];
    }
    
    int count = 0;
    sort(s.begin() , s.end());
    sort(t.begin() , t.end());
    for(int i = 0 ; i < n ; i++){
        if(s[i] == t[i]){
            count++;
        }
    }

    if(count == n){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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