///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
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
#include "deleteCats.h"

#define NL           cout << endl;

#define MAXNAME        "0123456789012345678901234567890123456789012345678"
#define ILLEGALMAXNAME "01234567890123456789012345678901234567890123456789"


int main() {

    cout << "---- Starting Program Animal Farm ----" << endl;
    NL
    ///// Adding Valid Cat /////
    addCat( new classCat( "Loki",  MALE,   PERSIAN,    1.0 ) );
    addCat( new classCat( "Milo",  MALE,   MANX,       1.1 ) );
    addCat( new classCat( "Bella", FEMALE, MAINE_COON, 1.3 ) );
    addCat( new classCat( "Kali",  FEMALE, SHORTHAIR,  1.3 ) );
    addCat( new classCat( "Trin",  FEMALE, MANX,       1.4 ) );
    addCat( new classCat( "Chili", MALE,   SHORTHAIR,  1.5 ) );

    printAllCats();
    NL
    classCat* Kali = findCatByName( "Kali" );
    deleteCat( Kali );
    //deleteAllCats();
    //addCat( new classCat ( "Hi", MALE, RAGDOLL, 1.0 ) );
    printAllCats();

    //////////////////////// Debug Starts Here ////////////////////////
    #ifdef DEBUG
    {
        NL NL
        cout << "---- Debugging Starts Here ----" << endl;
        NL

        classCat testCat = classCat();

        assert( strcmp( testCat.getName(), "" ) == 0 );
        assert( testCat.getGender() == UNKNOWN_GENDER );
        assert( testCat.getBreed() == UNKNOWN_BREED );
        assert( testCat.getIsFixed() == false );
        assert( testCat.getWeight() == UNKNOWN_WEIGHT );
        assert( !testCat.validate() );

        /// Test for name ///
        try{

            //Setting name to nullptr = FAILS
            testCat.setName( nullptr );
            NL
            cout << " @testCat.setName( nullptr );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setName( nullptr );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        try{

            //Setting name to "" = FAILS
            testCat.setName( "" );
            NL
            cout << " @testCat.setName( "" );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setName( \"\" );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        try{

            //Setting name to "A" = SUCCEED
            testCat.setName( "A" );
            NL
            cout << " @testCat.setName( \"A\" );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setName( \"A\" );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        try{

            //Setting name to MAXNAME = SUCCEED
            testCat.setName( MAXNAME );
            NL
            cout << " @testCat.setName( MAXNAME );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setName( MAXNAME );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        try{

            //Setting name to ILLEGALMAXNAME = FAILS
            testCat.setName( ILLEGALMAXNAME );
            NL
            cout << " @testCat.setName( ILLEGALMAXNAME );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setName( ILLEGALMAXNAME );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        /// Test for gender ///
        try{

            //Setting gender to MALE = SUCCEED
            testCat.setGender( MALE );
            NL
            cout << " @testCat.setGender( MALE );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setGender( Male );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        try{

            //Setting gender to FEMALE = FAILS
            testCat.setGender( FEMALE );
            NL
            cout << "  @testCat.setGender( FEMALE );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setGender( FEMALE );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        /// Test for breed ///
        try{

            //Setting breed to RAGDOLL = SUCCEED
            testCat.setBreed( RAGDOLL );
            NL
            cout << " @testCat.setBreed( RAGDOLL );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setBreed( RAGDOLL );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        try{

            //Setting breed to UNKNOWN_BREED = FAILS
            testCat.setBreed( UNKNOWN_BREED );
            NL
            cout << " @testCat.setBreed( UNKNOWN_BREED );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setBreed( UNKNOWN_BREED );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        /// Test for fixed ///
        try{

            testCat.getIsFixed();
            //Setting IsFixed to true = SUCCEED
            testCat.setIsFixed();
            NL
            cout << " @testCat.setIsFixed();" << endl;
            cout << "    SUCCEED" << endl;
            NL
            //Setting IsFixed to true again = FAILS
            testCat.setIsFixed();
            NL
            cout << " @testCat.setIsFixed();" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setIsFixed();" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        /// Test for weight ///
        try{

            //Setting weight to 0 = FAILS
            testCat.setWeight( 0 );
            NL
            cout << " @testCat.setWeight( 0 );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setWeight( 0 );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        try{

            //Setting weight to 1/1024 = SUCCEED
            testCat.setWeight( 1.0/1024 );
            NL
            cout << " @testCat.setWeight( 1.0/1024 );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.setWeight( 1.0/1024 );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        /// Test for testCat validation after all the changes ///
        try{

            testCat.validate();
            NL
            cout << " @testCat.validate();" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @testCat.validate();" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        /// Test for creating a classCat() using combination of UNKNOWN_GENDER, UNKNOWN_BREED or UNKNOWN_WEIGHT ///
        try{

            //Creating a cat with UNKNOWN_GENDER = FAILS
            addCat( new classCat( "RagDoll", MALE, RAGDOLL, 1.0 ) );
            NL
            cout << " @addCat( new classCat( \"RagDoll\", UNKNOWN_GENDER, RAGDOLL, 1.0 ) );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @addCat( new classCat( \"RagDoll\", UNKNOWN_GENDER, RAGDOLL, 1.0 ) );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        printAllCats();

        try{

            //Creating a cat with UNKNOWN_BREED = FAILS
            addCat( new classCat( "RagDoll", MALE, UNKNOWN_BREED, 1.0 ) );
            NL
            cout << " @addCat( new classCat( \"RagDoll\", MALE, UNKNOWN_BREED, 1.0 ) );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @addCat( new classCat( \"RagDoll\", MALE, UNKNOWN_BREED, 1.0 ) );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        try{

            //Creating a cat with UNKNOWN_WEIGHT = FAILS
            addCat( new classCat( "RagDoll", MALE, RAGDOLL, UNKNOWN_WEIGHT ) );
            NL
            cout << " @addCat( new classCat( \"RagDoll\", MALE, RAGDOLL, UNKNOWN_WEIGHT ) );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @addCat( new classCat( \"RagDoll\", MALE, RAGDOLL, UNKNOWN_WEIGHT ) );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        /// Test for finding Cat & Deleting Cat
        addCat( new classCat( "RagDoll", MALE, RAGDOLL, 1.0 ) );

        try{

            //Trying to find a Cat with the name "RagDoll" = SUCCEED
            classCat* RagDoll = findCatByName( "RagDoll" );
            NL
            cout << " @classCat* RagDoll = findCatByName( \"RagDoll\" );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @classCat* RagDoll = findCatByName( \"RagDoll\" );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        try{

            //Trying to find a Cat with the name "Kali" = FAILS
            classCat* Kali = findCatByName( "Kali" );
            NL
            cout << " @classCat* Kali = findCatByName( \"Kali\" );" << endl;
            cout << "    SUCCEED" << endl;
            NL

        } catch ( exception const &validationError ) {

            NL
            cout << " @classCat* Kali = findCatByName( \"Kali\" );" << endl;
            cout << "    " << validationError.what() << endl;
            NL

        }

        NL
        cout << "----- Debugging Ends Here -----" << endl;
        NL NL

    }
    #endif
    ///////////////////////// Debug Ends Here /////////////////////////

    NL
    cout << "----- Ending Program Animal Farm -----" << endl;

}

