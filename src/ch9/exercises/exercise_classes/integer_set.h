//
// Created by Peter Sims on 9/23/24.
//

#ifndef INTEGER_SET_H
#define INTEGER_SET_H
#include <vector>


class IntegerSet {
    static constexpr int m_size{101};

public:
    IntegerSet();
    explicit IntegerSet(const std::array<bool, m_size>& other);
    IntegerSet(const int others[], int size);

    void insertElement(int i);
    void deleteElement(int i);
    IntegerSet intersectionOfSets(const IntegerSet& other) const;
    IntegerSet unionOfSets(const IntegerSet& other) const;
    bool isEmpty() const;
    bool contains(int i) const;
    bool isEqualTo(const IntegerSet& other) const;
    std::string toString();

private:
    void setEntryCount();

    std::array<bool, m_size> m_bools{};
    int m_entries{};


};


#endif //INTEGER_SET_H
