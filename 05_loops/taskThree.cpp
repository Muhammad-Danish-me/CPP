#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teaCups;
    cout << "Enter the cups you want: ";
    cin >> teaCups;

    for (int i = 1; i <= teaCups; i++)
    {
        cout << "Brewing cup " << i << " of tea.." << endl;
    }

    return 0;
}