# 7.31 LAB: Remove max and min numbers
Write a program that reads in a file containing lists of numbers and
remove the max and min values in those lists.

## Function Prototypes
```cpp
string OutputLine(const string&);
vector<int> StringToVector(const string&);
void RemoveMinMax(vector<int>&);
void NoMaxMin(const string&);
```

## Part 1: `OutputLine`
For this portion, this function will output this:
```
                      12 13 14 ->
```
Simply take in the string parameter and _return_ that string.
There should not be any `cout` in this function.

To achieve this, you need to print the string to a `stringstream`.

### Example
If you want to format and print a string but not to the screen you would
"print" it to a `stringstream` and return it by calling `str()`:
```cpp
string Rating(int score) {
    stringstream stars; // declare a stream (your new cout)
    // acts just like cout
    stars << setw(score) << setfill(symbol) << "";
    return stars.str(); // return .str(), stars is the object
}
```
See [ex-rating-stringstream.cpp] on how to use it.

Input (`string`) | Output (`string`)
--- | ----
`"12 13 14"` | `             12 13 14`

### Note
You will need to modify this later, this is not finished.

## Part 2: `StringToVector`
This function takes in a `string` and add the elements to a `vector`
using `push_back()`.
You know how to split the string up into parts but the easiest is to use,
again, `stringstream`.

### Example
This code takes a string and reads it until nothing is left on the string:
```cpp
stringstream ss("12 13 14");
int num;
while (ss >> num) {
    cout << num << " ";
}
cout << endl;
```
This function pushes the numbers to a `vector` and returns that vector.

Input (`string`) | Output (`vector<int>`)
--- | ----
`"12 13 14"` | `{ 12, 13, 14 }`

### Warning
There should not be any `cout`s in this function.

## Part 3: `RemoveMinMax`
This function takes a `vector` and removes the min and max from the list.
It does not return because it will modify the vector itself.

### Example
There's a simple function that you can use to find the largest element in a `vector`.
This function returns an iterator (not the value).
```cpp
// you could also use:
// auto max = max_element(v.begin(), v.end());
vector<int>::iterator max = max_element(v.begin(), v.end());
cout << "max value is " << *max << endl;
v.erase(max); // deleting it
```
Note that we use `*max` to get the value.
Erase takes an _iterator_ not a _value_.

### Hint
* Guess how you find the smallest value in the vector?
* Implementation of this function requires only 2 lines of code.
4 if you're verbose.

## Part 4: Modify `OutputLine`
Now that you have finished implemented parts 2 and 3, you can use those functions
in `OutputLine` to return the right side of the arrow:
```
                      12 13 14 -> 13
```
* The left side of the arrow you already have.
* The right side of the arrow requires you to convert the input `string`
to a `vector<int>` by using `StringToVector`.
* Once you have the `vector`, you can pass that to `RemoveMinMax`.
This function does not return anything, it simply removes the values.

Now write a loop to go through what's left in the `vector` and
add the rest to your `stringstream`.
Return the `str()` of the `stringstream` as you would normally.

## Part 5: `NoMaxMin`
Reads a file line by line, calls `OutputLine` to get the output below:

### Output
```
             10 20 30 40 50 60 -> 20 30 40 50
          1 -5 21 3 -2 40 1000 -> 1 21 3 -2 40
               3 22 28 -5 20 0 -> 3 22 20 0
                       21 44 2 -> 21
                           2 2 ->
                       5 5 5 1 -> 5 5
                    4 83 2 0 4 -> 4 2 4
                           1 0 ->
```

[ex-rating-stringstream.cpp]: ../../07-functions/7.31-max-and-min-numbers/ex-rating-stringstream.cpp