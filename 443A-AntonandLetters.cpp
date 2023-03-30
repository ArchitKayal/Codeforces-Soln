#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

void solve()
{
	string s;
    set <char> a;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a.insert(s[i]);
    }
    cout<<a.size()<<endl;
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
