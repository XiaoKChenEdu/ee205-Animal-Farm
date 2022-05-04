///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file debug.cpp
/// @version 3.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   22_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include "debug.h"
#include "../src/classSinglyLinkedList.h"
#include "../src/classCat.h"


//////////////////////////////////////////////////////////////////////////////////////
///////////////////// Debug for classList & classSinglyLinkedList ////////////////////
//////////////////////////////////////////////////////////////////////////////////////

///// Checking List Property /////
void checkListProperty() {

    classSinglyLinkedList TestDB ;

    ///// checking if list is empty & list count & isSorted /////
        cout << " @TestDB.empty()"      << endl ;
        cout << S4 << TestDB.empty()    << endl ;
        cout << " @TestDB.size()"       << endl ;
        cout << S4 << TestDB.size()     << endl ;
        cout << " @TestDB.isSorted()"   << endl ;
        cout << S4 << TestDB.isSorted() << endl ;

        TestDB.push_front( new classCat( "Test0" ) ) ;
        TestDB.push_front( new classCat( "Test1" ) ) ;

        cout << " @TestDB.empty()"      << endl ;
        cout << S4 << TestDB.empty()    << endl ;
        cout << " @TestDB.size()"       << endl ;
        cout << S4 << TestDB.size()     << endl ;
        cout << " @TestDB.isSorted()"   << endl ;
        cout << S4 << TestDB.isSorted() << endl ;

        TestDB.pop_front() ;
        classNode* pTest0 = TestDB.get_first() ;
        TestDB.insert_after( pTest0, new classCat( "Test1" ) ) ;

        cout << " @TestDB.isSorted()"   << endl ;
        cout << S4 << TestDB.isSorted() << endl ;
    ///// checking if list is empty & list count /////

    ///// checking if a node is in list /////
        ///// SUCCEED /////
        cout << " @TestDB.isIn( pTest0 )"   << endl ;
        cout << S4 << TestDB.isIn( pTest0 ) << endl ;

        classNode* pNotIn = new classCat( "NotIn" ) ;
        cout << " @TestDB.isIn( pNotin )"   << endl ;
        cout << S4 << TestDB.isIn( pNotIn ) << endl ;
        ///// SUCCEED /////

        ///// FAILS /////
        try {

            TestDB.isIn( nullptr ) ;
            cout << " @TestDB.isIn( nullptr ) ;" << endl ;
            cout << S4 << "SUCCEED"              << endl ;

        } catch ( const exception &Error ) {

            cout << " @TestDB.isIn( nullptr ) ;" << endl ;
            cout << S4 << Error.what()           << endl ;

        }
        ///// FAILS /////
    ///// checking if a node is in list /////

}
///// Checking List Property /////

