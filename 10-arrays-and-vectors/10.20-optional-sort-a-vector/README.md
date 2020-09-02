# 10.20 LAB: Sort a vector
Write a program that gets a list of integers from input,
and outputs the integers in ascending order (lowest to highest).
The first integer indicates how many numbers are in the list.
Assume that the list will always contain less than 20 integers.

## Input
```
5 10 4 39 12 2
```

## Output
```
2 4 10 12 39
```

## Prototype
```cpp
void SortVector(vector<int>& myVec);
```
Your program must define and call the following function.
When the `SortVector` function is complete,
the vector passed in as the parameter should be sorted.

## Hints
There are many ways to sort a vector.
You are welcome to look up and use any existing algorithm.
Some believe the simplest to code is bubble sort: https://en.wikipedia.org/wiki/Bubble_sort.
But you are welcome to try others: https://en.wikipedia.org/wiki/Sorting_algorithm.

You may use `sort()` from the `<algorithm>` include file.
Check the previous labs on how to use the `sort()` function.
This will save you a lot of time.

Use the `PopulateVector()` from previous lab to get your list of input.

### Convert Vector to String
Sometimes, you want to convert a `vector` to a `string` quickly,
here's how to do it:
```cpp
string Vector2String(const vector<int>& vec, const char* delim) {
    stringstream oss;
    copy(vec.begin(), vec.end(), ostream_iterator<int>(oss, delim));
    return oss.str();
}
```
So you can do this: `cout << Vector2String(number) << endl;`
Save this function so you can use it in the future.