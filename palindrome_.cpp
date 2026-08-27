#include<bits/stdc++.h>
using namespace std;


    bool isPalindrome(int x)
    {
        long long OGx = x;
        long long reverseNum = 0;
        while (x > 0)
        {
            long long lastdigit = x % 10;
            reverseNum = (reverseNum * 10) + lastdigit;
            x = x / 10;
        }
        if (OGx == reverseNum)
            return true;
        else
            return false;
    }

    int main(){


        cout <<"enter a number to check palindrom"<<endl;
        int n;
        cin>>n;
        if(isPalindrome(n) == 1)
        {
            cout <<"Its palindrome"<<endl;
        }
        else
        {
            cout <<"Not a palindrome"<<endl;
        }

        return 0;
    }


