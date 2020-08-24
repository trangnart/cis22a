#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

bool FirstRectangleSmaller(int, int, int, int, int, int, int, int);
void CompareRectangles(const string &);

int main()
{
    const string FILENAME = "input.txt";

    CompareRectangles(FILENAME);

    return 0;
}

bool FirstRectangleSmaller(int r1xul, int r1yul, int r1xbr, int r1ybr,
                           int r2xul, int r2yul, int r2xbr, int r2ybr)
{
    int Area_1 = abs((r1xul-r1xbr) * (r1yul-r1ybr));
    int Area_2 = abs((r2xul-r2xbr) * (r2yul-r2ybr));

    if (Area_1 < Area_2) {
        return true;
    }
    return false;
}

void CompareRectangles(const string &filename)
{
    ifstream inFS;
    int r1xul, r1yul, r1xbr, r1ybr, r2xul, r2yul, r2xbr, r2ybr;

    inFS.open(filename);

    if (!inFS.is_open()) {
        cout << "Cannot open " << filename << endl;
    }

    while (!inFS.eof()) {
        string true_or_false = "false";

        inFS >> r1xul >> r1yul >> r1xbr >> r1ybr
             >> r2xul >> r2yul >> r2xbr >> r2ybr;

        if (inFS.fail()) {
            continue;
        }
        if (FirstRectangleSmaller(r1xul, r1yul, r1xbr, r1ybr,
                                  r2xul, r2yul, r2xbr, r2ybr)) {
            true_or_false = "true";
        }
        cout << "(" << r1xul << "," << r1yul << ") ("
             << r1xbr << "," << r1ybr << ") < ("
             << r2xul << "," << r2yul << ") ("
             << r2xbr << "," << r2ybr << ") is " << true_or_false << endl;
    }
    inFS.close();
}