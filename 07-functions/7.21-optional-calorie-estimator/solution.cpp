#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <map>

using namespace std;

const map<string, double> ACTIVITIES{
    {"sit", 1.4},
    {"walk", 5.4},
    {"run", 13.0},
    {"bike", 6.8},
    {"swim", 8.7}};

double ActivityCalories(string activity, int min);
void CalculateCaloriesUserInput();
void CalculateCaloriesFromFile(const string &filename);

int main()
{
    const string FILENAME = "input.txt";
    CalculateCaloriesFromFile(FILENAME);

    // CalculateCaloriesUserInput();

    return 0;
}

// Part 1 -- User input
void CalculateCaloriesUserInput()
{
    int userMinutes;
    string userActivity;

    // Part 1 -- user input
    cin >> userActivity;
    cin >> userMinutes;

    cout << fixed << setprecision(1);
    cout << ActivityCalories(userActivity, userMinutes) << endl;
}

void CalculateCaloriesFromFile(const string &filename)
{
    ifstream inFS(filename);
    int userMinutes;
    string userActivity;

    if (!inFS.is_open())
    {
        cout << "Cannot open " << filename << endl;
        return;
    }

    cout << fixed << setprecision(1);
    while (!inFS.eof())
    {
        inFS >> userActivity >> userMinutes;
        if (inFS.fail())
        {
            continue;
        }
        double calories = ActivityCalories(userActivity, userMinutes);
        cout << userActivity << " for "
             << userMinutes << " minutes burns "
             << calories << " calories\n";
    }
    inFS.close();
}

double ActivityCalories(string activity, int min)
{
    // try to find the activity in the map above
    auto search = ACTIVITIES.find(activity);

    // check if it couldn't find something
    if (search == ACTIVITIES.end())
    {
        return 0.0; // remember double
    }
    // remember to cast the minute to double
    return ACTIVITIES.at(activity) * static_cast<double>(min);
}
