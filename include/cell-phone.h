/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2021
 *
 * @file    cell-phone.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   CellPhone specification.
 */

#ifndef CSC232_CELL_PHONE_H__
#define CSC232_CELL_PHONE_H__

#include "csc232.h"
#include "item.h"

/**
 * @brief Common namespace for CSC232 identifiers.
 */
namespace csc232
{
    /**
     * @brief An enumeration of valid Cell phone carriers.
     */
    enum Carrier
    {
        ATT, T_MOBILE, VERIZON
    };

    /**
     * @brief Cell phone products in the CSC232 e-commerce site.
     */
    class CellPhone : public Item
    {
    public:
        /**
         * @brief Initializing CellPhone constructor.
         * @param name a brief name for this Item
         * @param description a collection of bullet points describing this Item
         * @param price the cost of this Item in USD
         * @param carrier the cell phone carrier for this Item, defaulting to ATT
         */
        CellPhone ( std::string name, std::vector<std::string> description, double price, Carrier carrier = ATT );

        // The Big-Five

        /**
         * @brief Copy constructor.
         * @param src the CellPhone l-value const reference used to create this CellPhone
         */
        CellPhone ( const CellPhone& src ) = default;

        /**
         * @brief Move constructor.
         * @param src the CellPhone r-value reference used to create this CellPhone
         */
        CellPhone ( CellPhone&& src ) = default;

        /**
         * @brief Copy assignment operator.
         * @param rhs the CellPhone l-value const reference used to create/modify this CellPhone
         * @return a reference to this created/updated CellPhone.
         */
        CellPhone& operator= ( const CellPhone& rhs ) = default;

        /**
         * @brief Move assignment operator.
         * @param rhs the CellPhone r-value reference used to create/modify this CellPhone
         * @return a reference to this created/updated CellPhone.
         */
        CellPhone& operator= ( CellPhone&& rhs ) = default;

        /**
         * @brief CellPhone destructor.
         */
        ~CellPhone ( ) override = default;

        // Cell phone specializations...

        /**
         * @brief Cell phone carrier accessor.
         * @return the carrier used by this CellPhone.
         */
        Carrier GetCarrier ( ) const;

        /**
         * @brief Cell phone carrier mutator.
         * @param carrier an updated carrier for this CellPhone
         */
        void SetCarrier ( Carrier carrier );

    private:
        Carrier carrier_;
    };
}

#endif // CSC232_CELL_PHONE_H__
