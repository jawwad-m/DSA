#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j <2*i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern(5);
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    return 0;
}