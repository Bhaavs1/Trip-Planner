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
    return total_cost;
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