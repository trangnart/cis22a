#include <iostream>
#include <string>
using namespace std;

string RemoveSpaces(string userString);

int main() {
   string userString;

   getline(cin, userString);

   cout << RemoveSpaces(userString) << endl;

   return 0;
}

string RemoveSpaces(string userString) {
    size_t pos;
    
    do {
        pos = userString.find(" ");
        if (pos != string::npos) {
            userString.erase(pos,1);
        }
    } while (pos != string::npos);

    return userString;
}
