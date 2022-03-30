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


int addCat( const char name[], const int gender, const int breed, const bool isFixed, const Weight weight, const int collar1, const int collar2, const unsigned long long license ) {
    
    //Check if CatListSize is not larger than MAX_CAT.
    if ( currentCatListSize > MAX_CAT - 1 ) {

        return catNameInvaild
        
    }

    //Check if name is vaild.
    if ( strlen( name ) <= 0 || strlen( name ) > MAX_CHAR_CAT_NAME - 1 ) {

        return catNameInvaild

    }

    //Check of duplicate names.
    for ( int i = 0; i < currentCatListSize; i++ ) {

        if ( strcmp( cat[i].catName, name ) == 0 ) {

            return catNameInvaild

        }
        
    }

    //Check for vaild weight.
    if ( weight <= 0 ) {

        return catWeightInvaild

    }

    //Check for vaild collarColor.
    if ( collar1 == collar2 ) {
    
       return catCollarInvaild
      
    }

    //Defining collarCollar1 and collarColor2 to string
    char catCollar1[HOLDER - 1];
    char catCollar2[HOLDER - 1];

    strncpy( catCollar1, toString( 2, collar1 ), HOLDER - 1 );
    strncpy( catCollar2, toString( 2, collar2 ), HOLDER - 1 );

    if ( ( strcmp( catCollar1, "null" ) == 0 ) || ( strcmp( catCollar2, "null" ) == 0 ) ) {

       return noCollarColorFound

    }
   
    //Check for duplicate collar combination
    for ( int i = 0; i < currentCatListSize; i++ ) {

       if ( ( strcmp( catCollar1, cat[i].collarColor1 ) == 0 ) && ( strcmp( catCollar2, cat[i].collarColor2 ) == 0 ) ) {

          return catCollarInvaild2

       }
    
    }

    //Checking for vaild license. ( @todo: still need fixing )

//   if ( ( license < 0 ) || ( license > 18446744073709551615 ) ) {

//       return catLicenseInvaild

//    }

    //Checking for duplicate license.
    
    for ( int i = 0; i < currentCatListSize; i++ ) {

       if ( license == cat[i].catLicense ) {

          return catLicenseInvaild2

       }

    }

    //Adding catName.
    strncpy( cat[currentCatListSize].catName, name, MAX_CHAR_CAT_NAME - 1 );

    //Adding catGender.
    strncpy( cat[currentCatListSize].catGender, toString( 0, gender ), HOLDER - 1 );   
   
    //Adding catBreed.
    strncpy( cat[currentCatListSize].catBreed,  toString( 1, breed ),  HOLDER - 1 );

    //Adding catIsFixed.
    cat[currentCatListSize].catIsFixed   = isFixed;

    //Adding catWeight.
    cat[currentCatListSize].catWeight    = weight;
    
    //Adding collarColor1 and collarColor2.
    strncpy( cat[currentCatListSize].collarColor1, catCollar1, HOLDER - 1 );
    strncpy( cat[currentCatListSize].collarColor2, catCollar2, HOLDER - 1 );
    
    //Adding catLicense
    cat[currentCatListSize].catLicense   = license;
    

    currentCatListSize++;


    return currentCatListSize;

}
