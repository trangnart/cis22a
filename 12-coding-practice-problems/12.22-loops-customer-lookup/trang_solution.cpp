#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string idToFind;
    string dbId;
    string dbFirstName;
    string dbLastName;
    ifstream customerDb;

    cin >> idToFind;

    customerDb.open("CustomerDb.txt");
    if (customerDb.fail()) {
        cout << "Could not open CustomerDb.txt" << endl;
    }
    else {
        while ((customerDb >> dbId) && (dbId != idToFind)) {
            customerDb >> dbFirstName >> dbLastName;
        }

        if (idToFind == dbId) {
            customerDb >> dbFirstName >> dbLastName;
            cout << dbFirstName << " " << dbLastName << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    customerDb.close();
    }

    return 0;
}