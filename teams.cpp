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
    vector<vector<int>> team(3,vector<int> (n));
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> team[i][j];
        }
    } 

    int sum = 0;
    for(int i = 0 ; i < 3 ; i++){
        int count = 0;
        for(int j = 0 ; j < n ;j++){
            if(team[i][j] == 1){
                 count += 1;
            }
        }
        if(count == 2){
            sum += 1;
        }
    }

    cout << sum << endl;
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