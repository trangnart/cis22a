#include <iostream>
#include <string>
using namespace std;

void createGroups(int no_stu, string myClass[],
                  string group1[], int &n1,
                  string group2[], int &n2);
void outputGroups(int no_stu, string myClass[],
                  string group1[], int n1,
                  string group2[], int n2);

int main()
{
    const int NO_STU = 45;
    string myClass[NO_STU] = {"Mary", "Jo", "Tim", "Jamie", "Ann",
                              "Tom", "Linda", "Zoe", "Bob"};
    int no_stu = 9;
    int n1;
    int n2;
    string group1[NO_STU / 2 + 1];
    string group2[NO_STU / 2];

    createGroups(no_stu, myClass, group1, n1, group2, n2);

    // assuming calling second time recreates the arrays again
    createGroups(no_stu, myClass, group1, n1, group2, n2);

    // output the groups to check the results
    outputGroups(no_stu, myClass, group1, n1, group2, n2);

    return 0;
}

/*
 Separates the class into two groups, based on their positions
 in the list. Even numbered in group1 and odd in group2
 */
void createGroups(int no_stu, string myClass[],
                  string group1[], int &n1,
                  string group2[], int &n2)
{
    n1 = 0; // init count group 1
    n2 = 0; // init count group 2

    for (int i = 0; i < no_stu; ++i)
    {
        if (i % 2 == 0)
        { // 0s are even
            group1[n1++] = myClass[i];
        }
        else
        { // 1s are odd
            group2[n2++] = myClass[i];
        }
    }
}

void outputGroups(int no_stu, string myClass[],
                  string group1[], int n1,
                  string group2[], int n2)
{
    int i;

    cout << "Class:\n";
    for (i = 0; i < no_stu; ++i)
    {
        cout << myClass[i] << " ";
    }
    cout << endl << endl;

    cout << "Group 1 (even):\n";
    for (i = 0; i < n1; ++i)
    {
        cout << group1[i] << " ";
    }
    cout << endl << endl;

    cout << "Group 2 (odd):\n";
    for (i = 0; i < n2; ++i)
    {
        cout << group2[i] << " ";
    }
    cout << endl;
}