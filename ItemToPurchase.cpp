#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

//TODO: Default Constructor
ItemToPurchase::ItemToPurchase(){
  itemName = "none";
  itemPrice = 0;
  itemQuantity = 0;
}

// Constructor
ItemToPurchase::ItemToPurchase(string name, int price, int quantity){
  itemName = name;
  itemPrice = price;
  itemQuantity = quantiy;
}

//Set name
void ItemToPurchase::SetName(string n){
  name = n;
}

//Get name
string ItemToPurchase::GetName(){
  return name;
}

//Set price
void ItemToPurchase::SetPrice(int p)
  price = p;
}

//Get price
int ItemToPurchase::GetPrice(){
  return price;
}

void ItemToPurchase::SetQuantity(int q){
  quantity = q;
}

int ItemToPurchase::GetQuantity(){
  return quantity;
}