///// Checking List Modifying /////
void checkListModifying() {

    classSinglyLinkedList TestDB ;

    ///// push_front test /////
        ///// SUCCEED /////
        try {

            TestDB.push_front( new classCat( "Test0" ) ) ;
            cout << " @TestDB.push_front( new classCat( \"Test0\" ) ) ;" << endl ;
            cout << S4 << "SUCCEED"                                      << endl ;

        } catch ( const exception &Error ) {

            cout << " @TestDB.push_front( new classCat( \"Test0\" ) ) ;" << endl ;
            cout << S4 << Error.what()                                   << endl ;

        }
        ///// SUCCEED /////

        ///// FAILS /////
        try {

            classNode* pTest0 = TestDB.get_first() ;
            TestDB.push_front( pTest0 ) ;
            cout << " @TestDB.push_front( pTest0 ) ;" << endl ;
            cout << S4 << "SUCCEED"                   << endl ;

        } catch ( const exception &Error ) {

            cout << " @TestDB.push_front( pTest0 ) ;" << endl ;
            cout << S4 << Error.what()                << endl ;

        }

        try {

            TestDB.push_front( nullptr ) ;
            cout << " @TestDB.push_front( nullptr ) ;" << endl ;
            cout << S4 <<" SUCCEED"                    << endl ;

        } catch ( const exception &Error ) {

            cout << " @TestDB.push_front( nullptr ) ;" << endl ;
            cout << S4 << Error.what()                 << endl ;

        }

        try {

            TestDB.push_front( new classCat( "" ) ) ;
            cout << " @TestDB.push_front( new classCat( \"\" ) ) ;" << endl ;
            cout << S4 << "SUCCEED"                                 << endl ;

        } catch ( const exception &Error ) {

            cout << " @TestDB.push_front( new classCat( \"\" ) ) ;" << endl ;
            cout << S4 << Error.what()                              << endl ;

        }
        ///// FAILS /////
    ///// push_front test /////

    ///// insert_after test /////
        ///// SUCCEED /////
        try {

            classNode* pTest0 = TestDB.get_first() ;
            TestDB.insert_after( pTest0, new classCat( "Test1" ) ) ;
            cout << " @TestDB.insert_after( pTest0, new classCat( \"Test1\" ) ) ;" << endl ;
            cout << S4 << "SUCCEED"                                                << endl ;

        } catch ( const exception &Error ) {

            cout << " @TestDB.insert_after( pTest0, new classCat( \"Test1\" ) ) ;" << endl ;
            cout << S4 << Error.what()                                             << endl ;

        }
        ///// SUCCEED /////

        ///// FAILS /////
        try {

            TestDB.insert_after( nullptr, new classCat( "TestFail" ) ) ;
            cout << " @TestDB.insert_after( nullptr, new classCat( \"TestFail\" ) ) ;" << endl ;
            cout << S4 << "SUCCEED"                                                    << endl ;

        } catch ( const exception &Error ) {

            cout << " @TestDB.insert_after( nullptr, new classCat( \"TestFail\" ) ) ;" << endl ;
            cout << S4 << Error.what()                                                 << endl ;

        }

        try {

            classNode* pTest = new classCat("Test" ) ;
            TestDB.insert_after( pTest, new classCat( "TestFail" ) ) ;
            cout << " @TestDB.insert_after( pTest, new classCat( \"TestFail\" ) ) ;" << endl ;
            cout << S4 << "SUCCEED"                                                  << endl ;

        } catch ( const exception &Error ) {

            cout << " @TestDB.insert_after( pTest, new classCat( \"TestFail\" ) ) ;" << endl ;
            cout << S4 << Error.what()                                               << endl ;

        }

        try {

            classNode* pTest0 = TestDB.get_first ()         ;
            classNode* pTest1 = TestDB.get_next  ( pTest0 ) ;
            TestDB.insert_after( pTest0, pTest1 ) ;
            cout << " @TestDB.insert_after( pTest0, pTest1 ) ;" << endl ;
            cout << S4 << "SUCCEED"                             << endl ;

        } catch ( const exception &Error ) {

            cout << " @TestDB.insert_after( pTest0, pTest1 ) ;" << endl ;
            cout << S4 << Error.what()                          << endl ;

        }
        ///// FAILS /////
    ///// insert_after test /////
}
///// Checking List Modifying /////

//////////////////////////////////////////////////////////////////////////////////////
///////////////////// Debug for classList & classSinglyLinkedList ////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Debug for classAnimal ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

///// Checking Constructor /////
void checkClassAnimalConstructor() {

    class classAnimalTest : public classAnimal {

        public:
            classAnimalTest( const classWeight::t_weight newMaxWeight, const string &NewClassification, const string &NewSpecies ) : classAnimal( newMaxWeight, NewClassification, NewSpecies ) {} ;

            classAnimalTest( const Gender newGender, const classWeight::t_weight newWeight, const classWeight::t_weight newMaxWeight, const string &NewClassification, const string &NewSpecies ) : classAnimal( newGender, newWeight, newMaxWeight, NewClassification, NewSpecies ) {} ;

            string speak() const noexcept override {

                return "Test" ;

            }

    } ;

    ///// test for the first constructor /////
        classAnimalTest Test0( 10.0, "TestClassification0", "TestSpecies0" ) ;
        cout << R"( @classAnimalTest Test0( 10.0, "TestClassification0", "TestSpecies0" ) ;)" << endl ;
        Test0.setWeight  ( 1.0 ) ;
        Test0.debugPrint ()      ;
    ///// test for the first constructor /////

    ///// test for the second constructor /////
        classAnimalTest Test1( Gender::MALE, 2.0, 20.0, "TestClassification1", "TestSpecies1" ) ;
        cout << R"( @classAnimalTest Test1( Gender::MALE, 2.0, 20.0, "TestClassification1", "TestSpecies1" ) ;)" << endl ;
        Test1.debugPrint() ;
    ///// test for the second constructor /////

}
///// Checking Constructor /////

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Debug for classAnimal ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// Debug for classCat /////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

///// Checking Constructor /////
void checkClassCatConstructor() {

    ///// test for the first constructor /////
        classCat TestCat0( "TestCat0" ) ;
        cout << R"( @classCat TestCat0( "TestCat0" ) ;)" << endl ;
        TestCat0.debugPrint() ;
    ///// test for the first constructor /////

    ///// test for the second constructor /////
        classCat TestCat1( "TestCat1", Color::BLACK, true, Gender::MALE, 10.0 ) ;
        cout << R"( @classCat TestCat1( "TestCat1", Color::BLACK, true, Gender::MALE, 10.0 ) ;)" << endl ;
        TestCat1.debugPrint() ;
    ///// test for the second constructor /////

}
///// Checking Constructor /////

