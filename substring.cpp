#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    int n = input.size();
  for(int i=0;i<n;i++){
   for(int j=i;j<n;j++){
    for(int k=i;k<=j;k++){   // To start new line with initial element
        cout<< input[k];
     }cout<<endl;
   }
  }
}
int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}
