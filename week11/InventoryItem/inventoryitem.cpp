#include "inventoryitem.h"

InventoryItem::InventoryItem()
{
    storeInfo(0, "NA", 0, 0.0);
}

InventoryItem::InventoryItem(int p, string d, int oH, double cost)
{
    storeInfo(p, d, oH, cost);
}

void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
    mPartNum = p;
    mDescription = d;
    mOnHand = oH;
    mPrice = cost;
}

int InventoryItem::getPartNum() const
{
    return mPartNum;
}

string InventoryItem::getDescription() const
{
    return mDescription;
}

int InventoryItem::getOnHand() const
{
    return mOnHand;
}

double InventoryItem::getPrice() const
{
    return mPrice;
}