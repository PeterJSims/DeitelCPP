//
// Created by Peter Sims on 9/23/24.
//

#include <algorithm>
#include "integer_set.h"

#include <__format/format_functions.h>

IntegerSet::IntegerSet() {
    m_bools = std::array<bool, 101>{};
}

IntegerSet::IntegerSet(const std::array<bool, 101>& other) {
    m_bools = other;
    setEntryCount();
}

IntegerSet::IntegerSet(const int others[], const int size) {
    m_bools = std::array<bool, 101>{};

    for (int i{0}; i < size; ++i) {
        if (others[i] >= 0 && others[i] < m_bools.size()) {
            m_bools[i] = true;
            ++m_entries;
        }
    }
}

void IntegerSet::insertElement(int i) {
    if (i >= 0 && i < m_bools.size()) {
        if (!m_bools[i]) {
            ++m_entries;
        }
        m_bools[i] = true;
    }
}

void IntegerSet::deleteElement(int i) {
    if (i >= 0 && i < m_bools.size()) {
        if (m_bools[i]) {
            --m_entries;
        }
        m_bools[i] = false;
    }
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet& other) const {
    std::array<bool, m_size> intersection{};
    for (int i{0}; i < m_size; ++i) {
        if (this->contains(i) && other.contains(i)) {
            intersection[i] = true;
        }
    }
    return IntegerSet(intersection);
}

IntegerSet IntegerSet::unionOfSets(const IntegerSet& other) const {
    std::array<bool, m_size> unionSet{};
    for (int i{0}; i < m_size; ++i) {
        if (this->contains(i) || other.contains(i)) {
            unionSet[i] = true;
        }
    }
    return IntegerSet(unionSet);
}

bool IntegerSet::isEmpty() const {
    return m_entries == 0;
}

bool IntegerSet::contains(const int i) const {
    return m_bools[i] == true;
}

bool IntegerSet::isEqualTo(const IntegerSet& other) const {
    return m_bools == other.m_bools;
}

std::string IntegerSet::toString() {
    std::string stringSet;
    for (int i{0}; i < m_size; ++i) {
        if (m_bools[i] == true) {
            stringSet += std::format("{}, ", i);
        }
    }
    return stringSet.substr(0, stringSet.size() - 2);
}

void IntegerSet::setEntryCount() {
    this->m_entries = std::count(m_bools.begin(), m_bools.end(), true);
}
