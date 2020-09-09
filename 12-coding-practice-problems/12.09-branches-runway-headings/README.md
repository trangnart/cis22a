# 12.9 PRACTICE: Branches**: Runway headings
![Difficult]

Airport runways are numbered using a 2-digit number, like `09`.
The meaning generally is that planes taking off or landing on that runway
will be facing `090` or `90` degrees rotated _right_ from _north_,
namely facing _east_.

Given a runway number (integer),
output the degrees followed by the closest direction indication:
* `north`
* `northeast`
* `east`
* `southeast`
* `south`
* `southwest`
* `west`
* `northwest`

## Input/Output
Input | Output
--- | ---
`03` | `30 degrees (northeast)`
`06` | `60 degrees (northeast)`
`07` | `70 degrees (east)`
`12` | `120 degrees (southeast)`
`17` | `170 degrees (south)`
`22` | `220 degrees (southwest)`
`30` | `300 degrees (northwest)`
`34` | `340 degrees (north)`
`40` | `400 degrees (northeast)` (just kidding)

## Hints
* First just read the input number, multiply by `10` to yield `runwayDeg`.
* Next, create an `if-else` statement to compare `runwayDeg`'s value with ranges for each direction.
For `north`, the value should be within `-22.5` and `+22.5`.
For `northeast`, the value should be between `45 - 22.5` and `45 + 22.5`.
And so on.
* Based on the range in which the value falls,
update a string variable with the direction.
Then after the `if-else`, have a single output statement that outputs
`270 degrees (north)` or whatever value and direction are correct.
* Don't forget that ranges use `&&`.
An expression detecting a value `x` is between `1` and `10` is `(x > 1) && (x < 10)`.
* Because the input is an integer which is multiplied by `10` to yield `runwayDeg`,
the comparisons with floating-point values like `22.5` will never result in equality.
Hence, the ranges don't have to account for such quality.

## Chart
![Wind Direction](https://cdn.windfinder.com/prod/images/assets_png/wind_directions.87be5a1e.png)

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow