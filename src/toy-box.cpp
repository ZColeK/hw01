#include "toy-box.h"

template<typename ItemType>
ToyBox<ItemType>::ToyBox ( const ItemType& theItem, const Color& theColor ) : PlainBox<ItemType> { theItem },
                                                                              boxColor { theColor }
{

}

template<typename ItemType>
ToyBox<ItemType>::ToyBox ( const Color& theColor ) : PlainBox<ItemType> { ItemType { } },
                                                     boxColor { theColor }
{

}

template<typename ItemType>
Color ToyBox<ItemType>::GetColor ( ) const
{
    return boxColor;
}
