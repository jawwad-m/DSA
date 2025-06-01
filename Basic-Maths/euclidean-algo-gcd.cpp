#include<bits/stdc++.h>
using namespace std;

int main(){

    //Euclidean Algoritm - Time Complexity{O(logΦ(min(a,b)))}
    int a, b;
    cin>>a>>b;
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;

    }
    if(a==0) cout<<b;
    else cout<<a;
    return 0;
}