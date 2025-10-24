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
    vector<vector<int>> team(n,vector<int> (3));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> team[i][j];
        }
    } 

    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        int count = 0;
        for(int j = 0 ; j < 3 ;j++){
            if(team[i][j] == 1){
                 count += 1; 
            }
        }
        if(count >= 2){
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}
