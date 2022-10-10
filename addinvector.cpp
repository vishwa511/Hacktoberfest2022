#include<bits/stdc++.h>

using namespace std;
int main(){
	vector<int> vec;
	for(int i=0; i<5; i++){
		vec.push_back(i);
	}
	vec.erase(vec.begin()+2, vec.begin()+4);
	for(auto val:vec){
		cout<<val<<" ";
	}
	cout<<endl;
}
