#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int sum = 0;
    for(int i = 0 ; i <= 10 ; i++)
    {
        // cout << a << " " << b << " ";
        // a = a + b;
        // b = b + a;
        cout << sum << " ";
        sum = a + b;
        
        a = b;
        b = sum;
    }

    return 0;
}