///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include <cstring>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>

#include "config.h"

using namespace std;

#define MAX_CAT               1025
#define MAX_CHAR_CAT_NAME     51
#define HOLDER                26

typedef float Weight;
typedef int NumCats;

enum Gender { UNKNOWN_GENDER, MALE, FEMALE };
enum Breed  { UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX, RAGDOLL };
enum Color  { BLACK, WHITE, RED, BLUE, GREEN, PINK };
const Weight UNKNOWN_WEIGHT = -1;

extern NumCats currentCatListSize;