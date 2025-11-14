#include <iostream>

using namespace std;

int main()
{
    int teaBags;
    cout << "Enter the number of tea bags you have: ";
    cin >> teaBags;

    if (teaBags < 10)
    {
        teaBags = teaBags + 5;
        cout << "You Got a 5 Extra Now You Have " << teaBags << endl;
    }
    else
    {
        cout << "Your Tea Bags is: " << teaBags;
    }

    return 0;
}