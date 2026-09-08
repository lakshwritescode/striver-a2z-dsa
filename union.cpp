#include<bits/stdc++.h>
using namespace std;

class Union
{
    public:
        void brute_union(int arr1[], int arr2[], int n1, int n2)
        {
            set<int> st;

            for (int i = 0; i < n1; i++)
            {
                st.insert(arr1[i]);
            }

            for (int i = 0; i < n2; i++)
            {
                st.insert(arr2[i]);
            }

            vector<int> temp;

            for (auto it : st)
            {
                temp.push_back(it);
            }

            print(temp);
        }

        void print(vector<int> temp)
        {

            for (auto it : temp)
            {
                cout << it << " ";
            }
        }

        void twoPointer_Union(int arr1[] , int arr2[] , int n1 , int n2)
        {
            int i = 0;
            int j = 0;

            vector<int> unionArr;

            while(i < n1 && j < n2)
            {
                if(arr1[i] <= arr2[j])
                {
                    if(unionArr.size() == 0 || unionArr.back() != arr1[i])
                    {
                        unionArr.push_back(arr1[i]);
                    }
                    i++;
                }
                else{
                    if (unionArr.size() == 0 || unionArr.back() != arr2[j])
                    {
                        unionArr.push_back(arr2[j]);
                    }
                    j++;
                }
            }

            while ( j<n2)
            {
                if (unionArr.size() == 0 || unionArr.back() != arr2[j])
                {
                    unionArr.push_back(arr2[j]);
                }
                j++;
            }

            while(i<n1)
            {
                if (unionArr.size() == 0 || unionArr.back() != arr1[i])
                {
                    unionArr.push_back(arr1[i]);
                }
                i++;
            }

        }
};




int main()
{
    Union un;
    int n1 = 6;
    int n2 = 6;

    int arr1[n1] = {1,1,2,3,4,5};

    int arr2[n2] = {2,3,4,4,5,6};

    un.brute_union(arr1 , arr2 , n1 , n2);

    return 0;
}