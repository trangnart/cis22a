#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int get_points(vector<int>& points) {
    int pins = points.back();
    points.pop_back();
    return pins;
}

int next1 (const vector<int> points) {
    if (points.size() >= 0)
        return points.back();
    return 0;
}

int next2 (const vector<int> points) {
    int s = points.size()-1;
    int total = 0;

    if (s >= 0) total += points[s];
    if (s >= 1) total += points[s-1];

    return total;
}

void game_score(vector<int> points) {
    vector<int> score(10);
    int frame = 0;

    // reverse the vector: pop_back takes from last -> first
    reverse(points.begin(), points.end());

    // iterate through each: 10 (1 pop) other wise (2 pops)
    while (!points.empty()) {
        int pins = get_points(points);
        score[frame] += pins;       // assign point to turn

        if (frame > 0)              // running total
            score[frame] += score[frame-1];

        if (pins == 10) {
            score[frame] += next2(points);
            frame++;                // next frame
            continue;               // no more turn
        } else if (points.empty()) {
            break;                  // no more points
        }

        // not a strike, pop the next point
        pins = get_points(points);
        score[frame] += pins;       // Add to current frame
        if (score[frame] == 10)
            score[frame] += next1(points);
        frame++;
    }

    for (auto s : score)
        cout << setw(5) << s;
    cout << endl;
}

void print_scores(const vector<int>& points) {
    int total = 0, pointIdx = 0;

    for (int f=0; f<10; ++f) {
        int pins = points[pointIdx];
        total += pins;

        if (pins == 10) {                       // STRIKE add the next 2
            total += points[pointIdx+1] + points[pointIdx+2];
        } else {
            pins = points[++pointIdx];          // advance to next throw
            total += pins;
            if (pins + points[pointIdx-1] == 10) {
                total += points[pointIdx+1];    // SPARE add next 1
            }
        }
        pointIdx++;
        if (f < 9)
            cout << setw(3) << total << " | ";
        else
            cout << setw(6) << total;
    }
    cout << endl;
}

void print_score_or_symbol(const int throw1, const int throw2) {
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

void print_game(const vector<int>& points) {
    cout << "-------------------------------------------------------------\n";
    int frame = 0;
    for (int i=0; i<9; ++i) {
        if (points[frame] != 10) {
            cout << points[frame];
            frame++;
            print_score_or_symbol(points[frame-1], points[frame]);
        } else {
            cout << "  X";
        }
        frame++;
        cout << " | ";
    }

    print_score_or_symbol(points[frame], -1);
    frame++;
    print_score_or_symbol(points[frame-1], points[frame]);
    frame++;

    // last frame if exists
    if (frame < points.size())
        print_score_or_symbol(points[frame], -1);

    cout << endl;
}

int main() {
    vector<vector<int>> scores = {
        {10,10,10,10,10,10,10,10,10,10,10,10},
        {9,1,10,0,0,1,9,5,2,10,2,8,8,2,10,1,9,10},
        {1,1,0,10,4,0,1,1,0,2,10,10,10,10,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,2},
        {0,0,0,10,10,10,10,10,10,10,10,10,1,0},
    };

    for (auto points : scores) {
        print_game(points);
        print_scores(points);
    }

    return 0;
}