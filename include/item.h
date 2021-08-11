/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2021
 *
 * @file    item.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Item specification.
 */

#ifndef CSC232_ITEM_H__
#define CSC232_ITEM_H__

#include "csc232.h"

/**
 * @brief Common namespace for CSC232 identifiers.
 */
namespace csc232
{
    /**
     * @brief An interface for items in the CSC232 e-commerce store.
     */
    class Item
    {
    public:
        /**
         * @brief Initializing constructor.
         * @param name a brief name for this Item
         * @param description a collection of bullet points describing this Item
         * @param price the cost of this Item in USD
         */
        Item ( std::string name, std::vector<std::string> description, double price );

        /**
         * @brief Default Item destructor.
         */
        virtual ~Item ( ) = default;

        /**
         * @brief Item identifier accessor.
         * @return the identifier of this Item.
         */
        virtual std::string GetId ( ) const;

        /**
         * @brief Item name accessor.
         * @return the name of this Item.
         */
        virtual std::string GetName ( ) const;

        /**
         * @brief Item name mutator.
         * @param name a brief, descriptive name to assign to this Item
         */
        virtual void SetName ( const std::string& name );

        /**
         * @brief Item description accessor.
         * @return a description of this Item.
         */
        virtual std::vector<std::string> GetDescription ( ) const;

        /**
         * @brief Item description mutator.
         * @param description a vector of item descriptions (bullet points) to assign to this Item
         */
        virtual void SetDescription ( const std::vector<std::string>& description );

        /**
         * @brief Item price accessor.
         * @return the price of this Item.
         */
        virtual double GetPrice ( ) const;

        /**
         * @brief Item price mutator.
         * @param price a price (USD) to assign to this Item
         */
        virtual void SetPrice ( double price );

    private:
        std::string id_;
        std::string name_;
        std::vector<std::string> description_;
        double price_;
    };
}

#endif //CSC232_ITEM_H__
