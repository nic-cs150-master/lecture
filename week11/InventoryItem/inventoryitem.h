#ifndef INVENTORY_ITEM_H
#define INVENTORY_ITEM_H

#include <iostream>
#include <string>
using namespace std;

// TODO:convert functions to constant, functions that do not modify the class
class InventoryItem
{
public:
    InventoryItem();
    InventoryItem(int p, string d, int oH, double cost);
    void storeInfo(int p, string d, int oH, double cost);
    int getPartNum() const;
    string getDescription() const;
    int getOnHand() const;
    double getPrice() const;

private:
    int mPartNum;         // Part number
    string mDescription;  // Item description
    int mOnHand;          // Units on hand
    double mPrice;        // Unit price
};

#endif