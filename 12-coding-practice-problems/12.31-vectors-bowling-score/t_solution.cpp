#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

void print_scores( vector<int> &);
void print_score_or_symbol(const int, const int);
void print_game(const vector<int> &);

int main()
{
    vector<vector<int>> scores = {
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
        {9, 1, 10, 0, 0, 1, 9, 5, 2, 10, 2, 8, 8, 2, 10, 1, 9, 10},
        {1, 1, 0, 10, 4, 0, 1, 1, 0, 2, 10, 10, 10, 10, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2},
        {0, 0, 0, 10, 10, 10, 10, 10, 10, 10, 10, 10, 1, 0},
    };

    for (auto points : scores)
    {
        print_game(points);
        print_scores(points);
    }

    return 0;
}

void print_scores(vector<int> &points)
{
    int total = 0, pointIdx = 0, i = 0;

    for (int f = 0; f < 10; ++f)
    {
        // 1. increment total score with current pins count
        pointIdx = points.at(i);
        // 2. is it a strike? add next 2 throws
        if (pointIdx == 10) {
            total += points.at(i+1) + points.at(i+2);
        }
        // 3. if not, add next throw to total
        else {
            total += points.at(i);
            ++i;
            pointIdx += points.at(i);
            if (pointIdx == 10) {
                total += points.at(i+1);
            }
        }
        ++i;
        // 4. if both throws equal to 10, add next 1 throw
        if (i > 0) {
            total += points.at(i-1);
        }
        // 5. advance pointIdx

        if (f < 9)
            cout << setw(3) << total << " | ";
        else
            cout << setw(6) << total;

    }
    cout << endl;
}

void print_score_or_symbol(const int throw1, const int throw2)
{
    cout << setw(2);
    if (throw1 == 10)
        cout << "X";
    else if (throw1 + throw2 == 10)
        cout << "/";
    else if (throw2 < 0)
        cout << throw1;
    else
        cout << throw2;
}

void print_game(const vector<int> &points)
{
    cout << "-------------------------------------------------------------\n";
    int frame = 0;
    for (int i = 0; i < 9; ++i)
    {
        if (points[frame] != 10)
        {
            cout << points[frame];
            frame++;
            print_score_or_symbol(points[frame - 1], points[frame]);
        }
        else
        {
            cout << "  X";
        }
        frame++;
        cout << " | ";
    }

    print_score_or_symbol(points[frame], -1);
    frame++;
    print_score_or_symbol(points[frame - 1], points[frame]);
    frame++;

    // last frame if exists
    if (frame < points.size())
        print_score_or_symbol(points[frame], -1);

    cout << endl;
}
