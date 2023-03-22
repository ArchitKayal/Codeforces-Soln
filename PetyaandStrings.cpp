#include <bits/stdc++.h>
 
#define int long long int
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
void solve()
{
	string s,k;
	cin>>s>>k;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]<92){
			s[i] += 32;
		}
		if(k[i]<92){
			k[i] += 32;
		}
	}
	if(s<k){
		cout<<-1;
	}
	if(s>k){
		cout<<1;
	}
	if(s==k){
		cout<<0;
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
