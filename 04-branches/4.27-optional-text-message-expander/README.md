# 4.27 LAB*: Program: Text message expander
## Input/Output
Get a line of text from the user.
Output that line.

Ex:
```
Enter text:
IDK how that happened. TTYL.
You entered: IDK how that happened. TTYL.
```

## Expand abbreviations
Output the line again, this time expanding common text message abbreviations.

Ex:
```
Enter text:
IDK how that happened. TTYL.
You entered: IDK how that happened. TTYL.
Expanded: I don't know how that happened. talk to you later.
```

## Support these abbreviations

Abbr | Definition
---  | ---
BFF | best friend forever
IDK | I don't know
JK  | just kidding
TMI | too much information
TTYL | talk to you later

_Note_: If an abbreviation appears twice, only expand its first instance.