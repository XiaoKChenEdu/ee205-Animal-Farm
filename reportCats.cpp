///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


//#include "catDatabase.h"
#include "addCats.h"


int printCat( const int index ) {

	//Check if enter index is out of bound
    if ( index < 0 || index > (currentCatListSize - 1) || index > MAX_CAT) {

        return printf( "Bad Cat [%d]\n", index );

    }

    return printf( "cat index = [%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] color1=[%s] color2=[%s] license=[%llu]\n", index, cat[index].catName, cat[index].catGender, cat[index].catBreed, cat[index].catIsFixed, cat[index].catWeight, cat[index].collarColor1, cat[index].collarColor2, cat[index].catLicense );

}

void printAllCats() {
	
	//Check if you have cat in your database
    if ( currentCatListSize == 0 ) {

        printf( "You have no cat in your database, go add some cats!!!\n" );
    }

    for ( int i = 0; i < currentCatListSize; i++ ) {

        printCat(i);

    }

}

int findCat( const char name[] ) {

    for ( int i = 0; i < currentCatListSize; i++ ) {

        if ( strcmp( cat[i].catName, name ) == 0 ) {

            printf( "[%s] is at Index = [%d]\n", name, i );
            return i;

        }

    }

    return printf( "[%s] not found\n", name );

}
