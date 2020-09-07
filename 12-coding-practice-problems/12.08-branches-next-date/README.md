# 12.8 PRACTICE: Branches**: Next date
![Difficult]

Many websites let users make reservations (hotel, car, flights, etc.).
When a user selects a date, the next day is often automatically selected
(for hotel checkout, car return, flight return, etc.).
Given a date in the form of three integers, output the next date.
If the input is `1 15 2017`, the output should be `1 16 2017`.
If the input is `8 31 2017`, the output should be `9 1 2017`. Ignore leap years.

## Hints
* Group the months based on number of days. Then create an `if-else` statement for each case.
* Note that `12` (December) is a special case; after the last day, the next month is `1` (January) and is the next year.

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow