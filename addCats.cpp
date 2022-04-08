///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////

//#include "catDatabase.h"
#include "addCats.h"


bool addCat( classCat* pNewCat ) {

    assert( validateDatabase() );
    pNewCat -> validate();

    pNewCat -> next = pCatDatabaseHeadPointer;
    pCatDatabaseHeadPointer = pNewCat;
    currentCatInDatabase++;

    return true;

}
