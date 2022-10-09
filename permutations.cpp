#include <iostream>
#include<algorithm>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    string str1=input1;
   string str2=input2;
    if(str1.size()!=str2.length())
        return false;
    int str[256]={0};
    for(int i=0;i<str1.length();i++)
    {
     str[str1[i]]++;   
    }
    for(int i=0;i<str1.length();i++)
    {
     str[str2[i]]--;   
    }
    for(int i=0;i<256;i++){
    if(str[i]!=0)
        return false;
    }
  return true;
    
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
