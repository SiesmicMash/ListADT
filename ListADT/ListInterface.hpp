//
//  ListInterface.hpp
//  ListADT
//
//  Created by Usaid Ali Syed on 2025-03-04.
//

#ifndef LIST_INTERFACE_
#define LIST_INTERFACE_

template <class ItemType>
class ListInterface {
public:
    virtual bool isEmpty() const = 0;
    virtual int getLength() const = 0;
    virtual bool insert(int newPosition, const ItemType& newEntry) = 0;
    virtual bool remove(int position) = 0;
    virtual void clear() = 0;
    virtual ItemType getEntry(int posiiton) const = 0;
    virtual void replace(int position, const ItemType& newEntry) = 0;
    virtual ~ListInterface();
};

#endif /* ListInterface_hpp */
