Reversing a vector is a common task. One approach copies to a second vector in reverse, then copies the second vector back to the first. However, to save space, reversing a vector without using a second vector is sometimes preferable. Write a function that reverses a given vector, without using a second vector. If the original vector's values are 2 5 9 7, the vector after reversing is 7 9 5 2.

Hints:
* Use this approach: Swap the first and last elements, then swap the second and second-to-last elements, etc.
* Stop when you reach the middle; else, you'll reverse the vector twice, ending with the original order.
* Think about the case when the number of elements is even, and when odd. Make sure your code handles both cases.