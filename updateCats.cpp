///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


//#include "catDatabase.h"
#include "updateCats.h"


//Update catName.
int updateCatName( const int index, const char newName[] ) {

	//Check if enter index is out of bound.
    if ( index < 0 || index > (currentCatListSize - 1) || index > MAX_CAT - 1 ) {

        return catIndexOutofBound

    }

	//Check for vaild newName.
    if ( strlen( newName ) <=0 || strlen( newName ) > MAX_CHAR_CAT_NAME - 1 ) {

        return catNameInvaild2

    }

	//Check for duplicate name.
    for ( int i = 0; i < currentCatListSize; i++ ) {

        if ( strcmp( cat[i].catName, newName ) == 0 ) {

            return catNameInvaild2

        }

    }

    strncpy( cat[index].catName, newName, MAX_CHAR_CAT_NAME - 1 );

    return printf( "Your cat name has been Updated to [%s]\n", cat[index].catName );

}

//Update isCatFixed to true
int fixCat( const int index ) {

	//Check if enter index is out of bound.
    if ( index < 0 || index > (currentCatListSize - 1) || index > MAX_CAT - 1 ) {

        return catIndexOutofBound

    }

    cat[index].catIsFixed = true;

    return printf( "[%s] has been fixed\n", cat[index].catName );

}

//Update catWeight
int updateCatWeight( const int index, const Weight newWeight ) {

	//Check if enter index is out of bound.
    if ( index < 0 || index > (currentCatListSize - 1) || index > MAX_CAT - 1 ) {

        return catIndexOutofBound

    }

	//Check for vaild newWeight.
    if ( newWeight <= 0 ) {

        return catWeightInvaild2

    }

    cat[index].catWeight = newWeight;

    return printf( "[%s] now weight [%f]\n", cat[index].catName, cat[index].catWeight );

}

//Update collarColor1
int updateCatCollar1( int index, int collar1 ) {

	char catCollar1[HOLDER - 1];
    strncpy( catCollar1, toString( 2, collar1 ), HOLDER - 1 );
   
    //Check if enter index is out of bound.
    if ( index < 0 || index > ( currentCatListSize - 1 ) || index > MAX_CAT - 1 ) {

       return catIndexOutofBound

    }

	//Check if colorCollar1 has the same color as collarColor2.
    if ( strcmp( catCollar1, cat[index].collarColor2 ) == 0 ) {

       return catCollarInvaild3

    }

	//Check for duplicate collorColor combation.
	for ( int i = 0; i < currentCatListSize; i++ ) {

       if ( ( strcmp( catCollar1, cat[i].collarColor1 ) == 0 ) &&  ( strcmp( cat[index].collarColor2, cat[i].collarColor2 ) == 0 ) ) {

          return catCollarInvaild4

       }

    }

   strncpy( cat[index].collarColor1, catCollar1, HOLDER - 1 );

   return printf( "[%s]'s collarColor1 has been updated to [%s]\n", cat[index].catName, cat[index].collarColor1 );

}

//Update collarColor2
int updateCatCollar2( int index, int collar2 ) {

   char catCollar2[HOLDER - 1];
   strncpy( catCollar2, toString( 2, collar2 ), HOLDER - 1 );

   if ( index < 0 || index > ( currentCatListSize - 1 ) || index > MAX_CAT - 1 ) {
 
      return catIndexOutofBound

   }

   if ( strcmp( catCollar2, cat[index].collarColor1 ) == 0 ) {

      return catCollarInvaild3

   }
 
   for ( int i = 0; i < currentCatListSize; i++ ) {

      if ( ( strcmp( catCollar2, cat[i].collarColor2 ) == 0 ) &&  ( strcmp( cat[index].collarColor1, cat[i].collarColor1 ) == 0 ) ) {

         return catCollarInvaild4

      }

   }

   strncpy( cat[index].collarColor2, catCollar2, HOLDER - 1 );

   return printf( "[%s]'s collarColor1 has been updated to [%s]\n", cat[index].catName, cat[index].collarColor2 );

}

//Update catLicense
int updateLicense( int index, unsigned long long licenseNumber ) {

   for ( int i = 0; i < currentCatListSize; i++ ) {

      if ( licenseNumber == cat[i].catLicense ) {

         return catLicenseInvaild3

      }

   }

   cat[index].catLicense = licenseNumber;

   return printf( "[%s]' catLicense has been updated to [%llu]\n", cat[index].catName, cat[index].catLicense );

}
