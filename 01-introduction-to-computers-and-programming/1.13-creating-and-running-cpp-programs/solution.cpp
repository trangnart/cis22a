#include <iostream>
using namespace std;

int main()
{
    cout << "Developing a program in a language such as C++ \nrequires at least four steps:" << endl;
    cout << "   EDIT: type a C++ program and save it to a file \n\t - source file (myFile.cpp)" << endl;
    cout << "   COMPILE: translate source file in machine language and check for "
            "syntax errors\n\t - object file (myFile.obj)"
         << endl;
    cout << "   LINK: combine the object file with other object files "
            "from a system library\n\t - executable file (myFile.exe)"
         << endl;
    cout << "   RUN: load the executable into primary memory and execute it." << endl;

    return 0;
}