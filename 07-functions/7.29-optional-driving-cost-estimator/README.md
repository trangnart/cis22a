# 7.29 PRACTICE: Functions**: Driving cost estimator
Driving is expensive. Write a function CostForMilesGas that takes miles driven and returns the cents, assuming 30 miles per gallon and a per gallon price of $4. Write a similar function CostForMilesMaintenance that assumes tires last 20,000 miles and cost $500, and that assumes $300 of service every 10,000 miles. Finally, write a function CostForMiles that takes miles driven, and calls those two functions, returning total cents. Use constants in the functions as appropriate, like MILES_PER_GAL, not hardcoded values in the function's statements. Use only integer arithmetic throughout. If the input is 50, the output should be: 941 cents

Hints:

* Because you are only using integer arithmetic, do any divisions as late as possible, to reduce the impact of integer division ignoring fractions

* For gas, use an equation like this: centsGas = (milesDriven * CENTS_PER_GAL) / MILES_PER_GAL;

* For service, use an equation that starts like this: centsMaintenance = ((milesDriven * TIRES_CENTS) / TIRES_MILES) + … (Finish by adding a similar expression for service.