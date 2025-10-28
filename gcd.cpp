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
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++){
           cin >> a[i];
    }
    if(n == 1 && arr[0] == 1){
        cout << 2 << endl;
        break;
    }
    sort(a.begin() , a.end());
    int t = a[n-1];
    bool prime[t];
    fill(prime , prime + t + 1 , true);
    prime[0] = prime [1] = false;
    for(int i  = 2 ; ; i*i <= t ; i++){
        if(prime[i]){
            for(int j = i*i ; j <= t ; j++){
                prime[j] = false;
            }
        }
    } 

    int ans = -1;

    for(int i = 0 ; i < prime.size() ; i++){
        if(gcd(arr[0] , prime[i]) == 1){
            ans = prime[i];
            break;
        }
    }

    cout << ans << endl;

    
    return;
}

int binary( int int arr[] , int k , int target){
     int low = 0 ;
     int hight = k-1;
     while(low <= high){
        int mid = (low + high)/2;
        if(gcd(arr[i] , ))
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