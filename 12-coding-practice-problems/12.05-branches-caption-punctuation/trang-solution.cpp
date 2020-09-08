#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string userCaption;
    getline(cin, userCaption);
    size_t len = userCaption.size();
    char commas = userCaption.back();
    char first_punct = userCaption[len - 3];
    char second_punct = userCaption[len - 2];
    char last_punct = userCaption[len - 1];

    if (commas == ',')
    {
        userCaption.pop_back();
    }
    if (last_punct != '.' && last_punct != '!' && last_punct != '?')
    {
        userCaption.push_back('.');
    }
    if (last_punct == '.' && second_punct == '.' && first_punct != '.')
    {
        userCaption.pop_back();
    }

    cout << userCaption << endl;

    return 0;
}