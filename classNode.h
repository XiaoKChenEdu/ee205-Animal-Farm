///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classNode.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"


class classNode {

    /// Friended Classes ///
    friend class classList             ;
    friend class classSinglyLinkedList ;
    /// Friended Classes ///

    protected:
        /// Protected Attributes ///
        classNode* pNext = nullptr ;
        /// Protected Attributes ///

    protected:
        /// Protected Static Member Functions ///
        static bool compareByAddress ( const classNode* pNode1, const classNode* pNode2 ) ;
        /// Protected Static Member Functions ///

    public:
        /// Validation & Print ///
        virtual void print     ()                             const          ;
        virtual bool validate  ()                             const noexcept ;
        /// Validation & Print ///

        /// Operators ///
        virtual bool operator> ( const classNode &RightSide )                ;
        /// Operators ///

} ;
