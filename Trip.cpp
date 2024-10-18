#include "Trip.h"

int Trip::count = 1;

Trip::Trip(): name(""), start_date(""), end_date(""), duration(0), current_cost(0), budget(0) {
    ID = Trip::count++;
}

Trip::Trip(string name): name(name), start_date(""), end_date(""), duration(0), current_cost(0), budget(0) {
    ID = Trip::count++;
}


void Trip::add_item_to_list(Item item) {
    packing_list.push_back(item);
}

float Trip::get_current_cost() {
    float total_cost = 0;
    for (int i = 0; i < packing_list.size(); i++)
    {
        total_cost += packing_list[i].get_price();
    }

    current_cost = total_cost;
    return current_cost;
}

void Trip::display_packing_list() {
    cout << endl;
    cout << "Your Packing List:" << endl;
    for (int i = 0; i < packing_list.size(); i++)
    {
        if (packing_list[i].get_isPacked())
        {
            cout << "- "; 
        } else 
        {
           cout << "+ ";
        }
        cout << packing_list[i].get_num_needed() << "x " << packing_list[i].get_item_name() << endl;
    }
    
}

void Trip::export_packing_list(string name) {
    fstream packing_list_exp;
    packing_list_exp.open(name, ios::out);

    if (packing_list_exp.is_open())
    {
        packing_list_exp << "Your Packing List: " << endl;
        for (int i = 0; i < packing_list.size(); i++)
        {
        if (packing_list[i].get_isPacked())
        {
            packing_list_exp << "- "; 
        } else 
        {
           packing_list_exp << "+ ";
        }
        packing_list_exp << packing_list[i].get_num_needed() << "x " << packing_list[i].get_item_name() << endl;
        }

        packing_list_exp << endl;
        packing_list_exp << "Legend:\n(-) Packed\n(+) Not packed" << endl;
        packing_list_exp.close();
    }
    
}

void Trip::read_packing_list(string file_name) {
    fstream packing_list_imp;
    packing_list_imp.open(file_name, ios::in);
    if (packing_list_imp.is_open()) {
        string line;
        while (getline(packing_list_imp, line))
        {
            cout << line << endl;
        }
        packing_list_imp.close();
        
    }

}

void Trip::print_details() {
    cout << "Trip details: " << endl;
    cout << "1. Trip name: " << name << endl;
    cout << "2. Start date: " << start_date << endl;
    cout << "3. End date: " << end_date << endl;
    cout << "4. Duration: " << duration << endl;
    cout << "5. Current expenditure: $" << current_cost << endl;
    cout << "6. Budget: $" << budget << endl;
    cout << "7. Packing List (view more)" << endl;
    cout << "8. Bag List (view more)" << endl;
    cout << "9. Transportation (view more)" << endl;
    cout << "10. Destinations (view more)" << endl;
}