//
// Created by Jim Daehn on 8/5/21.
//

#ifndef CSC232_PLAIN_BOX_H__
#define CSC232_PLAIN_BOX_H__


template<typename ItemType>
class PlainBox
{
private:
    ItemType item;
public:
    explicit PlainBox(const ItemType& theItem = ItemType{});
    ItemType GetItem() const;
    void SetItem(const ItemType& theItem);
    ~PlainBox() = default;
};

#include "plain-box.cpp"

#endif //CSC232_PLAIN_BOX_H__
