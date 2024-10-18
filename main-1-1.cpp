#include "Transportation.h"
#include "Bag.h"
#include "Item.h"
#include "Trip.h"
#include "Menu.h"
#include "Flight.h"
#include "LayoverFlight.h"
#include "Train.h"


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
        cout << "See you next time and bon voyage!" << endl;
        return 0;
    }
    
    // Set number of trips to max of 5
    Menu mainMenu(5);
    cout << endl;

    // display trips to user
    mainMenu.display_trips();

    cout << endl;
    cout << "To create a new trip, enter a trip name:" << endl;

    string trip_name;
    cin >> trip_name;

    Trip myTrip(trip_name);

    myTrip.print_details();

    int selection;

    cout << "Select a number to edit or view more or type 'exit' to exit:" << endl;
    cin >> selection;

    // define variables that will be used

    string start_date = "";
    string end_date = "";
    float duration = 0.0;
    float current_exp = 0.0;
    float budget = 0.0;
    char add_item = '\0';

    cout << to_string(selection);

    // based on user input, select
    while (to_string(selection) != "exit") {
        switch (selection)
        {
        case 1:
            cout << "Enter a new trip name or type 'exit' to exit:" << endl;
            cin >> trip_name;
            if (trip_name != "exit")
            {
                myTrip.set_name(trip_name);
            }
            break;

        case 2:
            cout << "Enter a start date or type 'exit' to exit:" << endl;
            cin >> start_date;
            if (start_date != "exit")
            {
                myTrip.set_start_date(start_date);
            }
            break;
        case 3:
            cout << "Enter an end date or type 'exit' to exit:" << endl;
            cin >> end_date;
            if (end_date != "exit")
            {
                myTrip.set_end_date(end_date);
            }
            
            break;
        case 4:
            cout << "Enter a duration or type 'exit' to exit:" << endl;
            cin >> duration;
            if (to_string(duration) != "exit")
            {
                myTrip.set_duration(duration);
            } 
            break;
        case 5:
            cout << "Enter your expenditure or type 'exit' to exit:" << endl;
            cin >> current_exp;
            if (to_string(current_exp) != "exit")
            {
                myTrip.set_duration(duration);
            }
            break;
        case 6:
            cout << "Enter your budget or type 'exit' to exit:" << endl;
            cin >> budget;
            if (to_string(budget) != "exit")
            {
                myTrip.set_duration(budget);
            }
            break;
        case 7:
            myTrip.display_packing_list();
            cout << "Do you wish to add items to the list (y/n)?" << endl;
            cin >> add_item;
            while (add_item == 'y')
            {
                string item_name;
                int amount;
                cout << "Enter item name: " << endl;
                cin >> item_name;
                cout << "Enter amount: " << endl;
                cin >> amount;
                Item i(item_name, amount);
                myTrip.add_item_to_list(i);
                myTrip.display_packing_list();
                cout << "Do you wish to add items to the list (y/n)?" << endl;
                cin >> add_item;
            }

            cout << "Do you wish to export the packing list?" << endl;
            char exp;
            cin >> exp;
            string filename;
            cout << "Please enter a file name: " << endl;
            cin >> filename;
            if (exp == 'y')
            {
                myTrip.export_packing_list(filename);
            }
            

            break;
        default:
            break;
        }


    }
    
    myTrip.print_details();

}