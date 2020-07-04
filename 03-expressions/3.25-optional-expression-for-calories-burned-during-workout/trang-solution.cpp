#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int age, weight, heart_rate, time;
    double men_calories, women_calories;

    cin >> age >> weight >> heart_rate >> time;

    women_calories = ( (age * 0.074) - (weight * 0.05741) + (heart_rate * 0.4472) - 20.4022 ) * time / 4.184;
    men_calories = ( (age * 0.2017) + (weight * 0.09036) + (heart_rate * 0.6309) - 55.0969 ) * time / 4.184;

    cout << fixed << setprecision(2);
    cout << "Women: " << women_calories << " calories" << endl;
    cout << "Men: " << men_calories << " calories" << endl;

   return 0;
}
