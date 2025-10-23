#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;

void solve()
{   
    int n , k;
    cin >> n >> k;
    kthsymbol(n,k);
    return;
}

int kthsymbol(int n , int k){
    if(n == 0){
        return 0;
    }
    if(n % 2 == 1){
        int index = kthsymbol(n-1 , (k/2) + 1);
        return index;
    }
    else{
        int index = kthsymbol(n-1 , (k/2));
        return 1 - index;
    }
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