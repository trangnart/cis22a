# 12.42 PRACTICE: Functions***: Electric bill
Southern California's electric company uses a "three tier" cost structure for household electric bills. As of Jan 2017, for a given month, the first 232 kWh is $0.08291, the next 696 kWh is $0.16838, and any additional kWh is $0.23336. Write a function that takes a household month's kWh, and the cutoffs and prices for the tiers, and returns that month's electric cost. If the input is 1700.0 232 0.08291 696 0.16838 0.23336, the output is $428.289 (output a $ before the result).

Hints:
* Think carefully through the logic of calculating the various cost contributions of each tier. We recommend calculating tier 3 first, then tier 2.
* Declare a variable named remainingKWh. Initialize it with the monthKWh. Also declare monthCost, initialized with 0.0.
* Start with an if statement if remainingKWh > tier2Cutoff. If yes, compute just the kWh that are part of tier 3, which is remainingKWh - tier2Cutoff. Multiply that amount by tier3Cost, and add that to the monthCost. Then decrease remainingKWh by tier2Cutoff.
* Repeat for tier2.
* For whatever is left in remainingKWh, multiply by tier1Cost.