//////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// Debug for classCat /////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Debug for classWeight ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

///// Checking Constructor /////
void checkClassWeightConstructor() {

    ///// test for the first constructor /////
        classWeight testConstructor1;
        cout << " @classWeight testConstructor1;" << endl ;
        testConstructor1.debugPrint();
    ///// test for the first constructor /////

    ///// test for the second constructor /////
        classWeight testConstructor2( 10.0 ) ;
        cout << " @classWeight testConstructor2( 10.0 ) ;" << endl ;
        testConstructor2.debugPrint();
    ///// test for the second constructor /////

    ///// test for the third constructor /////
        classWeight testConstructor3( classWeight::KILO ) ;
        cout << " @classWeight testConstructor3( classWeight::KILO ) ;" << endl ;
        testConstructor3.debugPrint();
    ///// test for the third constructor /////

    ///// test for the four constructor /////
        classWeight testConstructor4( 10.0, classWeight::SLUG ) ;
        cout << " @classWeight testConstructor4( 10.0, classWeight::SLUG ) ;" << endl ;
        testConstructor4.debugPrint();
    ///// test for the four constructor /////

    ///// test for the fifth constructor /////
        classWeight testConstructor5( 10.0, 100.0 ) ;
        cout << " @classWeight testConstructor5( 10.0, 100.0 ) ;" << endl ;
        testConstructor5.debugPrint();
    ///// test for the fifth constructor /////

    ///// test for the sixth constructor /////
        classWeight testConstructor6( classWeight::KILO, 100.0 ) ;
        cout << " @classWeight testConstructor6( classWeight::KILO, 100.0 ) ;" << endl ;
        testConstructor6.debugPrint();
    ///// test for the sixth constructor /////

    ///// test for the seventh constructor /////
        classWeight testConstructor7( 10.0, classWeight::SLUG, 100.0 ) ;
        cout << " @classWeight testConstructor7( 10.0, classWeight::SLUG, 100.0 ) ;" << endl ;
        testConstructor7.debugPrint();
    ///// test for the seventh constructor /////

}
///// Checking Constructor /////



///// Checking Getters /////
void checkClassWeightGetters() {

    classWeight unknownWeight ;
    classWeight knownWeight( 10.0, classWeight::KILO, 100.0 ) ;

    ///// False and -1 /////
    cout << " @unknownWeight.isWeightKnown()"       << endl ;
    cout << S4 << unknownWeight.isWeightKnown()     << endl ;

    cout << " @unknownWeight.hasMaxWeight()"        << endl ;
    cout << S4 << unknownWeight.hasMaxWeight()      << endl ;

    cout << " @unknownWeight.getWeight()"           << endl ;
    cout << S4 << unknownWeight.getWeight()         << endl ;

    cout << " @unknownWeight.unknownWeight.getWeight( classWeight::KILO )"   << endl ;
    cout << S4 << unknownWeight.getWeight( classWeight::KILO )     << endl ;

    cout << " @unknownWeight.getMaxWeight()"        << endl ;
    cout << S4 << unknownWeight.getMaxWeight()      << endl ;

    cout << " @unknownWeight.getWeightUnit()"       << endl ;
    cout << S4 << unknownWeight.getWeightUnit()     << endl ;
    ///// False and -1 /////

    ///// True /////
    cout << " @knownWeight.isWeightKnown()"       << endl ;
    cout << S4 << knownWeight.isWeightKnown()     << endl ;

    cout << " @knownWeight.hasMaxWeight()"        << endl ;
    cout << S4 << knownWeight.hasMaxWeight()      << endl ;

    cout << " @knownWeight.getWeight()"           << endl ;
    cout << S4 << knownWeight.getWeight()         << endl ;

    cout << " @knownWeight.unknownWeight.getWeight( classWeight::SLUG )"   << endl ;
    cout << S4 << knownWeight.getWeight( classWeight::SLUG )     << endl ;

    cout << " @knownWeight.getMaxWeight()"        << endl ;
    cout << S4 << knownWeight.getMaxWeight()      << endl ;

    cout << " @knownWeight.getWeightUnit()"       << endl ;
    cout << S4 << knownWeight.getWeightUnit()     << endl ;
    ///// True /////

}
///// Checking Getters /////



