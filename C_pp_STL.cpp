
#include<bits/stdc++.h>

using namespace std;

void explainPair()
{
    pair <int , int > p = {1,3}; // datatype can be anything other than int as well

    cout<<p.first<<" "<<p.second<<" "<<endl;

    pair <int , pair< int , int>> q = {1 , { 1 , 2}};

    cout << q.first << " " << q.second.second << " " << q.second.first <<" "<<endl;

    pair <int , int > arr[] = {{1,2},{3,4},{5,6}};

    cout << arr[1].second<< " "<< arr[2].first <<" "<<endl;

}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);

    // vector< pair <int , int >> vec;
    // vec.push_back({1,3});
    // vec.emplace_back(2,4);

    // vector<int> v1(5, 100);

    // vector<int> v2(v1);

    // vector<int> ::iterator it = v.begin();
    // it++;
    // cout << *(it) <<" ";

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<*(it) << " ";
    }

    cout <<endl;

    // for(auto it = v1.begin();it !=v1.end();it++)
    // {
    //     cout<< *(it)<<" ";
    // }
    //{1,2,3,4,5,6}
    v.erase(v.begin()+2 , v.begin()+4);
    cout<<endl;
    for(auto it : v)
    {
        cout<< it <<" ";
    }

    v.insert(v.begin(),300);
    v.insert(v.begin() +1,2 ,  23);
    cout<<endl;
    for(auto it : v)
    {
        cout<< it <<" ";
    }


    vector<int> copy(2,37);

    v.insert(v.begin(), copy.begin() , copy.end());
    cout<<endl;
    for(auto it : v)
    {
        cout << it <<" ";
    }

    cout<<endl <<v.size();

    v.pop_back();

    cout<<endl;

    for (auto it : v)
    {
        cout << it << " ";
    }



}

int main()
{

    //explainPair();

    explainVector();
    return 0;
}