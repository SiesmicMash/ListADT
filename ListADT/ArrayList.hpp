//
//  ArrayList.hpp
//  ListADT
//
//  Created by Usaid Ali Syed on 2025-03-04.
//

#ifndef ARRAY_LIST_
#define ARRAY_LIST_
#include "ListInterface.hpp"

template <class ItemType>
class ArrayList : public ListInterface<ItemType> {

private:
    static const int DEFAULT_CAPACITY = 5;
    ItemType items[DEFAULT_CAPACITY + 1];
    int itemCount;
    int capacity;
    
public:
    ArrayList();
    
    bool isEmpty() const;
    int getLength() const;
    bool insert(int newPosition, const ItemType& newEntry);
    bool remove(int position);
    void clear();
    ItemType getEntry(int position) const;
    void replace(int position, const ItemType& newEntry);
    
};

#endif /* ArrayList_hpp */
