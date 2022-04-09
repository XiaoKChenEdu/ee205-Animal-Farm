///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 2.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include "catDatabase.h"


classCat* pCatDatabaseHeadPointer = nullptr;

NumCats currentCatInDatabase = 0;

bool validateDatabase() {

    for ( classCat* pI = pCatDatabaseHeadPointer; pI != nullptr; pI = pI -> next ) {

        if ( !( pI -> validate() ) ) {

            return false;

        }

    }

    return true;

}

