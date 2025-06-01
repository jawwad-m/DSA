#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int cnt = log10(n) + 1;
    // cout<<cnt;
    while (n>0)
    {
        int ld = n%10;
        sum=sum+pow(ld,cnt);
        n=n/10;
    }
    cout<<sum;
    return 0;
}   