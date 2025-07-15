
#include <iostream>
#include <string>
using namespace std;

// Class representing a food item
class FoodItem 
{
    public:
    int id;
    string name;
    float price;

    // Constructor
    FoodItem() {}
    FoodItem(int i, string n, float p) 
    {
        id = i;
        name = n;
        price = p;
    }
};

// Function to show the menu
    void showMenu(FoodItem menu[], int size) 
    {
    cout << "\n----- MENU -----\n";
    for (int i = 0; i < size; i++) 
    {
        cout << menu[i].id << ". " << menu[i].name << "\n";
    }
    }

// Function to generate the bill
    void generateBill(FoodItem item, int quantity)
    {
    float total = item.price * quantity;
    cout << "You ordered " << quantity << " x " << item.name << "\n";
    cout << "\nTotal Bill: $" << total << "\n";
    cout<< " \nYour order will be delivered in 40 minutes \n ";
    cout<< "\nThank you for ordering from TOPS TECH FAST FOOD \n ";
    }

int main() 
{

    cout << "\n                 ----- TOPS TECH FAST FOOD -----                           \n";
    char customerName[50];
    cout << " \n Enter your name: ";
    cin>>customerName;

    // Menu items
    FoodItem menu[] = {
        FoodItem(1, "Pizza", 0),
        FoodItem(2, "Burger", 0),
        FoodItem(3, "Sandwich", 0),
        FoodItem(4, "Rolls", 5),
        FoodItem(5, "Biryani", 0)
    };
    
    
    int menuSize = sizeof(menu) / sizeof(menu[0]);
    

    char cont = 'y'; // control variable

    while (cont == 'y' || cont == 'Y')
    {
        
        showMenu(menu, menuSize);

        int choice, quantity;
        cout << "\nEnter your choice (1-" << menuSize << "): ";
        cin >> choice; 

        if (choice >= 1 && choice <= menuSize) 
        { 
            FoodItem selectedItem;

            switch (choice) 
            {
                case 1: 
                {
                    int opt;
                    cout << "\nChoose type of Pizza:\n";
                    cout << "1. Margherita - $8.0\n";
                    cout << "2. Pepperoni - $10.0\n";
                    cout << "3. Veggie - $9.5\n";
                    cout << "Enter option (1-3): ";
                    cin >> opt;

                    switch (opt) 
                    {
                        case 1: 
                        selectedItem = FoodItem(1, "Margherita Pizza", 8.0);
                        break;
                        case 2: 
                        selectedItem = FoodItem(1, "Pepperoni Pizza", 10.0); 
                        break;
                        case 3: 
                        selectedItem = FoodItem(1, "Veggie Pizza", 9.5); 
                        break;
                        default: 
                        selectedItem = FoodItem(1, "Basic Pizza", 7.0);
                    }
                    break;
                }
                case 2: 
                {
                    int opt;
                    cout << "\nChoose type of Burger:\n";
                    cout << "1. Veg Burger - $5.0\n";
                    cout << "2. Chicken Burger - $6.5\n";
                    cout << "3. Cheese Burger - $6.0\n";
                    cout << "Enter option (1-3): ";
                    cin >> opt;

                    switch (opt) 
                    {
                        case 1: 
                        selectedItem = FoodItem(2, "Veg Burger", 5.0); 
                        break;
                        case 2: 
                        selectedItem = FoodItem(2, "Chicken Burger", 6.5); 
                        break;
                        case 3: 
                        selectedItem = FoodItem(2, "Cheese Burger", 6.0); 
                        break;
                        default: 
                        selectedItem = FoodItem(2, "Regular Burger", 5.0);
                        
                    }
                    break;
                }
                case 3: 
                {
                    int opt;
                    cout << "\nChoose type of Sandwich:\n";
                    cout << "1. Veg Sandwich - $6.0\n";
                    cout << "2. Non-Veg Sandwich - $9.0\n";
                    cout << "3. Grilled Sandwich - $8.5\n";
                    cout << "Enter option (1-3): ";
                    cin >> opt;

                    switch (opt) 
                    {
                        case 1: 
                        selectedItem = FoodItem(3, "Veg Sandwich", 6.0); 
                        break;
                        case 2: 
                        selectedItem = FoodItem(3, "Non-Veg Sandwich", 9.0); 
                        break;
                        case 3: 
                        selectedItem = FoodItem(3, "Grilled Sandwich", 8.5); 
                        break;
                        default: 
                        selectedItem = FoodItem(3, "Plain Sandwich", 7.0);
                        
                    }
                    break;
                }
                case 4: 
                {
                    int opt;
                    cout << "\nChoose type of Roll:\n";
                    cout << "1. Veg Roll - $4.0\n";
                    cout << "2. Chicken Roll - $6.0\n";
                    cout << "3. Egg Roll - $5.0\n";
                    cout << "Enter option (1-3): ";
                    cin >> opt;

                    switch (opt) 
                    {
                        case 1: 
                        selectedItem = FoodItem(4, "Veg Roll", 4.0); 
                        break;
                        case 2: 
                        selectedItem = FoodItem(4, "Chicken Roll", 6.0); 
                        break;
                        case 3: 
                        selectedItem = FoodItem(4, "Egg Roll", 5.0); 
                        break;
                        default: 
                        selectedItem = FoodItem(4, "Basic Roll", 4.0);
                        
                    }
                    break;
                }
                case 5: 
                {
                    int opt;
                    cout << "\nChoose type of Biryani:\n";
                    cout << "1. Veg Biryani - $8.0\n";
                    cout << "2. Chicken Biryani - $10.0\n";
                    cout << "3. Mutton Biryani - $12.0\n";
                    cout << "Enter option (1-3): ";
                    cin >> opt;

                    switch (opt) 
                    {
                        case 1: 
                        selectedItem = FoodItem(5, "Veg Biryani", 8.0); 
                        break;
                        case 2: 
                        selectedItem = FoodItem(5, "Chicken Biryani", 10.0); 
                        break;
                        case 3: 
                        selectedItem = FoodItem(5, "Mutton Biryani", 12.0); 
                        break;
                        default: 
                        selectedItem = FoodItem(5, "Basic Biryani", 9.0);
                    }
                    break;
                }
            }

            cout << "Enter quantity: ";
            cin >> quantity;
            generateBill(selectedItem, quantity);
        } 
        else
        {
            cout << "Invalid choice!" << "\n";
        }


        cout << "\nDo you want to order more? (y/n): ";
        cin >> cont;
    }

    cout << "\nThank you, " << customerName << "! Visit again.\n";
    return 0;
}
    
   