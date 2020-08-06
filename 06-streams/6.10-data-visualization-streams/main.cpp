#include <iostream>
// Step 0: include the rest of what you need to run this program

using namespace std;

// Step 1: this is given for you
bool file_exists(const string& name);

// Step 2: uncomment the below
// int CollectInputData(const string& filename);

// Step 3: uncomment the below
// string get_name(const string& line);
// int get_number(const string& line);

// Step 4: uncomment the below
// void OutputTable(const string& filename);

// Step 5: uncomment the below
// void OutputGraph(const string& filename);

int main() {
    // define a constant for file novels.txt

    // Step 1: check if the file doesn't exist do something
    if (!file_exists(FILENAME)) {
         // Step 2: implement CollectInputData() and call it
         // to get input and create the novels.txt file
    }

    // Step 3: implement get_name() and get_number()
    // call these in the functions below

    // Step 4: implement and call OutputTable()

    // Step 5: implement and call OutputGraph()

    return 0;
}
/* Step 5
   Read novels.txt and output the graph per author
   */
void OutputGraph(const string& filename) {
    // 5.1 open file for reading check if it's bad then return;

    // 5.2 read the file line by line

    // 5.3 skip if fail to read line and if it's first 3 lines

    // 5.4 setw(20) and right justify the author's name

    // 5.5 write one '*' for every book written

    // 5.6 close file
}

/* Step 4:
   Open the file and print the content according to spec.
   */
void OutputTable(const string& filename) {
    // 4.1 open file to read

    // 4.2 if it's bad return nothing "return;"

    // 4.3 read until 'eof()'

    // 4.4 check if failed to read and skip

    // 4.5 first line is title setw(33) and right justify

    // 4.6 else if it's second line setw(20) and left justify

    // 4.7 else if it's third line setw(23) and right justify

    // 4.8 write the line using setfill('-') and setw(44)

    // 4.8 setw(20) left justify and call get_name()

    // 4.9 setw(23) right justify and call get_number()

    // 4.10 close file
}

/* Step 2:
   Read from user's input and write out to file
   Returns number of data points it received.
   If error, returns -1
   */
int CollectInputData(const string& filename) {
    // 2.1 open file for reading

    // 2.2 if can't open file exit

    // 2.3 get input for title, header 1&2 and output to screen & novels.txt

    // 2.4 get data points until -1 write to cout and novels.txt

    // 2.5 close file

    // 2.6 return number of lines written
}

/* Step 3:
   Input: "Jane Austin, 20"
   Output: "Jane Austin"
   Remove any spaces AFTER the name if exists.
   */
string get_name(const string& line) {
    // 3.1 find the comma, returns empty string if not found

    // 3.2 find last character not a ' '

    // 3.3 return string upto the last non space character
}

/* Step 3: continue
   Input: "Jane Austin, 20"
   Output: 20
   Remove any spaces BEFORE the number if exists.
   */
int get_number(const string& line) {
    // 3.4 find the comma, return -1 if not found

    // 3.5 store the string after the comma

    // 3.6 find first character not a space

    // 3.7 use stoi() to return the integer representing books
}

/* Using ifstream to check if the file exist.
   Pass by reference (string&) because it's more efficient.
   You can pass it by value but it will use more memory.
   */
bool file_exists(const string& name) {
    ifstream f(name);       // create stream and open file
    return f.good();        // check if it can be opened
}