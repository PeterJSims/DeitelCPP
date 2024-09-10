//
// Created by Peter Sims on 9/5/24.
//

#include "invoice.h"


Invoice::Invoice(std::string partNumber, std::string description, const int quantity, const int pricePerItem):
    m_partNumber(std::move(partNumber)), m_description(std::move(description)), m_quantity(quantity),
    m_pricePerItem(pricePerItem) {
    if (pricePerItem < 0) { m_pricePerItem = 0; }
    if (quantity < 0) { m_quantity = 0; }
}

std::string Invoice::getPartNumber() const {
    return m_partNumber;
}

void Invoice::setPartNumber(const std::string& m_part_number) {
    m_partNumber = m_part_number;
}

std::string Invoice::getDescription() const {
    return m_description;
}

void Invoice::setDescription(const std::string& m_description) {
    this->m_description = m_description;
}

int Invoice::getQuantity() const {
    return m_quantity;
}

void Invoice::setQuantity(const int m_quantity) {
    this->m_quantity = std::max(0, m_quantity);
}

int Invoice::getPricePerItem() const {
    return m_pricePerItem;
}

void Invoice::setPricePerItem(const int m_price_per_item) {
    m_pricePerItem = std::max(0, m_price_per_item);
}

int Invoice::getInvoiceAmount() const {
    return m_quantity * m_pricePerItem;
}
