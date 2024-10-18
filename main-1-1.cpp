#include "Transportation.h"
#include "Bag.h"
#include "Item.h"
#include "Trip.h"


using namespace std;

int main() {

    // display a welcome message on the screen for users

    cout << "Hello and welcome to Trip Planner!" << endl;

    // prompt user to create their first trip

    cout << "Would you like to create a new trip? For yes enter 'y', to quit enter 'q'" << endl;

    char continue_program = '\0';
    
    cin >> continue_program;
    
    while (continue_program != 'y' && continue_program != 'q')
    {
        cout << "Invalid input. Please enter 'y' to create a trip or 'q' to quit" << endl;
        cin >> continue_program;
    }

    if (continue_program == 'q')
    {
        cout << "Program terminated by user" << endl;
        return 0;
    }
    
    cout << "You reached the end of the program" << endl;
    
    
}