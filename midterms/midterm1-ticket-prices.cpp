#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Named constants (variables with a fixed value)
    const double ADULT_TICKET_PRICE = 12.50;
    const double CHILD_TICKET_PRICE = 6.99;

    // Variables
    string movie_title;
    int adult_tickets;
    int child_tickets;
    double adult_revenue;
    double child_revenue;
    double gross_profit;

    // Get input section
    cout << "Enter the name of the movie: ";
    cin >> movie_title;
    cout << "Enter the number of adult tickets sold: ";
    cin >> adult_tickets;
    cout << "Enter the number of child tickets sold: ";
    cin >> child_tickets;

    // Calculation section
    adult_revenue = adult_tickets * ADULT_TICKET_PRICE;
    child_revenue = child_tickets * CHILD_TICKET_PRICE;
    gross_profit = adult_revenue + child_revenue;

    // Display output section
    cout << "Revenue Report \"" << movie_title << "\"" << endl;
    cout << "Adult Tickets Revenue: $" << adult_revenue << endl;
    cout << "Child Tickets Revenue: $" << child_revenue << endl;
    cout << "Gross Box Office Profit: $" << gross_profit << endl;

    return 0;
}