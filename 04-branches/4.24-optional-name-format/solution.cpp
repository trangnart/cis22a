#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, firstName, lastName, middleName;
    int first_space, second_space;
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

    /*
     put your if statement here to check if there are 2 or 1 space
     if (second_space != string::npos) // means there's no second space
    */

    // second_space - first_space - 1 = 5
    middleName = name.substr(first_space+1, second_space-first_space-1);
    // name.length() = 17
    lastName = name.substr(second_space+1, name.length()-second_space-1);


    return 0;
}
