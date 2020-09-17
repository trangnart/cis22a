#include <iostream>
#include <string>
using namespace std;

int main()
{
    string plateNum;
    cin >> plateNum;

    int num = stoi(plateNum.substr(3, 3)) + 1;
    plateNum.erase(3, 3);
    plateNum += to_string(num);

    if (num == 1000)
    {
        plateNum.erase(3,1);

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
                    ++plateNum[0];
                }
            }
            else
            {
                ++plateNum[1];
            }
        }
        else
        {
            ++plateNum[2];
        }

    }

    cout << plateNum << endl;

    return 0;
}