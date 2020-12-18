# 12.28 PRACTICE: Vectors*: Outputting multiple elements per line
![Easy]

12 values have been input into vector `yearlyValues`.
Output all 12 elements, with 4 per line.

## Input
```
10 20 30 40 50 60 70 80 90 100 110 120
```

## Output
```
10 20 30 40
50 60 70 80
90 100 110 120
```

## Hints
* Use a for loop with increment `i += 4`, rather than `++i`.
* Inside the for loop, just print all four elements using four `cout` statements.
An inner loop could be used, but isn't necessary.

---
# Challenge
Same problem, different input and output.
Let's say you're given an indeterminate set of numbers.
Output the outcome by `4` columns:

## Input
```
10 20 30 40 50 60 70 80 90 100 110 -1
```

### Output
```
 10  20  30  40
 50  60  70  80
 90 100 110
 ```

 ### Program
 ```cpp
int main() {
    vector<int> array;
    int num;

    cout << "Enter a list of number (-1 to end): ";

    while (cin >> num && num != -1)
        // fill line this out

    for (int i=1; i<=array.size(); i++) {
        // this could be done with 1 statement
        // hint: use modulo to complete this program
    }

    return 0;
}
```


[Easy]: https://flat.badgen.net/badge/Easy/★☆☆☆/green