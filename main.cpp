///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


//#define DEBUG

#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"

#define NL           printf( "\n" );
//@todo: fix maxName bug where it Unknown Gender at the end of catName if you enter max name.
#define MAXNAME      "01234567890123456789012345678901234567890123456789"
#define LEGALMAXNAME "012345678901234567890123456789012345678901234567890"


int main() {

    deleteAllCats();
    checkListSize();

    addCat( "Loki",  MALE,           PERSIAN,    true,  8.5,  BLACK, WHITE, 101 ) ; //index = 0
    addCat( "Milo",  MALE,           MANX,       true,  7.0,  BLACK, RED,   102 ) ; //index = 1
    addCat( "Bella", FEMALE,         MAINE_COON, true,  18.2, BLACK, BLUE,  103 ) ; //index = 2
    addCat( "Kali",  FEMALE,         SHORTHAIR,  false, 9.2,  BLACK, GREEN, 104 ) ; //index = 3
    addCat( "Trin",  FEMALE,         MANX,       true,  12.2, BLACK, PINK,  105 ) ; //index = 4
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR,  false, 19.0, WHITE, BLACK, 106 ) ; //index = 5
    NL

    printAllCats();
    NL

    deleteAllCats();
    printAllCats();
    NL
	
	#ifdef DEBUG

		//Test for max name:
		addCat( MAXNAME,      UNKNOWN_GENDER, UNKNOWN_BREED, false,  1, BLACK, WHITE, 101 ); //index = 0
      addCat( LEGALMAXNAME, UNKNOWN_GENDER, UNKNOWN_BREED, false,  1, BLACK, RED,   102 ); //FAIL
		//Test for empty name:
		addCat( "",           UNKNOWN_GENDER, UNKNOWN_BREED, false,  1, BLACK, BLUE,  103 ); //FAIL
		//Test for weight:
		addCat( "TestCat0",    UNKNOWN_GENDER, UNKNOWN_BREED, false,  0, BLACK, GREEN, 104 ); //FAIL
		addCat( "TestCat1",    UNKNOWN_GENDER, UNKNOWN_BREED, false, -1, BLACK, PINK,  105 ); //FAIL
		//Test for duplicate cat:
		addCat( "RagDoll",    UNKNOWN_GENDER, RAGDOLL,       false,  1, WHITE, BLACK, 106 ); //index = 1
		addCat( "RagDoll",    UNKNOWN_GENDER, RAGDOLL,       false,  1, WHITE, RED,   107 ); //FAIL
		updateCatName( 0, "RagDoll" );                                    //FAIL
		NL

		//Test to find cat out of index:
		printCat(  1 );                                                   //FAIL
		printCat( -1 );                                                   //FAIL
		//Test to find a cat not in index:
		findCat( "Xiao" );                                                //FAIL
		NL

		//Test for updatedCatCollar:
		addCat( "TestCat2",    UNKNOWN_GENDER, UNKNOWN_BREED, false,  1, WHITE, BLUE,  108 ); //index = 2
		addCat( "TestCat3",    UNKNOWN_GENDER, UNKNOWN_BREED, false,  1, WHITE, WHITE, 109 ); //FAIL
		addCat( "TestCat4",    UNKNOWN_GENDER, UNKNOWN_BREED, false,  1, WHITE, 123,   110 ); //FAIL
		updateCatCollar2( 2, WHITE );                                                        //FAIL
		NL

		printAllCats();
		NL

	#endif

	//for testing purpose
    //int index = 0;
    //printf( "cat index = [%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f]\n color1=[%s] color2=[%s] license=[%llu]", index, cat[index].catName, cat[index].catGender, cat[index].catBreed, cat[index].catIsFixed, cat[index].catWeight, cat[index].collarColor1, cat[index].collarColor2, cat[index].catLicense );

}
