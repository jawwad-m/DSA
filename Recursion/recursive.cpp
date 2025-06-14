#include<bits/stdc++.h>
using namespace std;

int f(int i, int n){
    if(i<1) return 0;
    cout<<i<<" ";
    f(i-1,n);
}

int main(){
    f(5,5);
    return 0;
}