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


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "config.h"

#define MAX_CAT               1025
#define MAX_CHAR_CAT_NAME     51
#define HOLDER                26                  
#define ERROR                 printf( "ERROR\n" );


enum catGender { UNKNOWN_GENDER, MALE, FEMALE };
enum catBreed  { UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX, RAGDOLL };
enum color1    { BLACK, WHITE, RED, BLUE, GREEN, PINK };

extern int  currentCatListSize;

//extern struct catMetaData cat[MAX_CAT];
extern struct catMetaData {

  char               catName[MAX_CHAR_CAT_NAME];
  char               catGender[HOLDER];
  char               catBreed[HOLDER];
  bool               catIsFixed;
  float              catWeight;
  char               collarColor1[HOLDER];
  char               collarColor2[HOLDER];
  unsigned long long catLicense;

} cat[MAX_CAT - 1];


//extern char* toString( const int number, const int item );
