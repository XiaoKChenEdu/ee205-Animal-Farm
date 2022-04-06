///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
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

