# 10.19 LAB: Contact list
A contact list is a place where you can store a specific contact with other associated information such as a phone number, email address, birthday, etc.

Write a program that first takes a line of name/number pairs.
Word pairs consist of a name and a phone number (both strings).

That list is followed by a name,
and your program should output the phone number associated with that name.

## Input
```
Joe 123-5432 Linda 983-4123 Frank 867-5309
Frank
```

## Output
```
867-5309
```

## Prototypes
```cpp
void GetNameNumberVectors(const string& line,
                          vector<string>& name,
                          vector<string>& number);
string GetPhoneNumber(const vector<string>& nameVec,
                      const vector<string>& phoneNumberVec,
                      const string& contactName);
```
`GetNameNumberVectors()` function takes a line and add the name portion
to name `vector`, and number portion to number `vector`.
This function does not return, it modifies the vectors.

_Hint_: use `stringstream` and a `count` to figure out odd/even using `%`.

The return value of `GetPhoneNumber` is the phone number associated with
the specific contact name.