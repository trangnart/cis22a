Users may type or copy-paste in a text box of a web form, perhaps a name like "Joe Smith". The user sometimes has whitespace before or after the text, like " Joe Smith ". A program typically strips such leading and trailing whitespace. Given a string, create a new string that lacks any leading or trailing spaces. Given " Joe Smith ", the new string should be "Joe Smith". Be sure to handle the case of the user entering only whitespace, or entering nothing, which each should yield an empty string "".

Hints:
* Initially, try to find the index of the first non-space character. Set the index to 0, then use a while loop to check each character.
* Your while loop expression should first check that the index is valid for the size of the string.
* The size() function of a string returns an unsigned int, so declare your index variable as an unsigned int so you can compare without a compiler warning.
* Next, try to find the index of the last non-space character. Use a different index variable. You while loop expression should first check that it is greater-than-or-equal to 0 to ensure it is valid.
* Once you know the first and last non-space characters, you can use a for loop to copy those characters to the new string.
* After the first while loop, be sure to check if any non-space character was found (by checking if the index is less than the string's last element). If no non-space character was found, just return.