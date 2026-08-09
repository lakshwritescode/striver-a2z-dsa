#include<iostream>
using namespace std;

void SquareStars(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void rightAngledTriangle(int n)
{
    for(int i = 0; i<n;i++)
    {
        for(int j = 0 ;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main()
{
    cout<<"give input for pattern"<<endl;
    int n;
    cin>>n;
    cout<<"Square Pattern below"<<endl;
    SquareStars(n);

    cout << "Right angled traingle pattern below" << endl;
    rightAngledTriangle(n);

    return 0;
}