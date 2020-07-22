#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, firstName, lastName, middleName;
    size_t first_space, second_space;
    char firstInitial, middleInitial;

    getline(cin, name);
    // name = "first last"
    //         0123456789
    first_space = name.find(" ");
    // first_space = 5
    firstName = name.substr(0, first_space);
    // firstName = "first"
    second_space = name.find(" ", first_space+1);

    if (second_space == string::npos) { // means there's no second space
        lastName = name.substr(first_space+1, name.length()+1-first_space);
        firstInitial = firstName.at(0);
        cout << lastName << ", " << firstInitial << "." << endl;
    }

    else {
        middleName = name.substr(first_space+1, second_space-first_space-1);
        lastName = name.substr(second_space+1, name.length()-second_space-1);
        firstInitial = firstName.at(0);
        middleInitial = middleName.at(0);
        cout << lastName << ", " << firstInitial << "."
             << middleInitial << "." << endl;
    }

    return 0;
}
