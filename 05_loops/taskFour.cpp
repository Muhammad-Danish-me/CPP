#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;
    while (true)
    {
        cout << "Do you want more tea (type 'stop' to exit)? ";
        getline(cin, response);

        if (response == "stop" || response == "Stop" || response == "STOP")
        {
            // exit the loop
            cout << "Thanks For ordering!";
            break;
        }

        cout << "Here is your another cup of tea." << endl;
    }

    return 0;
}