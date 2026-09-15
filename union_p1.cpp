#include<bits/stdc++.h>
using namespace std;

void bruteUnion(int arr1[]  , int n1 , int arr2[] , int n2 , vector<int>& arr3)
{
    set<int> st;

    for(int i = 0 ; i < n1 ; i++)
    {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }

    for(auto it : st)
    {
        arr3.push_back(it);
    }

}

void unionArr(int arr1[] , int n1 , int arr2[] , int n2 , vector<int>& arr3)
{
    int i = 0;
    int j = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            if(arr3.size() == 0 || arr3.back() != arr1[i])
            {
                arr3.push_back(arr1[i]);
            }
            i++;
        }

        else 
        {
            if (arr3.size() == 0 || arr3.back() != arr2[j])
            {
                arr3.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n1)
    {
        if (arr3.size() == 0 || arr3.back() != arr1[i])
        {
            arr3.push_back(arr1[i]);
        }
        i++;
    }

    while(j < n2)
    {
        if (arr3.size() == 0 || arr3.back() != arr2[j])
        {
            arr3.push_back(arr2[j]);
        }
        j++;
    }

}

int main()
{
    int n1 = 5;
    int n2 = 5;

    int arr1[n1] = {1,1,2,3,4};

    int arr2[n2] = {2,3,5,5,6};

    vector<int>arr3;

    unionArr(arr1 , n1 , arr2 , n2 , arr3);

    for(auto it : arr3)
    {
        cout << it << " ";
    }

    return 0;
}