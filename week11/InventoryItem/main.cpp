#include <iostream>
#include <iomanip>
#include "inventoryitem.h"
using namespace std;

void showValues(const InventoryItem &item);
void storeValues(InventoryItem &item);
InventoryItem storeValues2();

int main()
{
    InventoryItem part(175, "Hammer", 12, 7.49);
    showValues(part);
    storeValues(part);
    showValues(part);

    InventoryItem part2;
    part2 = storeValues2();

    return 0;
}

void showValues(const InventoryItem &item)
{
    cout << fixed << setprecision(2);
    cout << "Part Number  : " << item.getPartNum() << endl;
    cout << "Description  : " << item.getDescription() << endl;
    cout << "Units On Hand: " << item.getOnHand() << endl;
    cout << "Price        : $" << item.getPrice() << endl;
}

void storeValues(InventoryItem &item)
{
    int partNum;
    cout << "Enter data for the new part number \n";
    cout << "Part number: ";
    cin >> partNum;

    string description;
    cout << "Description: ";
    cin.ignore();
    getline(cin, description);

    int qty;
    cout << "Quantity on hand: ";
    cin >> qty;

    double price;
    cout << "Unit price: ";
    cin >> price;
    item.storeInfo(partNum, description, qty, price);
}

InventoryItem storeValues2()
{
    int partNum;
    cout << "Enter data for the new part number \n";
    cout << "Part number: ";
    cin >> partNum;

    string description;
    cout << "Description: ";
    cin.ignore();
    getline(cin, description);

    int qty;
    cout << "Quantity on hand: ";
    cin >> qty;

    double price;
    cout << "Unit price: ";
    cin >> price;

    InventoryItem item;
    item.storeInfo(partNum, description, qty, price);
    return item;
}