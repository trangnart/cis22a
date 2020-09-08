# 12.5 PRACTICE: Branches**: Caption punctuation
![Difficult]

A user is asked to type a caption for a photo in a web form's text field.
If the caption didn't end with a punctuation mark (`. ! ?`),
a period should automatically be added.
A common error is to end with a comma,
which should be replaced by a period.
Another common error is to end with two periods,
which should be changed to one period (however, ending with three periods (or more) indicates ellipses so should be kept as is).
The corrected caption is output.

## Input/Output
Input | Output
--- | ---
`"I like pie"` | `"I like pie."`
`"I like pie!"` | `"I like pie!"`
`"Coming soon…"` | `"Coming soon…"`

## Hints
* Start by checking for `!` or `?` which don't require any action.
* Then check for `,` which requires the simple action of replacing by a period.
* Then check for two ending periods
(making sure the caption is at least 2 characters long).
If found, check for three ending periods (making sure caption is at least 3 characters long), in which case no action required. Otherwise, remove the last period.
* Use `pop_back()` to remove the last period.

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow