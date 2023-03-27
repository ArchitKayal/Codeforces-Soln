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
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int min = arr[0];
	int min_index = 0;
	int max = arr[0];
	int max_index=0;

	for(int i=0;i<n;i++)
	{
		if(min>=arr[i])
		{
			min = arr[i];
			min_index = i;
		}
		if(max<arr[i])
		{
			max = arr[i];
			max_index = i;
		}
	}
	if(max_index>min_index){
		cout<<(max_index-1)+(n-min_index)-1;
	}
	else{
		cout<<(max_index-1)+(n-min_index);
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
