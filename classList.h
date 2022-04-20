///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classList.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"
#include "classNode.h"


class classList {

    protected:
        /// Protected Attributes ///
        classNode*   pHead = nullptr ;
        unsigned int count = 0       ;
        /// Protected Attributes ///

    public:
        /// Static Public Member Functions ///
        static classNode* get_next( const classNode* pCurrentNode ) ;
        /// Static Public Member Functions ///

    public:
        /// Public Member Functions ///
        bool         empty     ()                   const noexcept ;
        unsigned int size      ()                   const noexcept ;
        bool         isIn      ( classNode* pNode ) const          ;
        bool         isSorted  ()                   const noexcept ;
        classNode*   get_first ()                   const noexcept ;
        /// Public Member Functions ///

    public:
        /// Deletion ///
                void       deleteAllNodes () noexcept     ;
        virtual classNode* pop_front      () noexcept = 0 ;
        /// Deletion ///

    public:
        /// Validation & Print ///
        virtual void print    () const noexcept = 0 ;
        virtual bool validate () const noexcept = 0 ;
        /// Validation & Print ///

} ;