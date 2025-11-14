#include <iostream>

using namespace std;

int main()
{
    bool isStudent;
    int cups;
    cout << "Are you a Student (1 for Yes and 0 for No) ? ";
    cin >> isStudent;
    cout << "How many cups of tea have you purchased? ";
    cin >> cups;

    if (isStudent || cups >= 15)
    {
        cout << "You are eligible for a Discount" << endl;
    }
    else
    {
        cout << "You are Not eligible for a Discount";
    }

    return 0;
}