#include <iostream>
#include <string>
using namespace std;

int main()
{
    string favTea;
    cout << "Enter Your Favorite Tea: ";
    getline(cin, favTea);

    int teaOrder;
    cout << "How Many Cups Do you Want? ";
    cin >> teaOrder;

    cout << teaOrder << " Cups of Your Favorite " << favTea << " are ready";

    return 0;
}