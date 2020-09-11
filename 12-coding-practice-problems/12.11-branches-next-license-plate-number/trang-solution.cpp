#include <iostream>
#include <string>
using namespace std;

int main()
{
    string plateNum;
    cin >> plateNum;

    int num = stoi(plateNum.substr(3, 3));
    ++num;
    plateNum.erase(3, 3);

    if (num == 1000)
    {
        string n = "000";

        if (plateNum[2] == 'Z')
        {
            plateNum[2] = 'A';

            if (plateNum[1] == 'Z')
            {
                plateNum[1] = 'A';

                if (plateNum[0] == 'Z')
                {
                    plateNum[0] = 'A';
                }
                else
                {
                    plateNum[0] = plateNum[0] + 1;
                }
            }
            else
            {
                plateNum[1] = plateNum[1] + 1;
            }
        }
        else
        {
            plateNum[2] = plateNum[2] + 1;
        }
        cout << plateNum << n << endl;
    }

    else
    {
        cout << plateNum << num << endl;
    }

    return 0;
}