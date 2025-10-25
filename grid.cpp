#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()
#define read2D(name, r, c) vector<vector<int>> name(r, vector<int>(c)); for(auto &row : name) for(auto &val : row) cin >> val;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define display(x) cout << x << endl;

string s;
int n , ans;
bool vis[7][7];

int fun(int ind , int x , int y){
    if(ind >= n){
           if(x == 6 && y == 0){
               ans++;
           }
    vis[x][y] == 1;
    if(s[ind] == '?' || s[ind] == 'U'){
        if(x - 1 > 0 && !vis[x-1][y]){
            fun(ind + 1 , x-1 , y);
        }
    }
    if(s[ind] == '?' || s[ind] == 'D'){
        if(x + 1 < 7 && !vis[x+1][y]){
            fun(ind + 1 , x+1 , y);
        }
    }
    if(s[ind] == '?' || s[ind] == 'R'){
        if(y + 1 < 7 && !vis[x][y+1]){
            fun(ind + 1 , x , y+1);
        }
    }
    if(s[ind] == '?' || s[ind] == 'L'){
        if(y-1 > 0 && !vis[x][y-1]){
            fun(ind + 1 , x, y-1);
        }
    }
    vis[x][y] = 0;
           return ans ;
    }


}

void solve()
{
    cin >> s;
    n = s.length();
    ans = 0;
    
    cout << fun(0 , 0 , 0) << endl;
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