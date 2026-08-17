#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cout << "input string "<<endl;
    cin>> s;

    //pre compute
    int hash[26] = {0};

    for(int i = 0; i<s.size();i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "tell how many inputs youre gonna make " << endl;
    cin >> q;

    while(q--)
    {
        char c;
        

        cin>> c;
        //fetch
        cout << hash [c - 'a'] << " ";
    }

    return 0;

}