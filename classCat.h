/////////////////////////////////////////////////////////////////////////////////
/////         University of Hawaii, College of Engineering
///// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
/////
///// @file classCat.h
///// @version 3.0
/////
///// @author Xiaokang Chen <xiaokang@hawaii.edu>
///// @date   05_Apr_2022
/////////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"
#include "classMammal.h"

class classCat : public classMammal {

    protected:
        /// Protected Attributes ///
        string name       ;
        bool   isCatFixed = false ;
        /// Protected Attributes ///

    public:
        /// Static Public Attributes ///
        static const string                SPECIES_NAME ;
        static const classWeight::t_weight MAX_WEIGHT   ;
        /// Static Public Attributes ///

    public:
        /// Constructor ///
        classCat( const string                &NewName    ) ;
        classCat( const string                &NewName,
                  const Color                 newColor,
                  const bool                  newIsFixed,
                  const Gender                newGender,
                  const classWeight::t_weight newWeight   ) ;
        /// Constructor ///


    public:
        /// Getters ///
        string getName() const noexcept ;
        bool   isFixed() const noexcept ;
        /// Getters ///

        /// Setters ///
        void setName ( const string &NewName )          ;
        void fixCat  ()                        noexcept ;
        /// Setters ///

    public:
        /// Static Public Member Function ///
        static bool validateName( const string &NewName ) ;
        /// Static Public Member Function ///

    public:
        /// Validation & Print ///
        string speak    () const noexcept override ;
        void   print    () const noexcept override ;
        bool   validate () const noexcept override ;
        /// Validation & Print ///

    public:
        /// Debug Print ///
        void debugPrint() const noexcept override ;
        /// Debug Print ///

};