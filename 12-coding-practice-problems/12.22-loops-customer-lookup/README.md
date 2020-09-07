# 12.22 PRACTICE: Loops**: Customer lookup
![Difficult]

A customer database file named `CustomerDb.txt` contains a list of customers (one per line),
each customer consisting of a unique customer id followed by a first and last name.
Given an `id`, output the customer's first and last name.
If the `id` is not found, output `Not found`.
If the input `id` is `27`, the output might be `Sarah Lee` (if found).

## `CustomerDb.txt`
```
42 Mike Jones
16 Al Garcia
27 Sarah Lee
12 Stan Lee
99 Amy Hernandez
```

## Hints
* The template code has functions for opening and closing the customer database file.
You need not understand those functions.
Just know that `customerDb` can be read just like `cin`.
So `customerDb >> x` gets the next value from the file into variable `x`,
just like `cin >> x`.
You might also note that the expression evaluates to `0` when the end of file is reached, so the while loop will exit.
* In the while loop, you'll want to skip the first and last names for that `id`, since that line's `id` didn't match the `id` to find.
* After the while loop, check if the `id` was found (you can compare `idToFind` with `dbId` to detect this).
If so, read the first and last name, and print them. Else, print `Not found`.

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow