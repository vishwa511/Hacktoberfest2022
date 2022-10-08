#include <bits/stdc++.h>
using namespace std;

int main(){
//   code contributed by saurabh yadav
  int num;
  cin >> num;
  if(num==1){
    cout << "odd" << endl;
  }
  else if(num == 2){
    cout << "even" << endl;
  }
  else if(num%2){
    cout << "odd" << endl;
  }
  else{
    cout << "even" << endl;
  }
  return 0; // good practise 
}
