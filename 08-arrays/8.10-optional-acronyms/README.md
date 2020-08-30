# 8.10 LAB: Acronyms
An acronym is a word formed from the initial letters of words in a set phrase.
Write a program whose input is a phrase and whose output is an acronym
of the input.
If a word begins with a lower case letter, don't include that letter in
the acronym.
Assume there will be at least one upper case letter in the input.

## Part 1: `CreateAcronym`
### Input
```
Institute of Electrical and Electronics Engineers
```

### Output
```
IEEE
```

## Part 2: `GetAcronymAndName`
You need to find the `" - "` and separate the `line` into 2 parts:
`acronym` and `name`.
This function teaches you how to store values into the variables
passed in by reference.

### `const string& line`
```
FBI - Federal Bureau of Investigation
```

### `string& acronym`
We're putting the acronym (`FBI`) into this variable pointed to by this reference.

### `string& name`
This is the name portion: `Federal Bureau of Investigation`

## Part 3: `ReadAcronyms`
Logistics of this function will be:
1. Read in the file
2. Print the header
3. Get a line from the file
4. Call `GetAcronymAndName()` to set `acronym` and `name` variables
5. Call `CreateAcronym()` with the `name` to get your translation
6. Compare your acronym with `acronym` determine you should use `=` or `!`
7. Output the formatted text as below

### File Output
```
                                         Name  Standard   Mine
                     Anti-lock Braking System       ABS = ABS
                   Attention Deficit Disorder       ADD = ADD
     Attention Deficit Hyperactivity Disorder      ADHD = ADHD
          Acquired Immune Deficiency Syndrome      AIDS = AIDS
                       Against Medical Advice       AMA = AMA
   Centers for Disease Control and Prevention       CDC ! CDCP
              Drug Abuse Resistance Education      DARE = DARE
                              Dead On Arrival       DOA = DOA
                                Date Of Birth       DOB = DOB
```

## Function Prototype
```cpp
string CreateAcronym(...);
void ReadAcronyms(...);
bool GetAcronymAndName(const string& line, string& acronym, string& name);
```

## Hint
Refer to the [ascii] table to make sure a letter is upper case.

### ASCII Table of Letters
Char | ASCII | Dec | Hex
--- | --- | --- | ---
`A` | 65 | 101 | 41
`B` | 66 | 102 | 42
`C` | 67 | 103 | 43
`D` | 68 | 104 | 44
`E` | 69 | 105 | 45
`F` | 70 | 106 | 46
`G` | 71 | 107 | 47
`H` | 72 | 110 | 48
`I` | 73 | 111 | 49
`J` | 74 | 112 | 4a
`K` | 75 | 113 | 4b
`L` | 76 | 114 | 4c
`M` | 77 | 115 | 4d
`N` | 78 | 116 | 4e
`O` | 79 | 117 | 4f
`P` | 80 | 120 | 50
`Q` | 81 | 121 | 51
`R` | 82 | 122 | 52
`S` | 83 | 123 | 53
`T` | 84 | 124 | 54
`U` | 85 | 125 | 55
`V` | 86 | 126 | 56
`W` | 87 | 127 | 57
`X` | 88 | 130 | 58
`Y` | 89 | 131 | 59
`Z` | 90 | 132 | 5a

### Converting `char` to ASCII (`int`)
```cpp
char c;
cin >> c;
cout << "ASCII value of " << c << " is " << int(c) << endl;
if (int(c) == 64)
    cout << c << " is an uppercase letter A\n";
```

### Adding `char` to a `string`
```cpp
string s = "";
char c = 'A';
s += c;
s += 'B';
cout << s << endl;
```

[ascii]: https://coding.tools/ascii-table