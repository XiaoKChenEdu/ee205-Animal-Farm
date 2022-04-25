///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classMammal.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include "classMammal.h"
#include "config.h"


/////////////// Static Public Attributes ///////////////
const string classMammal::MAMMAL_NAME = "Mammilian" ;
/////////////// Static Public Attributes ///////////////



//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Getters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
Color classMammal::getColor() const noexcept {

    return color ;

}
//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Getters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Setters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classMammal::setColor(const Color newColor) noexcept {

    color = newColor ;

}
//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Setters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// Print ////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classMammal::print() const noexcept {

    classAnimal::print() ;

    FORMAT_LINE_FOR_PRINT("Mammal", "Color" ) << color << endl ;

}
//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// Print ////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Debug Print //////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classMammal::debugPrint() const noexcept {

    classAnimal::debugPrint() ;

    FORMAT_LINE_FOR_DEBUG_PRINT( "Mammal", "Color" ) << color << endl ;

}
//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Debug Print //////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////