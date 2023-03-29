#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

void solve()
{
	int n, k;
    cin>>n>>k;
    if (k<=(n + 1)/2)
    {
        cout<<k*2-1;
    }
    else
    {
        cout<<(k-(n + 1)/2)*2;
    }
}

int32_t main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t = 1;
	// cin>>t;
	while(t--) solve();

	return 0;
}
