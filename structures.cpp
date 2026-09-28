#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int age;
    float marks;
};

int main()
{
    Student s1;

    // s1.name = "Laks";
    // s1.age = 22;
    // s1.marks = 67.67;

    s1 = {"Laks" , 22  , 67.67};

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.marks << endl;

    return 0;
}