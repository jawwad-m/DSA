#include<bits/stdc++.h>
using namespace std;

// int f(int i,int n){
//     if(i==n) return n;
//     return f(i+1,n-1)+f(i+1,n-2);
// }

int f(int n){
    if(n<=1) return n;
    return f(n-1)+f(n-2);
}

int main(){
    // cout<<f(0,5);
    cout<<f(21);
    return 0;
}