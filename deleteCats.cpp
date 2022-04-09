///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 2.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include "deleteCats.h"


bool deleteCat( classCat* pCatName ) {

    assert( pCatName != nullptr );
    assert( validateDatabase()  );

    if ( pCatName == pCatDatabaseHeadPointer ) {

        pCatDatabaseHeadPointer = pCatDatabaseHeadPointer -> next;
        delete pCatName;
        currentCatInDatabase--;

        return true;

    }

    classCat* pI = pCatDatabaseHeadPointer;
    while ( pI != nullptr ) {

        if ( pI -> next == pCatName ) {

            pI -> next = pCatName -> next;
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

    }

    currentCatInDatabase = 0;

    cout << "All Cat Has Been Deleted" << endl;

    return true;

}