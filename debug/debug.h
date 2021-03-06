///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file debug.h
/// @version 3.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   22_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "../src/config.h"


///// Debug for classList & classSinglyLinkedList /////
void checkListProperty                () ;
void checkListModifying               () ;
///// Debug for classList & classSinglyLinkedList /////

///// Debug for classAnimal /////
void checkClassAnimalConstructor      () ;
///// Debug for classAnimal /////

///// debug for classCat /////
void checkClassCatConstructor         () ;
///// debug for classCat /////

///// Debug for classWeight /////
void checkClassWeightConstructor      () ;
void checkClassWeightGetters          () ;
void checkClassWeightSetters          () ;
void checkClassWeightEqualityOperator () ;
void checkClassWeightLessThanOperator () ;
void checkClassWeightAddToOperator    () ;
///// Debug for classWeight /////