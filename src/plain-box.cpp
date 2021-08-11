//
// Created by Jim Daehn on 8/5/21.
//

#include "plain-box.h"

template<typename ItemType>
PlainBox<ItemType>::PlainBox ( const ItemType& theItem ) : item { theItem }
{
    // Intentionally blank
}

template<typename ItemType>
ItemType PlainBox<ItemType>::GetItem ( ) const
{
    return item;
}

template<typename ItemType>
void PlainBox<ItemType>::SetItem ( const ItemType& theItem )
{
    item = theItem;
}