#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

void solve()
{
	int n,k;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>k;
		arr[k]=i;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
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
