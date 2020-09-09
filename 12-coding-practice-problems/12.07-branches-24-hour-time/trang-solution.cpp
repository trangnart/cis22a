#include <iostream>
using namespace std;

int main()
{
    int hoursAmPm;
    string minAmPm, hours24;

    cin >> hoursAmPm >> minAmPm >> hours24;
   
    if (hours24 == "am")
    {
        if (hoursAmPm < 10)
        {
            cout << "0" << hoursAmPm << ":" << minAmPm << endl;
        }
        else if (hoursAmPm == 12)
        {
            cout << "00:" << minAmPm << endl;
        }
        else
        {
            cout << hoursAmPm << ":" << minAmPm << endl;
        }
    }
    else if (hours24 == "pm")
    {
        cout << hoursAmPm + 12 << ":" << minAmPm << endl;
    }

    return 0;
}