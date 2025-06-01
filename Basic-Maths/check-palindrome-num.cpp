#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n;
    int revN = 0;
    // vector<int> v;
    while (n > 0) {
        int last_digit = n % 10;
        // cout << last_digit << endl; // Optional debug
        // v.push_back(last_digit);
        n = n / 10;
        revN =(revN*10)+last_digit;
    }
    bool ch = revN==temp;
    cout<<boolalpha<<ch;
    return 0;
}