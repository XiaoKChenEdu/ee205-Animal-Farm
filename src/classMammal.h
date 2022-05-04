///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classMammal.h
/// @version 3.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"
#include "classAnimal.h"
#include "enumClassColor.h"


class classMammal : public classAnimal {

    protected:
    ///// Protected Attributes /////
        Color color = Color::UNKNOWN_COLOR ;
    ///// Protected Attributes /////

    public:
    ///// Static Public Attributes /////
        static const string MAMMAL_NAME ;
    ///// Static Public Attributes /////

    public:
    ///// Constructor /////
        classMammal( const classWeight::t_weight newMaxWeight,
                     const string                &NewSpecies   ) : classAnimal( newMaxWeight,
                                                                                MAMMAL_NAME,
                                                                                NewSpecies    ) {} ;
        classMammal( const Color                 newColor,
                     const Gender                newGender,
                     const classWeight::t_weight newWeight,
                     const classWeight::t_weight newMaxWeight,
                     const string                &NewSpecies   ) : classAnimal( newGender,
                                                                                newWeight,
                                                                                newMaxWeight,
                                                                                MAMMAL_NAME,
                                                                                NewSpecies    ) {
                                                                                                            setColor( newColor ) ;
                                                                                                            } ;
    ///// Constructor /////

    public:
    ///// Getter /////
        Color getColor() const noexcept ;
    ///// Getter /////

    ///// Setter /////
        void setColor( const Color newColor ) noexcept ;
    ///// Setter /////

    public:
    ///// Print /////
        void print() const noexcept override ;
    ///// Print /////

    public:
    ///// Debug Print /////
        void debugPrint() const noexcept override ;
    ///// Debug Print /////

} ;