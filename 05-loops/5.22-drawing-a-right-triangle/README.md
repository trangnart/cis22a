# 5.22 LAB: Warm up: Drawing a right triangle
This program will output a right triangle based on user specified height
`triangleHeight` and symbol `triangleChar`.

## Fixed-height & `triangleChar`
The given program outputs a fixed-height triangle using a `*` character.
Modify the given program to output a right triangle that instead uses the
user-specified `triangleChar` character.

## Variable-height & nested loop
Modify the program to use a nested loop to output a right triangle of
height `triangleHeight`.
The first line will have one user-specified character, such as `%` or `*`.
Each subsequent line will have one additional user-specified character
until the number in the triangle's base reaches `triangleHeight`.
Output a space after each user-specified character,
including after the line's last user-specified character.

## Example
Example output for `triangleChar` = `%` and `triangleHeight` = `5`:

```
Enter a character:
%
Enter triangle height:
5

%
% %
% % %
% % % %
% % % % %
```