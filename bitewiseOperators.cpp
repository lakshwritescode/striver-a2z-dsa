#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    // operator
    cout << "a & b :" << (a & b) << endl;
    cout <<"a | b :"<<(a|b)<<endl;
    cout <<"~a :"<<(~a)<<endl;
    cout <<"~b :"<<(~b)<<endl;
    cout << "a ^ b :" << (a ^ b) << endl;

    // Left shift
    cout << (17 << 1) << endl;
    cout << (17 << 2) << endl;

    //rigtht shift
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;

    return 0;
}