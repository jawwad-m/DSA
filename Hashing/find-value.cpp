#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    int hash[13] = {0};  
    // !!!arr can go upto 10^6 in int main
    for (int i = 0; i < n; i++) {
        if (arr[i] < 13) {
            hash[arr[i]] += 1;
        }
    }

    while (q--) {
        int number;
        cin >> number;
        if (number >= 0 && number < 13)
            cout <<" -> " <<hash[number] << endl;
        else
            cout << "0\n"; // out of range value
    }

    return 0;
}
