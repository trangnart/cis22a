#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  const double MEN_AGE = 0.2017;
  const double MEN_WEIGHT = 0.09036;
  const double MEN_HR = 0.6309;
  const double MEN_HR_OFFSET = 55.0969;
  const double TIME_DENOMINATOR = 4.184;

  const double WOMEN_AGE = 0.074;
  const double WOMEN_WEIGHT = 0.05741;
  const double WOMEN_HR = 0.4472;
  const double WOMEN_HR_OFFSET = 20.4022;
  
  double Age;
  double Weight;
  double Heart_Rate;
  double Time;

  cin >> Age
      >> Weight
      >> Heart_Rate
      >> Time;

  cout << fixed << setprecision(2);
  cout << "Women: " 
       << ( (Age * WOMEN_AGE) -
            (Weight * WOMEN_WEIGHT) +
            (Heart_Rate * WOMEN_HR) - WOMEN_HR_OFFSET
          ) * (Time / TIME_DENOMINATOR)
       << " calories" << endl;

  cout << "Men: " 
       << (( Age * MEN_AGE) + 
           (Weight * MEN_WEIGHT) +  
           (Heart_Rate * MEN_HR) - MEN_HR_OFFSET
          ) * (Time / TIME_DENOMINATOR) 
       << " calories" << endl;

   return 0;
}
