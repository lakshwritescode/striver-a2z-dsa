#include<bits/stdc++.h>
using namespace std;

char getMaxCharacter(string s)
{
    int arr[26] = {0};
    //created array of count
    for(int i = 0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        //lowerCase
        int number = 0;
        if(ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        //uppercase
        else{
            number = ch - 'A';
        }

        arr[number]++;
    }

    int maxi = -1 , ans = -1;

    for(int i = 0 ; i< 26 ; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;


}

int main()
{
    string s;
    cout << "string dedo" << endl;
    cin >> s;

    cout << getMaxCharacter(s)<<endl;

    return 0 ;
}