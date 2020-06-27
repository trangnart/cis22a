# 7.19 PRACTICE: Functions**: Sort three values
Write a function Ascend3 with three integer reference parameters, that sorts the values into ascending order. Ex: If x = 5, y = 2, and z = 7, after the call Ascend3(x, y, z), the new values will be x = 2, y = 5, and z = 7.

Hints:

* Don't forget to declare Ascend3's parameters as pass-by-reference (using &). Otherwise, the function won't be able to change the values of the passed arguments. Also, return type should be void.

* One approach puts the three values into a vector, then sorts the vector. We won't be describing that approach here. Instead, we'll use branches.

* One solution approach realizes that only 6 possible orderings of xyz exist: xyz, xzy, yxz, yzx, zxy, zyx. An if-else an be used to detect which order x, y, z are initially in.

* Once detected, three variables lowVal, midVal, and highVal can be assigned. Note: Don't assign the parameters right away, because you'll overwrite a value that is still needed.

* After the if-else, those lowVal, midVal, and highVal variables are ready. So just set the x parameter with lowVal, y with midVal, and z with highVal.

* Be aware that two values could be equal. So use <= rather than < in your comparisons.