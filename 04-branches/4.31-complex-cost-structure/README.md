# 4.31 PRACTICE: Branches**: Complex cost structure
An airline describes airfare as follows.
A normal ticket's base cost is `$300`.
Persons aged `60` or over have a base cost of `$290`.
Children `2` or under have `$0` base cost.
A carry-on bag costs `$10`.
A first checked bag is free, second is `$25`, and each additional is `$50`.
Given inputs of age, carry-on (0 or 1),
and checked bags (0 or greater),
compute the total airfare.

## Examples
### Input
```
65 0 2
```

### Output
* `65` base cost is `$290` (`290`)
* `0` carry-on (`290 + 0 = 290`)
* `2` checked bags (`290 + 0 + 25 = 315`)
```
315
```

### Input
```
2 1 3
```

### Output
`0 + 10 + 0 + 25 + 50`
```
85
```

### Input
```
19 1 0
```

### Output
```
310
```

## Hints
* First use an if-else statements to assign `airFare` with the base cost.
* Use another if statement to update `airFare` for a `carryOn`.
* Finally, use another if-else statement to update `airFare` for checked bags.

Think carefully about what expression correctly calculates checked bag cost when bags are 3 or more.