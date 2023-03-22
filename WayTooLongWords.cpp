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
	if(s.size()>10)
	{
		cout<<s[0]+to_string(s.size()-2)+s[s.size()-1]<<"\n";
	}
	else
	{
		cout<<s<<"\n";
	}
}
 
int32_t main(){
 
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 
	int t = 1;
	cin>>t;
	while(t--) solve();
 
	return 0;
}
