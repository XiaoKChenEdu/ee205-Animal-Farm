///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.h
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


#define MAX_CAT               1024
#define MAX_CHAR_CAT_NAME     50
#define HOLDER                25

using namespace std;

typedef float Weight;
typedef int NumCats;

enum Gender { UNKNOWN_GENDER, MALE, FEMALE };
enum Breed  { UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX, RAGDOLL };
enum Color  { BLACK, WHITE, RED, BLUE, GREEN, PINK };
const Weight UNKNOWN_WEIGHT = -1;

extern char* toString( const int number, const int item );
