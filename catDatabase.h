///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"
#include "classCat.h"

extern NumCats          currentCatInDatabase;
extern class classCat*  pCatDatabaseHeadPointer;
extern bool             validateDatabase();