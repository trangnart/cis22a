#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name,
           firstName,
           lastName,
           middleName = "",
           initials = "";
    size_t first_space, second_space;
    // gets the whole line
    // name = "first middle last"
    //         01234567890123456
    getline(cin, name);
    // first_space = 5
    first_space = name.find(" ");
    // substr takes 2 args
    // 1: position
    // 2: length
    firstName = name.substr(0, first_space);

    // second_space = 12
    second_space = name.find(" ", first_space+1);

    if (second_space == string::npos) {
        // no second space has only "first last" no "middle"
        // name = "first last"
        //         0123456789
        lastName = name.substr(first_space+1, name.length()-first_space-1);
    } else {
        // second_space - first_space - 1 = 5
        middleName = name.substr(first_space+1, second_space-first_space-1);
        // name.length() = 17
        lastName = name.substr(second_space+1, name.length()-second_space-1);
    }

    // now we have all the strings we need, takes first and middle initals
    initials = initials + firstName.at(0) + ".";
    if (middleName != "") {
        initials = initials + middleName.at(0) + ".";
    }
    cout << lastName + ", " + initials << endl;

    return 0;
}
