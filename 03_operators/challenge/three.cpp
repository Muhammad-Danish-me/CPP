#include <iostream>

using namespace std;

int main()
{
    int teaCups;
    bool isMember;
    cout << "Enter the Number of cups you buy ";
    cin >> teaCups;

    cout << "Are you a Member for More than a year? (Use 1 for yes 0 for No)";
    cin >> isMember;

    if (isMember || teaCups >= 12)
    {
        cout << "You are eligible for Discount" << endl;
    }
    else
    {

        cout << "You are NOT eligible for Discount" << endl;
    }
    return 0;
}