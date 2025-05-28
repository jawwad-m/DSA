#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >n - i -1; j--)
        {
            cout << j;
            // cout<<n-i;
        }

        for (int k = n; k > i+1; k--)
        {
            cout<<n-i;
        }
        
        cout << endl;
    }
}

int main()
{
    pattern(5);
    // *****
    // *****
    // *****
    // *****
    // *****
    return 0;
}