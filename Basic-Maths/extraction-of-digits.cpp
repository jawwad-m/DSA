#include <bits/stdc++.h>
using namespace std;

vector<int> getDigits() {
    int n = 7789;
    vector<int> v;
    while (n > 0) {
        int last_digit = n % 10;
        // cout << last_digit << endl; // Optional debug
        v.push_back(last_digit);
        n = n / 10;
    }

    // sort(v.begin(), v.end(),greater<int>());// functional object (functor)
    return v;
}

int main() {
    vector<int> v = getDigits(); // store returned vector

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
