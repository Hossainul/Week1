#include<bits/stdc++.h>
using namespace std;

const int N = 1e9+5;
int dp[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
   
    int ans = 0;
    vector<int> a(n),b(m);

    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        dp[a[i]] ++;
        
    }

    for(int i = 0; i<m; i++)
    {
        cin >> b[i];
        ans += dp[b[i]];
    }
    
    cout << ans;
   
    return 0;
}