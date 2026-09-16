#include<bits/stdc++.h>
using namespace std;

void intersection(int n1 , int a1[] , int n2  , int a2[]) //brute
{
    
    int vis[n2] = {0};
    multiset <int > st;
    for(int i = 0 ; i < n1 ; i++)
    {
        for(int j = 0 ; j < n2;j++)
        {
            if(a1[i] == a2[j] && vis[j] == 0)
            {
                st.insert(a1[i]);
                vis[j] = 1;
                break;
            }
            if(a2[j] > a1[i]) break;
        }
    }

   


    for(auto it : st)
    {
        cout << it << " ";
    }

}

void optimalIntersection(int n1, int a1[], int n2, int a2[])
{
    int i = 0;
    int j = 0;

    multiset<int> ans;

    while(i < n1 && j < n2)
    {
        if(a1[i] == a2[j])
        {
            ans.insert(a1[i]);
            i++;
            j++;
        }
        else if(a1[i] < a2[j])
        {
            i++;
        }

        else if(a2[j] < a1[i])
        {
            j++;
        }
    }

    for( auto it : ans)
    {
        cout << it << " ";
    }

}

int main()
{
    int n1 = 8;
    int a1[n1] = {1,2,2,3,3,4,5,6};

    int n2 = 7;
    int a2[n2] = {2,3,3,5,6,6,7};

    optimalIntersection(n1 , a1 , n2 , a2);

    return 0;
}