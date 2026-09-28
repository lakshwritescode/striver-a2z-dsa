#include <iostream>
using namespace std;

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    Day today = WEDNESDAY;

    switch (today)
    {
    case MONDAY:
        cout << "Monday";
        break;

    case TUESDAY:
        cout << "Tuesday";
        break;

    case WEDNESDAY:
        cout << "Wednesday";
        break;

    case THURSDAY:
        cout << "Thursday";
        break;

    case FRIDAY:
        cout << "Friday";
        break;

    case SATURDAY:
        cout << "Saturday";
        break;

    case SUNDAY:
        cout << "Sunday";
        break;
    }

    return 0;
}