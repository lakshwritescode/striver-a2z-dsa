#include<bits/stdc++.h>
using namespace std;

void slargest(int arr[]  , int n)
{
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }

        else if(arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }

    cout << "Largest in array " << largest << endl <<"Second Largest : " << slargest<<endl;
}

int main()
{

    int n = 7;
    int arr[n] = {1, 2 ,4 , 7 , 7 , 5 , 6};

    slargest(arr , n);

    

    return 0 ;
}