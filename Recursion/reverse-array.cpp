#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i, int* v,int n){

    if(i>=n/2) return;
    swap(v[i],v[n-i-1]);
    reverseArray(i+1,v,n);
    
}

//!!! int* arr is same as int arr[]
// void reverseArray(int i, int v[],int n){

//     if(i>=n/2) return;
//     swap(v[i],v[n-i-1]);
//     reverseArray(i+1,v,n);
    
// }

//!!! For vectors -
// void reverseArray(int i, vector<int>& v) {
//     int n = v.size();
//     if (i >= n / 2) return;
//     swap(v[i], v[n - i - 1]);
//     reverseArray(i + 1, v);
// }

int main(){
    int v[] = {1,2,3,4,5};
    reverseArray(0,v,5);
    
    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}