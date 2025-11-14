#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userName;
    int userAge;

    cout << "What is your Name? \n";
    getline(cin, userName);

    cout << "What is your age? \n";
    cin >> userAge;

    cout << "Name is: " << userName << endl;
    cout << "Age is: " << userAge << endl;

    return 0;
}