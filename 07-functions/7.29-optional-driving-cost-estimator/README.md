# 7.29 PRACTICE: Functions**: Driving cost estimator
Driving is expensive.

## Part 1: `CostForMilesGas`
Write a function `CostForMilesGas` that takes miles driven and returns the cents,
assuming `30` miles/gallon and a per gallon price of `$4`.

## Part 2: `CostForMilesMaintenance`
Write a similar function `CostForMilesMaintenance` that assumes tires last
`20,000` miles and cost `$500`,
and that assumes `$300` of service every `10,000` miles.

## Part 3: `CostForMiles`
Finally, write a function `CostForMiles` that takes miles driven,
and calls those two functions, returning total cents.

Use constants in the functions as appropriate, like `MILES_PER_GAL`,
not hardcoded values in the function's statements.
Use only integer arithmetic throughout.

## Input/Output
Input | Output
--- | ---
`50` | `941`
`202` | `3804`

## Constants
Constant | Value
--- | ---
`MILES_PER_GAL` | `30`
`CENTS_PER_GAL` | `400`
`TIRES_MILES` | `20000`
`TIRES_CENTS` | `50000`
`SERVICE_MILES` | `10000`
`SERVICE_CENTS` | `30000`

## Part 4: Read `input.txt`
Write a function `VehicleCostRecord()` to read in the `input.txt`
and output the cost for the milages listed there as followed:

```
    Miles           Cost
       50 _________ 941 ¢
       21 _________ 395 ¢
       33 _________ 621 ¢
      202 _________ 3804 ¢
        2 _________ 37 ¢
       99 _________ 1864 ¢
        4 _________ 75 ¢
```

To print out the cent symbol `¢`, use: `cout << "\u00A2"`.

## Function Prototypes
It is up to you to declare and call the functions accordingly.
```cpp
<type> CostForMilesGas(<type>);
<type> CostForMilesMaintenance(<type>);
<type> CostForMiles(<type>);
<type> VehicleCostRecord(<type>);
```

## Warning
Do not `cin` or `cout` inside any functions!

## Hints
* Because you are only using integer arithmetic, do any divisions as late as possible, to reduce the impact of integer division ignoring fractions
* For gas, use an equation like this: `centsGas = (milesDriven * CENTS_PER_GAL) / MILES_PER_GAL;`
* For service, use an equation that starts like this: `centsMaintenance = ((milesDriven * TIRES_CENTS) / TIRES_MILES) + …`
(Finish by adding a similar expression for service.