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
  itemQuantity = quantity;
}

//Set name
void ItemToPurchase::SetName(string n){
  itemName = n;
}

//Get name
string ItemToPurchase::GetName(){
  return itemName;
}

//Set price
void ItemToPurchase::SetPrice(int p){
  itemPrice = p;
}

//Get price
int ItemToPurchase::GetPrice(){
  return itemPrice;
}

void ItemToPurchase::SetQuantity(int q){
  itemQuantity = q;
}

int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}
