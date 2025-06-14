#include<bits/stdc++.h>
using namespace std;

// bool checkPalindrome(int i,int* arr,int n){
//     if(i>=n) return true;
//     if(arr[i] != arr[n-i-1]) return false;
//     return checkPalindrome(i+1,arr,n);
// }

bool checkPalindrome(int i,int arr[],int n){
    if(i>=n/2) return true;
    if(arr[i] == arr[n-i-1]) checkPalindrome(i+1,arr,n);
    return false; // 2nd last recursion ne jab return kiya to ye last line chal gyi
}

int main(){
    int arr[] = {'h','e','l','e','p'};

    cout<<boolalpha<<checkPalindrome(0,arr,5);
    return 0;
}