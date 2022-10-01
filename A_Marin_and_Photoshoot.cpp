#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll g=0, h=1;
		ll ans=0;
		for(g, h; h<n; g++, h++){
				// cout<<s[g]+s[h]<<endl;
			if(s[g]=='0' && s[h]=='0'){
				ans+=2;
			}
			else if(h!=n-1 && s[g]=='0' && s[h]=='1' && s[h+1]=='0'){
				ans+=1;
			}
		}
		cout<<ans<<endl;
	}	
}