//
//  ArrayList.cpp
//  ListADT
//
//  Created by Usaid Ali Syed on 2025-03-04.
//

#include "ArrayList.hpp"
#include "PrecondViolatedExcep.hpp"

template <class ItemType>
ArrayList<ItemType> :: ArrayList(): itemCount(0), capacity(DEFAULT_CAPACITY) {}

template <class ItemType>
bool ArrayList<ItemType>::isEmpty() const{
    return itemCount == 0;
}

template <class ItemType>
int ArrayList<ItemType>::getLength() const{
    return itemCount;
}

template <class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType &newEntry) {
    if (newPosition < 1 || newPosition > itemCount + 1 || itemCount == capacity)  {
        return false;
    }
    
    for (int pos = itemCount; pos >= newPosition ; pos --) {
        items[pos + 1] = items[pos];
    }
    
    items[newPosition] = newEntry;
    itemCount ++;
    return true;
}

template <class ItemType>
bool ArrayList<ItemType>:: remove(int position) {
    
    if (position < 1 || position > itemCount) {
        return false;
    }
    
    for (int pos = position + 1; pos <= itemCount; pos++) {
        items[pos-1] = items[pos];
    }
    
    itemCount --;
    return true;
}

template <class ItemType>
void ArrayList<ItemType>::clear() {
    itemCount = 0;
}

template <class ItemType>
ItemType ArrayList<ItemType>::getEntry(int position) const{
    if (position < 1 || position > itemCount) {
        string message = "getEntry called with an empty list or invalid position";
        throw(PrecondViolatedExcep(message));
    }
    
    return items[position];
}

template <class ItemType>
void ArrayList<ItemType>::replace(int position, const ItemType &newEntry) {
    if (position < 1 || position > itemCount) {
        string message =  "replace called with an empty list or invalid position";
        throw(PrecondViolatedExcep(message));
    }
    
    items[position] = newEntry;
}
