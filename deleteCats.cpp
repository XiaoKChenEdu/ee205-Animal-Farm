///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include "deleteCats.h"


bool deleteCat( classCat* pCatName ) {

    assert( pCatName != nullptr );
    assert( validateDatabase()  );


    classCat* pI = pCatDatabaseHeadPointer;
    while ( pI != nullptr ) {

        if ( pI == pCatName ) {

            pI = pI -> next;
            delete pCatName;
            currentCatInDatabase--;

            assert( validateDatabase() );

            return true;

        }

        pI = pI -> next;

    }

    assert( validateDatabase() );

    throw invalid_argument( "Unable to delete cat, cat not found" );

}

bool deleteAllCats() {

    while ( pCatDatabaseHeadPointer != nullptr ) {

        deleteCat( pCatDatabaseHeadPointer );
        pCatDatabaseHeadPointer = pCatDatabaseHeadPointer -> next;

    }

    return true;

}