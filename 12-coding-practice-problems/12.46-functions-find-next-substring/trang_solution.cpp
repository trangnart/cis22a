#include <iostream>
#include <string>
using namespace std;

int FindNextSubstr(string str, int start, string search) {
    bool found;
    int k;

    for (size_t i = start; i < str.size()-search.size(); i++) {
        found = true;
        k = 0;

        for (size_t j = i; j < search.size(); j++) {
            if (str[j] != search[k]) {
                found = false;
                break;
            }
            k++;
        }
        if (found) {
            return i;
        }
    }
    return -1;
}

int main() {
   string inputString;
   int startIndex;
   string searchStr;

   cin >> inputString;
   cin >> startIndex;
   cin >> searchStr;

   cout << FindNextSubstr(inputString, startIndex, searchStr) << endl;

   return 0;
}