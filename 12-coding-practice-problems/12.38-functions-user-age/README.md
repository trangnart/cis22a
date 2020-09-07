# 12.38 PRACTICE: Functions**: User age
![Difficult]

Various websites like Wikipedia or IMDB list not just a person's birthdate but also the person's current age. Given a person's birthdate and current date, output the person's age in years. The custom is to round down.

## Input/Output
Input | Output
--- | ---
`7 1 2000 2 15 2015` | `14`

(because the person hasn't yet reached their 15th birthday).
A person less than `1` has age `0`.

## Hints
* Start by computing `currAge` just as the difference in years. Then, use an if-else statement to determine whether to decrement `currAge`.
* One reason to decrement is if the current month is less than the birth month (no birthday yet this year).
* Another reason to decrement is if the current month equals the birth month, but the current day is less than the birth day.

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow