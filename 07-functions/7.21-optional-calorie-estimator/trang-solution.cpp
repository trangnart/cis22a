#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

double ActivityCalories(string activity, int min);
void CalculateCaloriesUserInput();
void CalculateCaloriesFromFile(const string &filename);

int main() {
    const string FILENAME = "input.txt";

    CalculateCaloriesFromFile(FILENAME);

    return 0;
}

double ActivityCalories(string activity, int min) {
    double num;

    if (activity == "sit") {
        num = min * 1.4;
    }
    if (activity == "walk") {
        num = min * 5.4;
    }
    if (activity == "run") {
        num = min * 13.0;
    }
    if (activity == "bike") {
        num = min * 6.8;
    }
    if (activity == "swim") {
        num = min * 8.7;
    }
    return num;
}

void CalculateCaloriesUserInput() {
    int userMinutes;
    string userActivity;

    cin >> userActivity;
    cin >> userMinutes;

    cout << ActivityCalories(userActivity, userMinutes) << endl;
}

void CalculateCaloriesFromFile(const string &filename) {
    ifstream inFS;
    string activity;
    int min;

    inFS.open(filename);

    if (!inFS.is_open()) {
        cout << "Cannot open " << filename << endl;
    }

    while (!inFS.eof()) {
        inFS >> activity;
        inFS >> min;

        if (inFS.fail()) {
            continue;
        }
        cout << setprecision(1) << fixed;
        cout << activity << " " << "for " << min << " minutes burns "
             << ActivityCalories(activity, min) << " calories" << endl;
    }
    inFS.close();
}