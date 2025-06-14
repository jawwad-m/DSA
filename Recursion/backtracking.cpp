#include<bits/stdc++.h>
using namespace std;

int f(int i, int n){
    // GOAL -> LAST GUY TO BE EXECUTED FIRST !!!
    if(i<1) return 0;
    f(i-1,n);
    cout<<i<<" ";
}

int f2(int i,int n){
    if(i>n) return 0;
    f2(i+1,n);
    cout<<i<<" ";
}

int main(){
    // f(5,5);
    f2(1,5);
    return 0;
}