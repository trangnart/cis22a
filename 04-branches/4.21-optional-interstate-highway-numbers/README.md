# 4.21 LAB: Interstate highway numbers
Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90.

Given a highway number, indicate whether it is a primary or auxiliary highway. If auxiliary, indicate what primary highway it serves. Also indicate if the (primary) highway runs north/south or east/west.

Ex: If the input is:
```
90
```
the output is:
```
I-90 is primary, going east/west.
```
Ex: If the input is:
```
290
```
the output is:
```
I-290 is auxiliary, serving I-90, going east/west.
```
Ex: If the input is:
```
0
```
the output is:
```
0 is not a valid interstate highway number. 
```