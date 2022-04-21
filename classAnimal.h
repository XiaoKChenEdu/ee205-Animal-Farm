///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classAnimal.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"
#include "classNode.h"
#include "enumClassGender.h"
#include "classWeight.h"


class classAnimal : public classNode {

    private:
        /// Private Attributes ///
        string      species                         ;
        string      classification                  ;
        Gender      gender = Gender::UNKNOWN_GENDER ;
        classWeight weight                          ;
        /// Private Attributes ///

    public:
        /// Static Public Attributes ///
        static const string KINGDOM_NAME ;
        /// Static Public Attributes ///

    public:
        /// Constructor ///

        /// Constructor ///
} ;