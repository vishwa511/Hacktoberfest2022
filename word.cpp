#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input)
{
    // Write your code here
    int n = input.length();
    string ans = "";
    int z=0;
    for (int i=0; i<n; i++) {
        if (input[i] == ' ') {
            for (int j=i-1; j>=z; j--) {
                ans = ans + input[j];
            }
            ans = ans + " ";
            z=i+1;
        }
    
    }
    if (z < n) {
        for (int j=n-1; j>=z; j--){
            ans = ans + input[j];
        }
    }
    return ans;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    ;
}
