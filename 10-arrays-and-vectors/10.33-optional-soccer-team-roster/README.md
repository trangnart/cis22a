# 10.33 LAB*: Program: Soccer team roster (Vectors)
This program will store roster and rating information for a soccer team. Coaches rate players during tryouts to ensure a balanced team.

## Part 1: Read Input File
Create a file called `input.txt` with these values:
```
84 7
23 4
4 5
30 2
66 9
```
The first number is the _jersey_ number, the second is _rating_.
Store the numbers in 2 vectors: `jerseys` and `ratings`.


## Part 2: Output the Roster
```
ROSTER
Player 1 -- Jersey number: 84, Rating: 7
Player 2 -- Jersey number: 23, Rating: 4
```

## Part 3: Menu
Implement a menu of options for a user to modify the roster.
Each option is represented by a single character.
The program initially outputs the menu,
and outputs the menu after a user chooses an option.
The program ends when the user chooses the option to _Quit_.
For this step, the other options do nothing.

```
MENU
a - Add player
d - Remove player
u - Update player rating
r - Output players above a rating
o - Output roster
q - Quit

Choose an option:
```

When user select `o` call the function to output the roster above.
The other functions are implemented below.

## Part 4: Add Player
Implement the "Add player" menu option.
Prompt the user for a new player's jersey number and rating.
Append the values to the two vectors.

```
Enter a new player's jersey number:
49
Enter the player's rating:
8
```

## Part 5: Delete Player
Implement the "Delete player" menu option.
Prompt the user for a player's jersey number.
Remove the player from the roster (delete the jersey number and rating).

```
Enter a jersey number:
4
```

## Part 6: Update Player Rating
Implement the "Update player rating" menu option.
Prompt the user for a player's jersey number.
Prompt again for a new rating for the player,
and then change that player's rating.

```
Enter a jersey number:
23
Enter a new rating for player:
6
```

## Part 7: Output Players Above A Rating
Implement the "Output players above a rating" menu option.
Prompt the user for a rating.
Print the jersey number and rating for all players with ratings above the entered value.

```
Enter a rating:
5

ABOVE 5
Player 1 -- Jersey number: 84, Rating: 7
...
```