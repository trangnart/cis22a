# 5.24 PRACTICE: Loops* - Biggest difference
Write a program that outputs the biggest difference (absolute value)
between any successive pair of numbers in a list.
Such a list might represent daily stock market prices or daily temperatures,
so the difference represents the biggest single-day change.
The input is the list size, followed by the numbers.

## Example
If the input is `5 60 63 68 61 59`, the output is `7`.

## Hints
Declare a variable for the current number,
and another for the previous number.
At the start of each loop iteration, set `prevNum = currNum`,
then get the next number into `currNum`.

* Maintain a max difference variable.
* Initialize it with 0.
In each loop iteration, check if the difference between
`currNum` and `prevNum` exceeds `maxDiff`;
* if so, update `maxDiff` with that difference.
* Don't forget to take the absolute value of the difference before the above comparison.

Don't try to check the max difference for the first number in the list,
since no previous number exists.

## New Function

### `abs()`
```
int abs(int x);
long abs(long x);
long long abs(long long x);
```

#### Example
```cpp
int x = -10231;
cout << "Absolute value of " x << " is " << abs(x) << endl;
```