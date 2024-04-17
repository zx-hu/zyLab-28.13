#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase{
  private:
    string itemName;
    int itemPrice;
    int itemQuantity;
  public:
  //TODO: add constructor
    void SetName();
    string GetName();
    void SetPrice();
    int GetPrice();
    void SetQuantity();
    int GetQuantity();
};

#endif
