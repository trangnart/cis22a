#include <iostream>
using namespace std;

double CalculateMonthElectricCost(double monthKWh, double tier1Cutoff, double tier1Cost,
                                  double tier2Cutoff, double tier2Cost, double tier3Cost) {
   double remainingKWh;
   double monthCost = 0.0;

   // monthKWh can be considered as having 3 parts on a numberline: 1111122222222223333
   // (The number of 1's, 2's, and 3's above is arbitrary, for illustrative purposes only).
   // The first branch below multiplies part 3 by tier3Cost
   // The second branch multiplies part 2 by tier2Cost
   // Finally, part 1 is muliplied by tier1Cost

   remainingKWh = monthKWh;

   if (remainingKWh > tier2Cutoff) { // Calculate the tier 3 amount
      monthCost += (remainingKWh - tier2Cutoff) * tier3Cost; // The difference is the 3333 part above
      remainingKWh -= tier2Cutoff; // This gets rid of the 3333 part, leaving the 11111222222222 part
   }

   if (remainingKWh > tier1Cutoff) { // Calculate the tier 2 amount
      monthCost += (remainingKWh - tier1Cutoff) * tier2Cost; // The difference is the 2222222222 part
      remainingKWh -= tier1Cutoff; // This gets rid of the 2222222222 part
   }

   monthCost += remainingKWh * tier1Cost; // The difference is the 11111 part above

   return monthCost;
}


int main() {
   double monthKWh;
   double tier1Cutoff, tier2Cutoff; // In kWh
   double tier1Cost, tier2Cost, tier3Cost; // In $ per kWh
   double monthCost;

   cin >> monthKWh;
   cin >> tier1Cutoff;
   cin >> tier1Cost;
   cin >> tier2Cutoff;
   cin >> tier2Cost;
   cin >> tier3Cost;

   monthCost = CalculateMonthElectricCost(monthKWh, tier1Cutoff, tier1Cost, tier2Cutoff, tier2Cost, tier3Cost);
   cout << "$" << monthCost << endl;

   return 0;
}

/* NOTES

* An alternative approach uses an if-elseif-else approach. The branches detect if monthKWh is <= the tier1Cutoff, or
is between tier1 and tier2 cutoffs, or is greater than the tier2cutoff. Each branch then has a unique expression to
calculate the cost. We prefer the above approach, since it has just one calculation for each tier's cost.

* The logic requires some getting used to. Each branch is just calculating that tier's contribution. Once that tier
is included in the cost, the kWh for that tier are thrown away from remainingKWh, leaving just the amount of kWh
in the lower tiers. Note that if the original kWh are less than tier2Cutoff, then the tier 3 branch won't execute.
Likewise for the tier 2 branch.

* One should manually trace this code for values that include each tier, to make sure the logic is correct.
Ex: For a small kWh, the first if branch won't execute, nor will the second. Only monthCost += remainingKWh * tier1Cost
will execute.

*/