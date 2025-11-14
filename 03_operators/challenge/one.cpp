#include <iostream>

using namespace std;

int main()
{
    int teaPacks;
    int perPackPrice;
    cout << "Enter the Number of tea packs you want ";
    cin >> teaPacks;
    cout << "Enter the Price Per tea pack ";
    cin >> perPackPrice;

    int totalPrice = teaPacks * perPackPrice;

    double finalCost = totalPrice + (totalPrice * 0.10); // 10% Tax

    cout << "Final Cost of Tea Packs is: " << finalCost << endl;

    return 0;
}