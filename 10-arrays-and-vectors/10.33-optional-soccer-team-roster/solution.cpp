#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <iterator>

using namespace std;

void ReadData(const string&, vector<int>&, vector<int>&);
char PrintMenuItems();
void PrintMenu(vector<int>&, vector<int>&);
void PrintRoster(const vector<int>&, const vector<int>&, int level=0);
void PrintRosterAboveRating(const vector<int>&, const vector<int>&);
void AddPlayer(vector<int>&, vector<int>&);
void RemovePlayer(vector<int>&, vector<int>&);
void UpdatePlayer(vector<int>&, vector<int>&);

int main() {
    const string FILENAME = "input.txt";
    vector<int> jerseys, ratings;

    ReadData(FILENAME, jerseys, ratings);
    PrintMenu(jerseys, ratings);

    return 0;
}

char PrintMenuItems() {
    char choice;
    cout << "MENU\n"
        "a - Add player\n"
        "d - Remove player\n"
        "u - Update player rating\n"
        "r - Output players above a rating\n"
        "o - Output roster\n"
        "q - Quit\n\n"
        "Choose an option: ";
    cin >> choice;
    return choice;
}

void PrintMenu(vector<int>& jerseys, vector<int>& ratings) {
    char c;
    do {
        c = PrintMenuItems();
        switch (c) {
            case 'a':
                AddPlayer(jerseys, ratings);
                break;
            case 'd':
                RemovePlayer(jerseys, ratings);
                break;
            case 'u':
                UpdatePlayer(jerseys, ratings);
                break;
            case 'r':
                PrintRosterAboveRating(jerseys, ratings);
                break;
            case 'o':
                PrintRoster(jerseys, ratings);
                break;
        }
    } while (c != 'q');
}

void AddPlayer(vector<int>& jerseys, vector<int>& ratings) {
    int jersey, rating;

    cout << "Enter a new player's jersey number:\n";
    cin >> jersey;
    cout << "Enter the player's rating:\n";
    cin >> rating;

    jerseys.push_back(jersey);
    ratings.push_back(rating);
}

void RemovePlayer(vector<int>& jerseys, vector<int>& ratings) {
    int jersey;

    cout << "Enter a jersey number:\n";
    cin >> jersey;

    auto it = find(jerseys.begin(), jerseys.end(), jersey);
    if (it != jerseys.end()) {
        int index = distance(jerseys.begin(), it);
        jerseys.erase(it);
        it = ratings.begin();
        advance(it, index);
        ratings.erase(it);
    }
}

void UpdatePlayer(vector<int>& jerseys, vector<int>& ratings) {
    int jersey, rating;

    cout << "Enter a jersey number:\n";
    cin >> jersey;
    cout << "Enter a new rating for player:\n";
    cin >> rating;

    auto it = find(jerseys.begin(), jerseys.end(), jersey);
    if (it != jerseys.end()) {
        auto index = distance(jerseys.begin(), it);
        ratings[index] = rating;
    }
}

void PrintRosterAboveRating(const vector<int>& jerseys,
                            const vector<int>& ratings) {
    int rating;
    cout << "Enter a rating:\n";
    cin >> rating;

    cout << "ABOVE " << rating << endl;
    PrintRoster(jerseys, ratings, rating);
}

void PrintRoster(const vector<int>& jerseys,
                 const vector<int>& ratings,
                 int level) {
    cout << "ROSTER\n";
    for (size_t i = 0; i < jerseys.size(); ++i) {
        if (ratings[i] <= level) {
            continue;
        }
        cout << "Player " << i+1 << " -- "
             << "Jersey number: " << jerseys[i] << ", "
             << "Rating: " << ratings[i]
             << endl;
    }
}

void ReadData(const string& filename,
              vector<int>& jerseys,
              vector<int>& ratings) {
    ifstream inFS(filename);

    if (inFS.is_open()) {
        int jersey, rating;

        while (!inFS.eof()) {
            inFS >> jersey >> rating;

            if (!inFS.fail()) {
                jerseys.push_back(jersey);
                ratings.push_back(rating);
            }
        }

        inFS.close();
    }
}