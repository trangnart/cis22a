#include <iostream>
#include <string>
using namespace std;

int main()
{
    string who, where, what;
    int howmany;
    cin >> who >> where >> howmany >> what;
    cout << who << " went to "
         << where << " to buy "
         << howmany << " types of "
         << what << ".\n";

    return 0;
}