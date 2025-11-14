#include <iostream>
using namespace std;

int main()
{
    float basePrice;

    cout << "Enter the Base Price of Tea: ";
    cin >> basePrice;

    float increasedPrice = basePrice * 0.10;
    float newPrice = basePrice + increasedPrice;

    int roundedPrice = (int)newPrice;

    cout << "Base Price of Tea is: " << basePrice << endl;
    cout << "New Price after 10% increase: " << newPrice << endl;
    cout << "Rounded New Price: " << roundedPrice << endl;

    return 0;
}