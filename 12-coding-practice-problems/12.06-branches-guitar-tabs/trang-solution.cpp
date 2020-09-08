#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userChord;

    cin >> userChord;

    if (userChord == "G")
    {
        cout << "e|-3-\n"
             << "B|-0-\n"
             << "G|-0-\n"
             << "D|-0-\n"
             << "A|-2-\n"
             << "E|-3-\n";
    }
    else if (userChord == "C")
    {
        cout << "e|-0-\n"
             << "B|-1-\n"
             << "G|-0-\n"
             << "D|-2-\n"
             << "A|-3-\n"
             << "E|---\n";
    }
    else if (userChord == "D")
    {
        cout << "e|-2-\n"
             << "B|-3-\n"
             << "G|-2-\n"
             << "D|-0-\n"
             << "A|---\n"
             << "E|---\n";
    }
    else
    {
        cout << userChord << " is not a supported chord." << endl;
    }

    return 0;
}