///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file classCat.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   05_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include "classCat.h"

classCat::Cat() {

    memset( catName, 0, MAX_CHAR_CAT_NAME );
    catGender  = UNKNOWN_GENDER;
    catBreed   = UNKNOWN_BREED;
    catIsFixed = false;
    catWeight  = UNKNOWN_WEIGHT;
    next       = nullptr;

}

void classCat::Cat(const char *newName, const Gender newCatGender, const Breed newCatBreed, const Weight newCatWeight) {

}
