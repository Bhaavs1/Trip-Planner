#include "Bag.h"

Bag::Bag()
{
    bag_name = "";
    current_number_items = 0;
}

Bag::Bag(string name) {
    bag_name = name;
    current_number_items = 0;
}

Bag::~Bag() {}

void Bag::add_item(Item item) {
    items.push_back(item);
    current_number_items++;
}

void Bag::remove_item(string item_name) {
    int index_to_delete;

    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].get_item_name() == item_name)
        {
            index_to_delete = i;
        }
    }

    items.erase(items.begin() + index_to_delete);
    current_number_items--;
    
}

void Bag::display_contents() {
    cout << get_bag_name() << " contains:" << endl;

    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].get_isPacked())
        {
            cout << "- "; 
        } else 
        {
           cout << "+ ";
        }
        cout << items[i].get_num_needed() << "x " << items[i].get_item_name() << endl;
        
    }
    
}