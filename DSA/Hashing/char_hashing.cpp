#include <bits/stdc++.h>
using namespace std;
// Count number of letters in  a string

int main() {

    string s;
    cin >> s;

    // pre compute
    int hash [256] = {0};
    for( int i = 0 ; i<s.size(); i++){
    hash[s[i]]++;
    }

    char c;
    cin >> c;
    cout<< hash[c]<<endl;


    return 0;
}
