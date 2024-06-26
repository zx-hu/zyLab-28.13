#include <iostream>
using namespace std;

#include "ItemToPurchase.h"


int main(){
  //get params for the two items
  string name1, name2;
  int price1, price2, quant1, quant2;
  //item 1
  cout << "Item 1" << endl;
  cout << "Enter the item name:" << endl;
  getline(cin,name1);
  cout << "Enter the item price:" << endl;
  cin >> price1;
  cout << "Enter the item quantity:" << endl;
  cin >> quant1;
  
  cin.ignore();
  
  //item 2
  cout << endl << "Item 2" << endl;
  cout << "Enter the item name:" << endl;
  getline(cin,name2);
  cout << "Enter the item price:" << endl;
  cin >> price2;
  cout << "Enter the item quantity:" << endl;
  cin >> quant2;
  cout << endl;

  //create the items
  ItemToPurchase item1 = ItemToPurchase(name1, price1, quant1);
  ItemToPurchase item2 = ItemToPurchase(name2, price2, quant2);
  
  //output
  int total1, total2;
  total1 = item1.GetQuantity() * item1.GetPrice();
  total2 = item2.GetQuantity() * item2.GetPrice();
  
  cout << "TOTAL COST" << endl;
  cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << total1 << endl;
  cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << total2 << endl;
  cout << endl;
  cout << "Total: $" << total1 + total2 << endl;
  return 0;
}
