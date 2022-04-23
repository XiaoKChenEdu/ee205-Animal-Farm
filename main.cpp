///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 2.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include "config.h"
#include "classSinglyLinkedList.h"
#include "classCat.h"
#include "debug.h"

#define DEBUG
#define NL           cout << endl;


int main() {

    cout << "---- Starting Program Animal Farm ----" << endl;
    NL

    classSinglyLinkedList catDB;

    catDB.push_front( new classCat( "Loki",  Color::WHITE, true, Gender::MALE,   1.0 ) ) ;
    catDB.push_front( new classCat( "Milo",  Color::BLACK, true, Gender::MALE,   1.1 ) ) ;
    catDB.push_front( new classCat( "Bella", Color::BROWN, true, Gender::FEMALE, 1.2 ) ) ;
    catDB.push_front( new classCat( "Kali",  Color::BLUE,  true, Gender::FEMALE, 1.3 ) ) ;
    catDB.push_front( new classCat( "Trin",  Color::WHITE, true, Gender::FEMALE, 1.4 ) ) ;

    catDB.insert_after( catDB.get_first(), new classCat( "Chili", Color::RED, true, Gender::MALE, 1.5 ) ) ;

    for ( classAnimal* pI = (classAnimal*)catDB.get_first(); pI != nullptr; pI = (classAnimal*)classList::get_next( (classNode*)pI ) ) {

        cout << pI -> speak() ;

    }

    NL NL

    catDB.validate       () ;
    catDB.print          () ;
    catDB.deleteAllNodes () ;

    NL

    catDB.print          () ;

    //////////////////////// Debug Starts Here ////////////////////////
    #ifdef DEBUG
    {
        NL NL
        cout << "---- Debugging Starts Here ----" << endl;
        NL


        /// debug for classList & classSinglyLinkedList ///
            checkListProperty();
            NL NL
            //checkListModifying () ;
        /// debug for classList & classSinglyLinkedList ///

//        /// debug for classWeight ///
//          checkClassWeightConstructor      () ;
//          NL NL
//          checkClassWeightGetters          () ;
//          NL NL
//          checkClassWeightSetters          () ;
//          NL NL
//          checkClassWeightEqualityOperator () ;
//           NL NL
//          checkClassWeightLessThanOperator () ;
//          NL NL
//          checkClassWeightAddToOperator    () ;
//        /// Debug for classWeight ///

        NL
        cout << "----- Debugging Ends Here -----" << endl;
        NL NL

    }
    #endif
    ///////////////////////// Debug Ends Here /////////////////////////

    NL
    cout << "----- Ending Program Animal Farm -----" << endl;

    return ( EXIT_SUCCESS ) ;

}

