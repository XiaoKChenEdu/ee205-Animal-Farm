///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file debugMain.cpp
/// @version 3.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   03_May_2022
///////////////////////////////////////////////////////////////////////////////


#include "../src/config.h"
#include "../src/classSinglyLinkedList.h"
#include "../src/classCat.h"
#include "debug.h"


#define NL           cout << endl;


int main() {

    //////////////////////// Debug Starts Here ////////////////////////
    cout << "---- Debugging Starts Here ----" << endl;
        NL


        ///// debug for classList & classSinglyLinkedList /////
            checkListProperty() ;
            NL NL
            checkListModifying () ;
            NL NL
        ///// debug for classList & classSinglyLinkedList /////

        ///// debug for classAnimal /////
            checkClassAnimalConstructor() ;
            NL NL
        ///// debug for classAnimal /////

        ///// debug for classCat /////
            checkClassCatConstructor() ;
            NL NL
        ///// debug for classCat /////

        ///// debug for classWeight /////
            checkClassWeightConstructor      () ;
            NL NL
            checkClassWeightGetters          () ;
            NL NL
            checkClassWeightSetters          () ;
            NL NL
            checkClassWeightEqualityOperator () ;
            NL NL
            checkClassWeightLessThanOperator () ;
            NL NL
            checkClassWeightAddToOperator    () ;
        ///// Debug for classWeight /////

        NL
    cout << "----- Debugging Ends Here -----" << endl;
    ///////////////////////// Debug Ends Here /////////////////////////

    return ( EXIT_SUCCESS ) ;

}

