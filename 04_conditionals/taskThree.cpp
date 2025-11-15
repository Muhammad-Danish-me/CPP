#include <iostream>

using namespace std;

int main()
{
    int cups;

    double pricePerCup = 80, totalPrice, discount;
    cout << "Enter the number of Tea cups ";
    cin >> cups;

    totalPrice = pricePerCup * cups;

    if (cups > 20)
    {
        discount = 0.20;
        totalPrice -= (totalPrice * discount);
        cout << "Total Price after 20% Discount is: " << totalPrice << endl;
    }
    else if (cups >= 10 && cups <= 20)
    {
        discount = 0.10;
        totalPrice -= (totalPrice * discount);
        cout << "Total Price after 10% Discount is: " << totalPrice << endl;
    }
    else
    {
        discount = 0;
        totalPrice -= (totalPrice * discount);
        cout << "Total Price Without Discount is: " << totalPrice << endl;
    }

    return 0;
}