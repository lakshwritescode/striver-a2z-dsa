#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout << "input size of array :"<< endl;
    cin>>n;
    int arr[n];
    cout << "input the elements of array" << endl;

    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }


  

    //precompute
    int hash[13] = {0};

    for(int i = 0; i< n; i++)
    {
        hash[arr[i]]+=1;
    }

    // taking inputs to search frequency for

    int q;
    cout << "tell how many inputs youre gonna make " << endl;
    cin >> q;

    while(q--)
    {
        int number;
        cin >> number;
        //fetch

        cout << hash[number] << endl;
    }

    return 0;
}