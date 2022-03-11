///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "catDatabase.h"


extern int updateCatName( const int index, const char newName[] );
extern int fixCat( const int index );
extern int updateCatWeight( const int index, const float newWeight );
extern int updateCatCollar1( const int index, const int collar1 );
extern int updateCatCollar2( const int index, const int collar2 );
extern int updateLicense( const int index, const unsigned long long licenseNumber );
