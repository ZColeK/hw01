#ifndef CSC232_MAGIC_BOX_H__
#define CSC232_MAGIC_BOX_H__

#include "plain-box.h"

template<typename ItemType>
class MagicBox : public PlainBox<ItemType>
{
private:
    bool firstItemStored;

public:
    MagicBox();
    explicit MagicBox(const ItemType& theItem);
    void SetItem(const ItemType& theItem);
};

#include "magic-box.cpp"

#endif