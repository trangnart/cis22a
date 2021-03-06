#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

void ReadData(const string &, vector<int> &, vector<int> &);
char PrintMenuItems();
void PrintMenu(vector<int> &, vector<int> &);
void PrintRoster(const vector<int> &, const vector<int> &, int);
void PrintRosterAboveRating(const vector<int> &, const vector<int> &);
void AddPlayer(vector<int> &, vector<int> &);
void RemovePlayer(vector<int> &, vector<int> &);
void UpdatePlayer(vector<int> &, vector<int> &);

int main()
{
    const string FILENAME = "input.txt";
    vector<int> jerseys, ratings;

    ReadData(FILENAME, jerseys, ratings);
    PrintMenu(jerseys, ratings);

    return 0;
}

void ReadData(const string &filename, vector<int> &jerseys,
              vector<int> &ratings)
{
    int j_num, r_num;
    ifstream inFS(filename);

    bool isOpen = inFS.is_open();
    if (isOpen)
    {
        while (!inFS.eof())
        {
            inFS >> j_num >> r_num;

            bool isFailed = inFS.fail();
            if (!isFailed)
            {
                jerseys.push_back(j_num);
                ratings.push_back(r_num);
            }
        }
    }
    inFS.close();
}

void PrintRoster(const vector<int> &jerseys,
                 const vector<int> &ratings, int level = 0)
{
    size_t size = jerseys.size();

    cout << "ROSTER" << endl;
    for (size_t i = 0; i < size; ++i)
    {
        if (ratings[i] > level)
        {
            cout << "Player " << i + 1 << " -- Jersey number: "
                 << jerseys[i] << ", Rating: " << ratings[i] << endl;
        }
    }
}

void PrintRosterAboveRating(const vector<int> &jerseys,
                            const vector<int> &ratings)
{
    int num;
    size_t size = jerseys.size();

    cout << "Enter a rating:\n";
    cin >> num;

    cout << "\nABOVE " << num << endl;

    PrintRoster(jerseys, ratings, num);
}

char PrintMenuItems()
{
    cout << "MENU\n";
    cout << "a - Add player\n";
    cout << "d - Remove player\n";
    cout << "u - Update player rating\n";
    cout << "r - Output players above a rating\n";
    cout << "o - Output roster\n";
    cout << "q - Quit\n"
         << endl;
    cout << "Choose an option: ";

    char option;
    cin >> option;

    return option;
}

void AddPlayer(vector<int> &jerseys, vector<int> &ratings)
{
    int num;

    cout << "Enter a new player's jersey number:\n";
    cin >> num;
    jerseys.push_back(num);

    cout << "Enter the player's rating:\n";
    cin >> num;
    ratings.push_back(num);
}

void RemovePlayer(vector<int> &jerseys, vector<int> &ratings)
{
    int num;

    cout << "Enter a jersey number:\n";
    cin >> num;

    auto j_it = jerseys.begin();
    auto r_it = ratings.begin();
    auto end = jerseys.end();
    while (j_it != end)
    {
        if (*j_it == num)
        {
            jerseys.erase(j_it);
            ratings.erase(r_it);
            break;
        }
        ++j_it;
        ++r_it;
    }
}

void UpdatePlayer(vector<int> &jerseys, vector<int> &ratings)
{
    int j_num, r_num;

    cout << "Enter a jersey number:\n";
    cin >> j_num;

    cout << "Enter a new rating for player:\n";
    cin >> r_num;

    auto j_it = jerseys.begin();
    auto r_it = ratings.begin();
    auto end = jerseys.end();
    while (j_it != end)
    {
        if (*j_it == j_num)
        {
            *r_it = r_num;
            break;
        }
        ++j_it;
        ++r_it;
    }
}

void PrintMenu(vector<int> &jerseys, vector<int> &ratings)
{
    char option;
    do
    {
        option = PrintMenuItems();
        switch (option)
        {
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
    } while (option != 'q');
}