///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classSinglyLinkedList.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"
#include "classNode.h"
#include "classList.h"


class classSinglyLinkedList : public classList {

    public:
        /// Constructor ///
        classSinglyLinkedList();
        /// Constructor ///

    public:
        /// List Modifying ///
        void       push_front   ( classNode* pNewNode      )                   ;
        void       insert_after ( classNode* pCurrentNode,
                                  classNode* pNewNode      )                   ;
        classNode* pop_front    ()                           noexcept override ;
        /// List Modifying ///

    public:
        /// Validation & Print ///
        void print    () const noexcept override ;
        bool validate () const noexcept override ;
        /// Validation & Print ///

} ;