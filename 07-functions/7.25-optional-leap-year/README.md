# 7.25 LAB: Leap year - functions
This is a lab from a previous chapter [4.23]
that now requires the use of functions, streams and vector.

## Parts
### Part 1: Implement `IsLeapYear()` Function
Convert [4.23] lab to a function and only return a `bool` instead of `cout`.

This part of the lab you can hard-code the years so you can check quickly if
the function is correct.
```cpp
cout << IsLeapYear(2020) << endl;
```

### Part 2: Read `input.txt` File
Implement `ReadYears()` function to read in the `input.txt` file and return
the `vector<int>` that has all the years.

The `main()` already given you the `cout` facility to check if your program
is working correctly.

### Part 3: Remove Non-Leap Years from the Vector
Implement `RemoveNonLeapYears()` that will use `IsLeapYear()` function
and determine if you should remove the year.

#### `erase()`
You will need to use `erase()` to remove an element from a vector.
Here's an example how to use it.
```cpp
void RemoveOddYears(vector<int>& years) {
    vector<int>::iterator year = years.begin();
    do {
        if (*year % 2 == 1) {
            years.erase(year);
        } else {
            year++;
        }
    } while (year != years.end());
}
```
You're using an **iterator** (`year`)
to go through every element in the `vector`.
For example, you have a `vector`:
```cpp
vector<int> years = { 2018, 2019, 2020, 2021 };
```
`years.begin()` will return an _iterator_ `year` (not the element) pointing
to `2018`. To return a value you must add a `*` to make `*year` otherwise,
it will return an _iterator_ not a _value_.

Since `2018` is an even year, it will get into the `else` statement which
advances the iterator forward to year `2019`.

Function `erase(iterator)` requires an _iterator_ as an argument.
Because year `2019` is odd, calling:
```cpp
year.erase(year);
```
Removes the element from the vector `years` therefore, you don't need to
increment the iterator, that element is now gone.

The result when you print out the `vector`:
```
2018
2020
```

## Function Prototypes
```cpp
bool IsLeapYear(int userYear)
vector<int> ReadYears(const string& filename);
void RemoveNonLeapYears(vector<int>& years);
```

## Output
Your output must match this:
```
1904
1908
1912
1916
1920
1924
1928
1932
1936
1940
1944
1948
1952
1956
1960
1964
1968
1972
1976
1980
1984
1988
1992
1996
2000
2004
2008
2012
2016
2020
```

[4.23]: ../../04-branches/4.23-optional-leap-year/README.md