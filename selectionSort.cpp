#include<bits/stdc++.h>
using namespace std;

void selection(int n , int arr[])
{
    for(int i = 0 ; i<n-1; i++ )
    {
        int mmi = i;

        for(int j =i; j<n;j++)
        {
            if(arr[j] < arr[mmi])
            {
                mmi = j;
            }
            
        }
        swap(arr[mmi], arr[i]);
    }

    
}

int main()
{
    int n = 6;
    int arr[n] = {13,46,24,52,20,9};

    selection( n , arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}