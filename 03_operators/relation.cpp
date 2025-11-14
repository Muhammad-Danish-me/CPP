#include <iostream>

using namespace std;

int main()
{
    int teaCups;
    cout << "Enter the number of Tea Cups you have: ";
    cin >> teaCups;

    if (teaCups > 20)
    {
        cout << "You will get a GOLD Badge" << endl;
    }
    else if (teaCups >= 10 && teaCups <= 20)
    {
        cout << "You will get a SILVER Badge " << endl;
    }
    else
    {

        cout << "NO BADGE For you " << endl;
    }

    return 0;
}