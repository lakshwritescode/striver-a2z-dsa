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


int main()
{
    cout<<"give input for pattern"<<endl;
    int n;
    cin>>n;
    cout<<"Square Pattern below"<<endl;
    SquareStars(n);

    return 0;
}