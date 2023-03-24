#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

void solve()
{
	string s;
	cin>>s;
	string hello="hello";
	int j=0,count=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==hello[j])
		{
			j++;
			count++;
		}

	}
	if(count==5)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
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
