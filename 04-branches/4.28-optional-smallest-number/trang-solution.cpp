#include <iostream>
using namespace std;

int main() {
    int user_1, user_2, user_3, smallest_num;
    cin >> user_1 >> user_2 >> user_3;

    if (user_1 < user_2)
        smallest_num = user_1;

    else if (user_2 < user_3)
        smallest_num = user_2;

    else if (user_3 < user_1)
        smallest_num = user_3;

    cout << smallest_num << endl;
    

   return 0;
}