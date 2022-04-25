/////////////////////////////////////////////////////////////////////////////////
/////         University of Hawaii, College of Engineering
///// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
/////
///// @file classCat.cpp
///// @version 3.0
/////
///// @author Xiaokang Chen <xiaokang@hawaii.edu>
///// @date   05_Apr_2022
/////////////////////////////////////////////////////////////////////////////////


#include "classCat.h"


/////////////// Static Public Attributes ///////////////
const string                classCat::SPECIES_NAME = "Felis Catus" ;
const classWeight::t_weight classCat::MAX_WEIGHT   = 40            ;
/////////////// Static Public Attributes ///////////////



//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Constructors ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
classCat::classCat( const string &NewName ) : classMammal( MAX_WEIGHT, SPECIES_NAME ) {

    if ( !validateName( NewName ) ) {

        throw logic_error( PROGRAM_NAME ": Your cat needs a proper name" ) ;

    }

    name = NewName ;

    classCat::validate() ;

}

classCat::classCat( const string &NewName, const Color newColor, const bool newIsFixed, const Gender newGender, const classWeight::t_weight newWeight ) : classMammal( newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME )  {

    if ( !validateName( NewName ) ) {

        throw logic_error( PROGRAM_NAME ": Your cat needs a proper name" ) ;

    }

    name       = NewName    ;
    isCatFixed = newIsFixed ;

    classCat::validate() ;

}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Constructors ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Getters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
string classCat::getName() const noexcept {

    return name ;

}

bool classCat::isFixed() const noexcept {

    return isCatFixed ;

}
//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Getters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Setters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classCat::setName( const string &NewName ) {

    if ( !validateName( NewName ) ) {

        throw logic_error( PROGRAM_NAME ": Your cat needs a proper name" ) ;

    }

    name = NewName ;

}

void classCat::fixCat() noexcept {

    classCat::isCatFixed = true ;

}
//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Setters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
////////////////////////// Static Public Member Functions ////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
bool classCat::validateName( const string &NewName ) {

    if ( NewName.empty() ) {

        return false ;

    }

    return true ;

}
//////////////////////////////////////////////////////////////////////////////////////
////////////////////////// Static Public Member Functions ////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Validation & Print //////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
string classCat::speak() const noexcept {

    return "Meow" ;

}

void classCat::print() const noexcept {

    classMammal::print() ;

    FORMAT_LINE_FOR_PRINT("Cat", "Name"    ) << getName() << endl ;
    FORMAT_LINE_FOR_PRINT("Cat", "IsFixed" ) << isFixed() << endl ;

}

bool classCat::validate() const noexcept {

    assert( classAnimal::validate() )   ;
    assert( validateName( getName() ) ) ;

    return true ;

}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Validation & Print //////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Debug Print //////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classCat::debugPrint() const noexcept {

    classMammal::debugPrint() ;

    FORMAT_LINE_FOR_DEBUG_PRINT( "Cat", "Name"    ) << getName() << endl ;
    FORMAT_LINE_FOR_DEBUG_PRINT( "Cat", "IsFixed" ) << isFixed() << endl ;

}
//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Debug Print //////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////