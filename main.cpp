#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    string name;
    int item, quantity, choice;
    float totalBill = 0;
    int zingerQty = 0, pizzaQty = 0, friesQty = 0, drinkQty = 0, sandwichQty = 0;
    
    cout << "======================================\n";
    cout << "\t\tWELCOME\t\n";
    cout << "======================================\n";
    cout << "Enter Customer Name: ";
    getline(cin,name);
    cout << "\n--- Menu ---\n";
	cout << "1. Zinger Burger\t-Rs.600\n";
	cout << "2. Chicken Tikka Pizza\t-Rs.1500\n";
	cout << "3. Masala Fries\t\t-Rs.300\n";
	cout << "4. Cold Drink\t\t-Rs.150\n";
	cout << "5. Sandwich\t\t-Rs.250\n";
    do{
        cout << "\nSelect Item Number: ";
        cin >> item;
        if(item < 1 || item > 5)
	{
    	cout << "Invalid choice! Please select a number between 1 and 5.\n";
    	continue;
	}
       
            cout << "Enter Quantity: ";
            cin >> quantity;
        
        if (quantity <= 0)
        {
            cout << "Invalid quantity! Please order at least 1.\n";
            continue;
        }
        
        switch(item)
{
    case 1:
    zingerQty += quantity;
    totalBill += (600 * quantity);
    cout << quantity << " Zinger Burgers added.\n";
    break;
    case 2:
    pizzaQty += quantity;
    totalBill += (1500 * quantity);
    cout << quantity << " Chicken Tikka Pizza added.\n";
    break;
    case 3:
    friesQty += quantity;
    totalBill += (300 * quantity);
    cout << quantity << " Masala Fries added.\n";
    break;
    case 4:
    drinkQty += quantity;
    totalBill += (150 * quantity);
    cout << quantity << " Cold Drink added.\n";
    break;
    case 5:
    sandwichQty += quantity;
    totalBill += (250 * quantity);
    cout << quantity << " Sandwich added.\n";
    break;
    
}

do{
    cout << "\nAnything Else?\n";
    cout << "1. Yes\n";
    cout << "2. No\n";
    cout << "Enter Choice: ";
    cin >> choice;

    if(choice != 1 && choice != 2)
        cout << "Invalid choice! Please enter 1 or 2.\n";

}while(choice != 1 && choice != 2);

}
while(choice!=2);

float subtotal = totalBill;
float gst = subtotal * 0.05;     // 5% GST
float discount = 0;

if(subtotal >= 5000)
{
    discount = subtotal * 0.05;  // 5% discount
}

float finalBill = subtotal + gst - discount;


cout << "======================================\n";
cout << "\t\tFINAL BILL\t\n";
cout << "======================================\n";

    cout << "Customer Name : "<< name<<endl;
    
cout << left << setw(25) << "Item"
     << setw(10) << "Qty"
     << "Price" << endl;

if(zingerQty > 0)
    cout << left << setw(25) << "Zinger Burger"
         << setw(10) << zingerQty
         << zingerQty * 600 << endl;

if(pizzaQty > 0)
    cout << left << setw(25) << "Chicken Tikka Pizza"
         << setw(10) << pizzaQty
         << pizzaQty * 1500 << endl;

if(friesQty > 0)
    cout << left << setw(25) << "Masala Fries"
         << setw(10) << friesQty
         << friesQty * 300 << endl;

if(drinkQty > 0)
    cout << left << setw(25) << "Cold Drink"
         << setw(10) << drinkQty
         << drinkQty * 150 << endl;

if(sandwichQty > 0)
    cout << left << setw(25) << "Sandwich"
         << setw(10) << sandwichQty
         << sandwichQty * 250 << endl;

cout << "--------------------------------------\n";
cout << "Subtotal : Rs. " << subtotal << endl;
cout << "GST (5%) : Rs. " << gst << endl;

if(discount > 0)
    cout << "Discount (5%) : Rs. " << discount << endl;
else
    cout << "Discount : Rs. 0" << endl;

cout << "--------------------------------------\n";
cout << "Total	 : Rs. " << finalBill << endl;
cout << "--------------------------------------\n";
cout << "Thank You! Visit Again.\n";
    
return 0;
}
