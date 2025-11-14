#include <iostream>

using namespace std;

int main()
{
    int teaBags;
    cout << "Enter the number of tea bags you have";
    cin >> teaBags;

    if (teaBags < 20)
    {
        teaBags += 10;
        cout << "You get 10 Extra Tea Bags Now You Have " << teaBags << " Tea Bags" << endl;
    }
    else
    {
        cout << "Your Tea Bags is: " << teaBags << endl;
    }

    return 0;
}