/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2021
 *
 * @file    box-interface.h
 * @author  Zachary Kitchen
 */

#ifndef BOX_INTERFACE_

#define BOX_INTERFACE_

template <class ItemType>
class BoxInterface
{
    public:
        virtual void setItem(const ItemType& theItem) = 0;
        virtual ItemType getItem() const = 0;
        virtual ~BoxInterface() = default;
};
#endif