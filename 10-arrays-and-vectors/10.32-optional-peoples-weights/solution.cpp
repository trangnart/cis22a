#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

void OutputStats(vector<double>& weights);
void ReadWeights(const string& filename, vector<double>& weights);

int main() {
    const string FILENAME = "input.txt";
    vector<double> weights;

    ReadWeights(FILENAME, weights);
    OutputStats(weights);

    return 0;
}

void OutputStats(vector<double>& weights) {
    double total = 0,
           average,
           max = 0;
    for (auto w : weights) {
        total += w;
        if (w > max) {
            max = w;
        }
    }
    average = total / weights.size();

    cout << fixed << setprecision(2);
    cout << "Total weight: " << total << endl
         << "Average weight: " << average << endl
         << "Max weight: " << max << endl;
}

void ReadWeights(const string& filename, vector<double>& weights) {
    ifstream inFS(filename);
    if (inFS.is_open()) {
        double weight;
        while (!inFS.eof()) {
            inFS >> weight;
            if (!inFS.fail()) {
                weights.push_back(weight);
            }
        }
        inFS.close();
    }
}