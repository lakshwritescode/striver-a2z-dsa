#include<bits/stdc++.h>
using namespace std;


    int brute(int arr[] , int n)
    {
        set<int> st;

        for(int i = 0 ; i< n;i++)
        {
            st.insert(arr[i]);
        }
        int index = 0;
        for(auto it : st)
        {   
            arr[index] = it;
            index++;
        }

    }



    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[j] != nums[i])
            {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return (i + 1);
    }

    int main(){

        

        return 0;
    }