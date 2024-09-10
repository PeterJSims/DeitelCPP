#include <format>
#include <iostream>
#include "exercise_classes/invoice.h"
int main() {
  Invoice invoice{"1", "thing", 5, 15};
  std::cout << invoice.getInvoiceAmount();;
  invoice.setPricePerItem(-20);
  std::cout << invoice.getInvoiceAmount();;
  return 0;
}