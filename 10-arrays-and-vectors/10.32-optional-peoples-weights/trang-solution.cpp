#include <iostream>
#include <iomanip> 
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

void ReadFile(const string &filename, vector<double> &weights);
void Calculation(vector<double> &weights);

int main()
{
    vector<double> weights;
    const string FILENAME = "input.txt";

    ReadFile(FILENAME, weights);
    Calculation(weights);

    return 0;
}

void ReadFile(const string &filename, vector<double> &weights)
{
    double num;
    ifstream inFS(filename);

    if (inFS.is_open())
    {
        while (!inFS.eof())
        {
            inFS >> num;

            if (!inFS.fail())
            {
                weights.push_back(num);
            }
        }
    }
    inFS.close();
}

void Calculation(vector<double> &weights)
{
    double sum = 0.0, count = 0.0;

    for (size_t i = 0; i < weights.size(); ++i)
    {
        sum = weights[i] + sum;
        count++;
    }
    auto max = max_element(weights.begin(), weights.end());
    cout << fixed << setprecision(2);

    cout << "Total weight: " << sum << endl;
    cout << "Average weight: " << sum / count << endl;
    cout << "Max weight: " << *max << endl;
}