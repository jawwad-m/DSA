// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>n-i;j--){
            cout<<" "<<j;
        }

        for(int j=0;j<n-i;j++){
            cout<<" "<<n-i;
        }
        for(int j=1;j<n-i;j++){
            cout<<" "<<n-i;
        }

        for(int k=n-i+1;k<n+1;k++){
            cout<<" "<<k;
        }
        cout<<endl;
    }

}
void pattern2(int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){
            cout<<" "<<n-j+1;
        }

        for(int j=0;j<i+1;j++){
            cout<<" "<<i+2;
        }
        for(int j=0;j<i+1;j++){
            cout<<" "<<i+2;
        }

        for(int k=n-i+2;k>4;k--){
            cout<<" "<<n-k+5;
        }
        cout<<endl;
    }

}

int main() {
    // Write C++ code here
    cout << "Try programiz.pro"<<endl;
    pattern(7);
    pattern2(7);
    return 0;
}


//  6 6 6 6 6 6 6 6 6 6 6
//  6 5 5 5 5 5 5 5 5 5 6
//  6 5 4 4 4 4 4 4 4 5 6
//  6 5 4 3 3 3 3 3 4 5 6
//  6 5 4 3 2 2 2 3 4 5 6
//  6 5 4 3 2 1 2 3 4 5 6
//  6 5 4 3 2 2 2 3 4 5 6
//  6 5 4 3 3 3 3 3 4 5 6
//  6 5 4 4 4 4 4 4 4 5 6
//  6 5 5 5 5 5 5 5 5 5 6
//  6 6 6 6 6 6 6 6 6 6 6


