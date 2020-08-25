# 7.28 LAB: Driving cost - functions
Write a function `DrivingCost()` with input parameters `miles`,
`mpg`, and `gasPrice`, that returns the dollar cost to drive those miles.
All items are of type `double`.

## Part 1 `DrivingCost()` Function
Define that function in a program whose inputs are the car's miles/gallon
and the gas dollars/gallon (both `doubles`).

Output each floating-point value with _two digits_ after the decimal point.

### Input/Output
Input | Output
--- | ---
`50 20.0 3.1599` | `7.90`

## Part 2: Read `input.txt`
Read in the file `input.txt` and output results to match the below.
Write a function `DrivingRecord()` to calculate all the costs in the file.

### Output
```
    Miles      MPG    Price     Cost
    20.30    15.00     3.50     4.74
    30.00    12.00     2.11     5.27
    32.00    16.00     4.21     8.42
   700.00    20.00     3.33   116.55
   201.00     9.00     7.49   167.28
    44.00    45.00     3.22     3.15
```

## Challenge
Challenge yourself to learn something new.
Can you produce this output?
```
    Miles      MPG    Price     Cost
    20.30    15.00    $3.50    $4.74
    30.00    12.00    $2.11    $5.27
    32.00    16.00    $4.21    $8.42
   700.00    20.00    $3.33  $116.55
   201.00     9.00    $7.49  $167.28
    44.00    45.00    $3.22    $3.15
```
### Hints
It looks simple but it isn't.
You need to use a `stringstream` from `#include <sstream>`.
If you have a `double cost = 4.7` to `cout` something like
`$4.70` you would do this:
```cpp
cout << fixed << setprecision(2);
cout << '$' << cost;
```

Now if you don't need to print the `$` you would do something like:
```cpp
cout << fixed << setprecision(2);
cout << setw(9) << cost;
```

This will output:
```
    4.70
```

But what if you want to `cout` this instead:
```
   $4.70
```
It's more complicated than it looks.
Here's how to do it:
```cpp
stringstream price; // price behaves just like cout
price << fixed << setprecision(2);
price << '$' << cost; // now price.str() is "$4.70"

// prints "   $4.70"
cout << setw(9) << price.str();

// saves it to a stream called "dollar"
stringstream dollar;
dollar << setw(9) << price.str(); // now dollar.str() is "   $4.70"
cout << dollar.str();
```

## Function Prototypes
```cpp
double DrivingCost(double miles, double mpg, double gasPrice);
void DrivingRecord(const string& filename);
```

### Note
This is a lab from [3.24] that now requires the use of functions and vector.

[3.24]: ../../03-expressions/3.24-optional-driving-costs/README.md