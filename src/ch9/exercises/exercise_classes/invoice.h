//
// Created by Peter Sims on 9/5/24.
//

#ifndef INVOICE_H
#define INVOICE_H
#include <string>


class Invoice {
public:
    Invoice(std::string partNumber, std::string description, int quantity, int pricePerItem);
    std::string getPartNumber() const;

    void setPartNumber(const std::string& m_part_number);
    std::string getDescription() const;

    void setDescription(const std::string& m_description);

    int getQuantity() const;

    void setQuantity(int m_quantity);

    int getPricePerItem() const;

    void setPricePerItem(int m_price_per_item);

    int getInvoiceAmount() const;

private:
    std::string m_partNumber;
    std::string m_description;
    int m_quantity{};
    int m_pricePerItem{};
};


#endif //INVOICE_H
