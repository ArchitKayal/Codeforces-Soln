#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

void solve()
{
	int n;
	cin>>n;
	int arr[n],totalsum=0,sum1=0,count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		totalsum += arr[i];
	}
	int half=totalsum/2;
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i--)
	{
		sum1 += arr[i];
		count++;
		if(sum1>half)
		{
			break;
		}
	}
	cout<<count;
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
