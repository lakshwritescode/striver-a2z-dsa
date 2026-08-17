#include<bits/stdc++.h>
using namespace std;

int main()
{
    //taking input and array
    int n;
    cout <<"size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"elements in array"<<endl;
    for(int i = 0; i< n ;i++)
    {
        cin>> arr[i];
    }


    //precompute

    map<int, int> mpp;

    for(int i = 0; i< n;i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout <<"how many input?"<<endl;
    cin>>q;

    while(q--)
    {
        int number;
        cin>>number;

        //fetch

        cout << mpp[number] << " ";
    }

    return 0;
}