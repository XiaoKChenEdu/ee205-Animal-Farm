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

//#include "catDatabase.h"
#include "deleteCats.h"


void deleteAllCats() {

    for (int i = 0; i < MAX_CAT; i++ ) {

        strncpy( cat[i].catName,   "", MAX_CHAR_CAT_NAME );
        strncpy( cat[i].catGender, "", MAX_CHAR_CAT_NAME );
        strncpy( cat[i].catBreed,  "", MAX_CHAR_CAT_NAME );
        cat[i].catIsFixed   = 0;
        cat[i].catWeight    = 0;
        strncpy( cat[i].collarColor1, "", HOLDER );
        strncpy( cat[i].collarColor2, "", HOLDER );
        cat[i].catLicense   = 0;

    }

    currentCatListSize      = 0; 

}

int deleteCat( const int index ) {
	
	//Check if enter index is out of bound.
    if ( index < 0 || index > ( currentCatListSize - 1 ) || index > MAX_CAT ) {

        return printf( "No cat found at index = [%d]\n", index );

    }

    for ( int i = index; i < currentCatListSize; i++ ) {

        strncpy( cat[i].catName,   cat[i+1].catName,   MAX_CHAR_CAT_NAME );
        strncpy( cat[i].catGender, cat[i+1].catGender, MAX_CHAR_CAT_NAME );
        strncpy( cat[i].catBreed,  cat[i+1].catBreed,  MAX_CHAR_CAT_NAME );
        cat[i].catIsFixed  = cat[i+1].catIsFixed;
        cat[i].catWeight   = cat[i+1].catWeight;
        strncpy( cat[i].collarColor1, cat[i+1].collarColor1, HOLDER );
        strncpy( cat[i].collarColor2, cat[i+1].collarColor2, HOLDER );
        cat[i].catLicense  = cat[i+1].catLicense;

    }

    currentCatListSize--;

    return currentCatListSize;

}
