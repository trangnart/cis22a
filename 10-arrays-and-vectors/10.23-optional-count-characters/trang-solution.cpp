#include <iostream>
#include <vector>
using namespace std;

int CountCharacters(char userChar, const string &userString);

int main()
{
    char userChar;
    string userString;

    cin >> userChar;
    cin.ignore(1);
    getline(cin, userString);

    cout << CountCharacters(userChar, userString) << endl;

    return 0;
}

int CountCharacters(char userChar, const string &userString)
{
    int count = 0;
    for (auto e : userString) {
        if (userChar == e) {
            count++;
        }
    }
    return count;
}