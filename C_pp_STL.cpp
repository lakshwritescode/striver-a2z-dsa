
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

void explainLists()
{
    list<int> ls;
    ls.push_back(2);
    //{2}
    ls.emplace_back(4);
    //{2,4}
    ls.push_front(5);
    //{5,2,4}
    ls.emplace_front(7); 


}


void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    for(auto it : dq)
    {
        cout << it << " ";
    }

}


void explainStack() //last in first out
{
    stack<int> st;

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.emplace(8);
    cout<< st.top()<<endl;
    cout<<st.size()<<endl;
    //TC BIG O OF 1
}

void explainqueue()//first in first out
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    q.back() += 5;
    cout <<q.back()<<endl;
    q.pop();

    cout<<q.front();


}

void explainPriorityQueue()
{
    priority_queue <int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    pq.push(12);

    cout<<pq.top()<<endl;

    priority_queue<int , vector<int> , greater<int>> pqq; //minimum heap
    pqq.push(5);
    pqq.push(2);
    pqq.push(8);
    pqq.push(10);
    pqq.push(12);
}

void explainSet()
{
    set<int> st;
    st.insert(4);
    st.insert(6);
    st.insert(2);
    st.insert(8);
    st.emplace(13);
    st.insert(12);

    auto it = st.find(6);

    st.erase(13);

    int cnt = st.count(8);
    auto it = st.upper_bound(98);
    auto it = st.lower_bound(99);
}

//unorderedset = randomised order


void explainMap()
{
    map <int , int > mpp; // { key , value}

    map<int , pair<int , int >> mpp;

    map<pair<int,int> , int > mpp;

    mpp[1] = 2;
    // mpp.emplace({3,1});

    mpp.insert({2,4});
    
    
    //map stores unique keys in sorted order , as same as set

    



}

int main()
{

    //explainPair();

    explainVector();
    return 0;
}