#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asum(vector<ll> vec){
	int n = vec.size();
	map<ll, ll> m;
	for(ll i=0; i<n; i++){
		m[vec[i]]+=1;
	}
	vector<pair<ll, ll>> ans;
	for(auto &val:m){
		ans.push_back({val.first, val.second});
	}
	ll x = ans.size();
	vector<ll> test(x, -1);
	test[0] = ans[0].first * ans[0].second;
	if(ans[1].first == ans[0].first+1){
		test[1] = max(vec[0], ans[1].first * ans[1].second);
	}
	else{
		test[1] = vec[0] + ans[1].first * ans[1].second;
	}
	for(ll i=2; i<x; i++){
		if(ans[i].first == ans[i-1].first+1){
			test[i] = max(test[i-1], test[i-2]+(ans[i].first * ans[i].second));
		}
		else{
			test[i] = test[i-1] + (ans[i].first * ans[i].second);
		}
	}
	return test[x-1];
}

int main(){
	ll n;
	cin>>n;
	vector<ll> vec;
	for(ll i=0; i<n; i++){
		ll x;
		cin>>n;
		vec.push_back(x);
	}
	ll maxsum = asum(vec);
	cout<<maxsum<<endl;
}
