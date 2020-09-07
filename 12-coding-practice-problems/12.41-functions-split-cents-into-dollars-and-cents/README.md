# 12.41 PRACTICE: Function*: Split cents into dollars and cents
![Easy]

Money is a bit tricky to represent in programs.
One naturally wants to use floating-point like `7.52` to represent `7` dollars and `52` cents, but many programmers believe that money should be represented as ints because money is counted (versus being measured like temperature).

One approach is to do all money calculations using cents,
represented as an integer, like `752` cents.
A useful function in such an approach might convert cents into separate dollar and cents values.
Write a function `CentsToDollarsCents` whose first parameter is given cents, and whose second and third parameters (both references) are dollars and remaining cents.
If the first parameter is `752`, the second parameter becomes `7` and the third `52`.

[Easy]: https://flat.badgen.net/badge/Easy/★☆☆☆/green