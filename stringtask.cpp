#include <bits/stdc++.h>
 
#define int long long int
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
void solve()
{
	string s,k;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i' && s[i] != 'A' && s[i] != 'O' && s[i] != 'Y' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I')
		{
			k= k+'.';
			k=k+(char) tolower(s[i]);
		}
	}
	cout<<k<<"\n";
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
