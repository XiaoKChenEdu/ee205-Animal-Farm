///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////

//#include "catDatabase.h"
#include "addCats.h"


int addCat( classCat* pNewCat ) {

    assert( validateDatabase() );
    pNewCat -> validate();

    pNewCat -> next = pCatDatabaseHeadPointer;
    pCatDatabaseHeadPointer = pNewCat;
    currentCatInDatabase++;

    return true;

}
