# 12.8 PRACTICE: Branches**: Next date
![Difficult]

Many websites let users make reservations (hotel, car, flights, etc.).
When a user selects a date, the next day is often automatically selected
(for hotel checkout, car return, flight return, etc.).
Given a date in the form of three integers, output the next date.

## Input/Output
Input | Output
--- | ---
`1 15 2017` | `1 16 2017`
`8 31 2017` | `9 1 2017`

Ignore leap years.

## Hints
* Group the months based on number of days.
Then create an `if-else` statement for each case.
* Note that `12` (December) is a special case;
after the last day, the next month is `1` (January) and is the next year.

---
## Simpler Solution
![Easy]

This is an advanced topic but if you try to understand this,
this will be much easier to do than the above.

### Time represented in seconds
In C++ (and most languages) time (`time_t`) is represented by number of seconds
since `January 1, 1970`.
It means that in `1/1/1970`, `time_t` is `0`.
Today's `time_t` is number of seconds since that time represented by `time(0)`.

For example:
```cpp
cout << time(0); // 1599543908
```

This number represents _now_.

### Getting `time_t` for a specific date
When doing calculation with time, it's best to convert everything into `time_t`
so that you can do simple arithmetic to get what you need.

For example, if you want to know what is _tomorrow's_ `time_t`, you would
**add** today's `time_t` to `24 * 60 * 60` (which is `86400`).
```cpp
time_t now = time(0); // 1599543908
time_t tomorrow = now + (24 * 60 * 60);
```
What if you want the `time_t` for a specific date like `December 31, 2020`?
```cpp
time_t now = time(0); // first get today's date (you want the time populated)
struct tm * timeinfo = localtime( &now ); // the time structure (note the &)

// now that you have timeinfo, you can change the date
timeinfo->tm_mon = 12 - 1; // note it's indexed so starting from 0 instead
timeinfo->tm_mday = 31; // normal assignment;
timeinfo->tm_year = 2020 - 1900; // it's last century (this is important!)

// now that you have the new timeinfo, make the new time_t
time_t newyear_eve = mktime(timeinfo);
```
Now that you have the `time_t` (seconds) for the last day of 2020,
you can find out what's next year's date will be.

### New Year
Using the algorithm above, simply add `86400` to your `newyear_eve`
and you'll have the `time_t` for the new year:
```cpp
time_t new_year = newyear_eve + 86400;
```

How to convert it back to the time structure? Easy:
```cpp
struct tm * timeinfo = localtime( &new_year ); // note the &
cout << timeinfo->tm_mon + 1 << " " // remember the -1? add one now
     << timeinfo->tm_mday << " " // no change just the date
     << timeinfo->tm_year + 1900 // yup, add 1900 to it please
     << endl;
```

I just gave you the solution to this problem.

[Easy]: https://flat.badgen.net/badge/Easy/★☆☆☆/green
[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow