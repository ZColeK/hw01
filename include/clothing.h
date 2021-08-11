/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2021
 *
 * @file    clothing.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Clothing specification.
 */

#ifndef CSC232_CLOTHING_H__
#define CSC232_CLOTHING_H__

#include "csc232.h"
#include "item.h"

/**
 * @brief Common namespace for CSC232 identifiers.
 */
namespace csc232
{
    /**
     * @brief An enumeration of valid clothing sizes.
     */
    enum Size
    {
        XS, S, M, L, XL, XXL
    };

    /**
     * @brief Clothing apparel in the CSC232 e-commerce site.
     */
    class Clothing : public Item
    {
    public:
        /**
         * @brief Initializing Clothing constructor.
         * @param name a brief name for this Item
         * @param description a collection of bullet points describing this Item
         * @param price the cost of this Item in USD
         * @param size the clothing size for this Item, defaulting to M
         */
        Clothing ( std::string name, std::vector<std::string> description, double price, Size size = M );

        // The Big-Five

        /**
         * @brief Copy constructor.
         * @param src the Clothing l-value const reference used to create this article of Clothing
         */
        Clothing ( const Clothing& src ) = default;

        /**
         * @brief Move constructor.
         * @param src the Clothing r-value reference used to create this article of Clothing
         */
        Clothing ( Clothing&& src ) = default;

        /**
         * @brief Copy assignment operator.
         * @param rhs the Clothing l-value const reference used to create/modify this article of Clothing
         * @return a reference to this created/updated article of Clothing.
         */
        Clothing& operator= ( const Clothing& rhs ) = default;

        /**
         * @brief Move assignment operator.
         * @param rhs the Clothing r-value reference used to create/modify this article of Clothing
         * @return a reference to this created/updated article of Clothing.
         */
        Clothing& operator= ( Clothing&& rhs ) = default;

        /**
         * @brief Clothing destructor.
         */
        ~Clothing ( ) override = default;

        // Clothing specializations

        /**
         * @brief Size accessor.
         * @return the size of this article of clothing.
         */
        Size GetSize() const;

        /**
         * @brief Size mutator.
         * @param size the updated size for this article of clothing
         */
        void SetSize(Size size);
    private:
        Size size_;
    };
}

#endif // CSC232_CLOTHING_H__
