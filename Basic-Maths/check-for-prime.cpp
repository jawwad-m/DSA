#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
    }

    bool b = cnt==2;
    cout<<boolalpha<<b;
    return 0;
}