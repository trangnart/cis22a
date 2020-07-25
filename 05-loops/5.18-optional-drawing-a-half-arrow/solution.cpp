#include <iostream>
using namespace std;

int main()
{
    int arrowBaseHeight;
    int arrowBaseWidth;
    int arrowHeadWidth;
    int i, j;

    cout << "Enter arrow base height:" << endl;
    cin >> arrowBaseHeight;

    cout << "Enter arrow base width:" << endl;
    cin >> arrowBaseWidth;

    do
    {
        cout << "Enter arrow head width:" << endl;
        cin >> arrowHeadWidth;
    } while (arrowHeadWidth <= arrowBaseWidth);
    cout << endl;

    // Draw arrow base (height = 3, width = 2)
    for (i = 0; i < arrowBaseHeight; ++i)
    {
        for (j = 0; j < arrowBaseWidth; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Draw arrow head (width = 4)
   for (i = arrowHeadWidth; i > 0; --i) {
       for (j = i; j > 0; --j) {
           cout << "*";
       }
       cout << endl;
   }

   return 0;
}