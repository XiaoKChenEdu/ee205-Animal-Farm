///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classCat.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   05_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include "classCat.h"

classCat::classCat() {

    memset( catName, 0, MAX_CHAR_CAT_NAME );
    catGender  = UNKNOWN_GENDER;
    catBreed   = UNKNOWN_BREED;
    catIsFixed = false;
    catWeight  = UNKNOWN_WEIGHT;
    next       = nullptr;

}

classCat::classCat(const char* pNewCatName, const Gender newCatGender, const Breed newCatBreed, const Weight newCatWeight) {

    setName   (pNewCatName   );
    setGender ( newCatGender );
    setBreed  (newCatBreed    );
    setWeight ( newCatWeight );

    assert( validate() );

}


///////////////////////// Getter Starts Here ///////////////////////
char *classCat::getName() {

    return catName;

}

Gender classCat::getGender() {

    return catGender;

}

Breed classCat::getBreed() {

    return catBreed;

}

bool classCat::getIsFixed() {

    return catIsFixed;

}

Weight classCat::getWeight() {

    return catWeight;

}
///////////////////////// Getter Ends Here /////////////////////////


///////////////////////// Setter Starts Here ///////////////////////
void classCat::setName( const char* pNewName ) {

    validateCatName ( pNewName );
    memset          ( catName, 0, MAX_CHAR_CAT_NAME );
    strcpy          (catName, pNewName );

}

void classCat::setGender( Gender newGender ) {

    if ( catGender != UNKNOWN_GENDER ) {

        throw logic_error( "catGender was already set" );

    }

    validateCatGender( newGender );
    classCat::catGender = newGender;

}

void classCat::setBreed( Breed newBreed ) {

    if ( catBreed != UNKNOWN_BREED ) {

        throw logic_error( "catBreed was already set");

    }

    validateCatBreed( newBreed );
    classCat::catBreed = newBreed;

}

void classCat::setIsFixed() {

    classCat::catIsFixed = true;

}

void classCat::setWeight( Weight newWeight ) {

    validateCatWeight( newWeight );
    classCat::catWeight = newWeight;

}
////////////////////////// Setter Ends Here ////////////////////////


/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

/// @returns true if everything worked correctly.  false if something goes
///          wrong
bool classCat::print() {

    assert( validate() ) ;

    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;

    FORMAT_LINE( "Cat", "name"    )      << getName()   << endl ;
    FORMAT_LINE( "Cat", "gender"  )      << toString( 0, getGender() )   << endl ;
    FORMAT_LINE( "Cat", "breed"   )      << toString( 1, getBreed()  )   << endl ;
    FORMAT_LINE( "Cat", "isFixed" )      << getIsFixed()   << endl ;
    FORMAT_LINE( "Cat", "weight"  )      << getWeight() << endl ;

    return true ;

}

////////////////////////// Validation Starts Here ////////////////////////
bool classCat::validate() {

    try {

        validateCatName   ( catName   );
        validateCatGender ( catGender );
        validateCatBreed  ( catBreed   );
        validateCatWeight ( catWeight );

    } catch ( exception const& validationError ) {

        cout << validationError.what() << endl;
        return false;

    }

    return true;

}

bool classCat::validateCatName( const char* pNewName ) {

    if (pNewName == nullptr ) {

        throw invalid_argument( "catName must not be NULL" );

    }

    if (strlen(pNewName ) <= 0 ) {

        throw length_error( "catName length must be > 0" );

    }

    if (strlen (pNewName ) >= MAX_CHAR_CAT_NAME ) {

        throw length_error(  "catName length must be < MAX_CHAR_CAT_NAME" );

    }

    return true;

}

bool classCat::validateCatGender( const Gender newGender ) {

    if ( newGender == UNKNOWN_GENDER ) {

        throw invalid_argument( "catGender must be known" );

    }

    return true;

}

bool classCat::validateCatBreed( const Breed newBreed ) {

    if ( newBreed == UNKNOWN_BREED ) {

        throw invalid_argument( "catBreed must be known" );

    }

    return true;

}

bool classCat::validateCatWeight( const Weight newWeight ) {

    if (newWeight <= 0 ) {

        throw invalid_argument( "Weight must be > 0" );

    }

    return true;

}
/////////////////////////// Validation Ends Here /////////////////////////