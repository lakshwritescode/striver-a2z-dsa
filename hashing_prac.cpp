#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1,2,1,3,2};

    cout <<"How many Inputs?"<<endl;
    int q;
    cin>>q;


    //precompute

    int hash[13] = {0};
    for(int i = 0; i < n ; i++)
    {
        hash[arr[i]] += 1;
    }

    cout << "Give inputs of numbers you want frequency of"<<endl;
    while(q--)
    {
        int number;
        cin>>number;

        //fetch
        cout << hash[number] << " ";

    }

    return 0;
}