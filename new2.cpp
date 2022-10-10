#include <bits/stdc++.h>

    //#define LOCAL //Comment in if custom header not set //Comment out when submitting
    //#define endl '\n' //Comment out if interactive
    //#define int long long //Comment out if memory exceeds
    //#define int unsigned long long //Comment out if memory exceeds
    #define ll long long
    #define pb push_back
    //#define vi vector<long long>
    #define forr(n) for(int i=0;i<n;i++)
    //const int inf = LLONG_MAX;
    using namespace std;
    //const int inv_3 = 333333336;
    //const int MOD=    1000000007; //Comment in if question asks to take mod by this number

//    void solve(){
// 	ll n;
// 	cin>>n;
// 	vector<ll> vec;
// 	forr(n){
// 		ll x;
// 		cin>>x;
// 		vec.push_back(x);
// 	}
// }

void solve(){
	string s;
	cin>>s;
	ll n = s.size();
	ll st = s[0]-96;
	ll en = s[n-1]-96;
	ll tp = abs(st-en);
	ll cnt=0;
	if(n==2){
		cout<<tp<<" "<<cnt+2<<endl;
		cout<<1<<" "<<2<<endl;
		return;
	}
	vector<pair<ll,ll>>m;
	if(st>=en){ 
	for(ll i=1; i<n-1; i++){
		ll ch = s[i]-96;
		if(ch <=st && ch>=en){
			cnt++;
			m.push_back({ch, i});
		}
	}
	cout<<tp<<" "<<cnt+2<<endl;
	// cout<<"bcnc";
	cout<<1<<" ";
	if(m.size()>0){ 
	sort(m.begin(), m.end());
	for(ll i=m.size()-1; i>=0; i--){
		cout<<m[i].second+1<<" ";
	}
	}
	cout<<n<<endl;
	}
	else{
		for(ll i=1; i<n-1; i++){
		ll ch = s[i]-96;
		if(ch>=st && ch<=en){
			cnt++;
			m.push_back({ch, i});
		}
	}
	cout<<tp<<" "<<cnt+2<<endl;
	cout<<1<<" ";
	if(m.size()>0)
	sort(m.begin(), m.end());
	for(ll i=0; i<m.size(); i++){
		cout<<m[i].second+1<<" ";
	}
	cout<<n<<endl;
	// cout<<endl;
	}
}

int main()
{
	ll t;
	cin>>t;
	while(t--){
		solve();	
		
	}
}
