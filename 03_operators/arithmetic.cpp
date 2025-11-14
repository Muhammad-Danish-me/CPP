#include <iostream>

using namespace std;

int main()
{

    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of tea cups: ";
    cin >> cups;
    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // Apply 5% discount if total price is is above 80

    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted Price is: " << discountedPrice << endl;
    }
    else
    {
        cout << "Total Price is: " << totalPrice;
    };

    return 0;
}