///// Checking Setters /////
void checkClassWeightSetters() {

    classWeight defaultWeight;

    ///// Fails /////
    try {

        defaultWeight.setWeight( -1 ) ;
        cout << " @defaultWeight.setWeight( -1 ) ;" << endl ;
        cout << S4 << "SUCCEED"                     << endl ;

    } catch ( const exception &Error ) {

        cout << " @defaultWeight.setWeight( -1 ) ;" << endl ;
        cout << S4 << Error.what()                  << endl ;

    }

    try {

        defaultWeight.setWeight( -1, classWeight::KILO ) ;
        cout << " @defaultWeight.setWeight( -1, classWeight::KILO ) ;" << endl ;
        cout << S4 << "SUCCEED"                                        << endl ;

    } catch ( const exception &Error ) {

        cout << " @defaultWeight.setWeight( -1, classWeight::KILO ) ;" << endl ;
        cout << S4 << Error.what()                                     << endl ;

    }
    ///// Fails /////

    ///// Succeeds /////
    try {

        defaultWeight.setWeight( 1 ) ;
        cout << " @defaultWeight.setWeight( 1 ) ;" << endl ;
        cout << S4 << "SUCCEED"                    << endl ;

    } catch ( const exception &Error ) {

        cout << " @defaultWeight.setWeight( 1 ) ;" << endl ;
        cout << S4 << Error.what()                 << endl ;

    }

    try {

        defaultWeight.setWeight( 1, classWeight::KILO ) ;
        cout << " @defaultWeight.setWeight( 1, classWeight::KILO ) ;" << endl ;
        cout << S4 << "SUCCEED"                                       << endl ;

    } catch ( const exception &Error ) {

        cout << " @defaultWeight.setWeight( 1, classWeight::KILO ) ;" << endl ;
        cout << S4 << Error.what()                                    << endl ;

    }
    ///// Succeeds /////

}
///// Checking Setters /////



///// Checking Equality Operator /////
void checkClassWeightEqualityOperator() {

    classWeight testWeight1True( 0.453592, classWeight::KILO  ) ;
    classWeight testWeight2True( 1.0,      classWeight::POUND ) ;

    classWeight testWeight1False( 1.0, classWeight::SLUG ) ;
    classWeight testWeight2False( 1.0, classWeight::KILO ) ;

    bool checkEqualityTrue  = ( testWeight1True  == testWeight2True  ) ;
    bool checkEqualityFalse = ( testWeight1False == testWeight2False ) ;

    //True Statement
    cout << " @bool checkEqualityTrue  = ( testWeight1True  == testWeight2True  ) ;" << endl ;
    cout << S4 << checkEqualityTrue                                                  << endl ;

    //False Statement
    cout << " @bool checkEqualityFalse = ( testWeight1False == testWeight2False ) ;" << endl ;
    cout << S4 << checkEqualityFalse                                                 << endl ;

}
///// Checking Equality Operator /////



///// Checking LessThan Operator /////
void checkClassWeightLessThanOperator() {

    classWeight testWeight1More( 1.0,      classWeight::KILO  ) ;
    classWeight testWeight2Less( 1.0,      classWeight::POUND ) ;


    bool checkLessThanTrue  = ( testWeight2Less < testWeight1More ) ;
    bool checkLessThanFalse = ( testWeight1More < testWeight2Less ) ;

    //True Statement
    cout << " @bool checkLessThanTrue  = ( testWeight2Less < testWeight1More ) ;" << endl ;
    cout << S4 << checkLessThanTrue                                               << endl ;

    //False Statement
    cout << " @bool checkLessThanFalse = ( testWeight1More < testWeight2Less ) ;" << endl ;
    cout << S4 << checkLessThanFalse                                              << endl ;

}
///// Checking LessThan Operator /////



///// Checking AddTo Operator /////
//Only works with the same unit.
void checkClassWeightAddToOperator() {

    classWeight testWeight( 1.0, classWeight::POUND, 10.0 ) ;

    //Adding weight over it's maxWeight, FAILS
    try {

        testWeight += 10.0 ;
        cout << " @testWeight += 10.0 ;" << endl ;
        cout << S4 << "SUCCEED"          << endl ;

    } catch ( exception const &Error ) {

        cout << " @testWeight += 10.0 ;" << endl ;
        cout << S4 << Error.what()       << endl ;

    }

    //Adding weight under it's maxWeight, SUCCEED
    try {

        testWeight += 9.0 ;
        cout << " @testWeight += 9.0 ;" << endl ;
        cout << S4 << "SUCCEED"         << endl ;

    } catch ( exception const &Error ) {

        cout << " @testWeight += 9.0 ;" << endl ;
        cout << S4 << Error.what()      << endl ;

    }

}
///// Checking AddTo Operator /////

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Debug for classWeight ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////