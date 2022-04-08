///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include "addCats.h"

classCat* findCatByName( const char* pCatName ) {

    assert( classCat().validateCatName( pCatName ) );

    for ( classCat* pI = pCatDatabaseHeadPointer; pI != nullptr; pI = pI -> next ) {

        if ( strcmp( pCatName, pI -> getName() ) == 0 ) {

            return pI;

        }

    }

    return nullptr;

}

bool printAllCats() {

    assert( validateDatabase() );

    for ( classCat* pI = pCatDatabaseHeadPointer; pI != nullptr; pI = pI -> next ) {

        pI->print();

    }

    return true;

}