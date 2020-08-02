#include <iostream>
using namespace std;

int main() {
    int num;
    int ave_num = 0;
    int max_num = 0;
    int sum = 0;
    int count = 0;

    cin >> num;

    while (num > -1) {
        sum += num;
        count++;
        if (num > max_num) {
            max_num = num;
        }
        cin >> num;
    }

    ave_num = sum / count;
    cout << ave_num << " " << max_num << endl;

   return 0;
}
