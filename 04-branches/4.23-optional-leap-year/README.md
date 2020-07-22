# 4.23 LAB: Leap Year
A year in the modern Gregorian Calendar consists of 365 days.
In reality, the earth takes longer to rotate around the sun.
To account for the difference in time, every 4 years, a leap year takes place.
A leap year is when a year has 366 days: An extra day, February 29th.
The requirements for a given year to be a leap year are:

1. The year must be divisible by 4
2. If the year is a century year (1700, 1800, etc.), the year must be evenly divisible by 400

Some example leap years are 1600, 1712, and 2016.

Write a program that takes in a year and determines whether that year is a leap year.

Ex: If the input is:
```
1712
```
the output is:
```
1712 - leap year
```
Ex: If the input is:
```
1913
```
the output is:
```
1913 - not a leap year
```

## Hint
To determine if a year is a _century year_ modulo it by `100`.
```
1700 % 100 = 0
```

Determine if it's divisible by `400` use `%` (you know how to do it).

## List of Leap Years
```
1804
1808
1812
1816
1820
1824
1824
1832
1836
1840
1844
1848
1852
1856
1860
1864
1868
1872
1876
1880
1884
1888
1892
1896
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
2024
2028
2032
2036
2040
2044
2048
2052
2056
2060
2064
2068
2072
2076
2080
2084
2088
2092
2096
```