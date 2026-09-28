#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    cout << "Value at num : " <<num << endl;
    //cout << "Address at num : " << &num << endl;

    int *p = &num;
    // cout << *ptr;
    // cout <<endl<< ptr;

    int *q = p;
    //copying pointer
    cout << p << "-" << q << endl;
    cout << *p << "-" << *q << endl;

    return 0;
}