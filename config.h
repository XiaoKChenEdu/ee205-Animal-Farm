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


//Error Statement
#define catNameInvaild      printf( "Cat name [%s] is either used or invaild\n", name );
#define catNameInvaild2     printf( "Cat name [%s] is either used or invaild\n" , newName );

#define catWeightInvaild    printf( "[%s]'s weight is abnormal at [%f]\n", name, weight );
#define catWeightInvaild2   printf( "[%s]'s weight is abnoraml at [%f]\n", cat[index].catName, newWeight );

#define catGenderInvaild    printf( "[%s] has an abnormal gender\n", name );

#define catBreedInvaild     printf( "[%s]'s breed is abnormal\n", name );

#define catIndexOutofBound  printf( "[%d] is out of bound\n", index );

#define noCollarColorFound  printf( "No Color was found\n" );

#define catCollarInvaild    printf( "[%s]'s collarColor1 is same as collarColor2\n", name );
#define catCollarInvaild2   printf( "[%s]'s collar combination is the same as [%s]\n", name, cat[i].catName );
#define catCollarInvaild3   printf( "[%s]'s collarColor1 is same as collarColor2\n", cat[index].catName ); 
#define catCollarInvaild4   printf( "[%s]'s collar combination would became the same as [%s]\n", cat[index].catName, cat[i].catName );

//#define catLicenseInvaild   printf( "Your cat license number cant be less than 0 or greater than %ull\n", 18446744073709551615 );
#define catLicenseInvaild2  printf( "[%s]'s license has already been used\n", name );
#define catLicenseInvaild3  printf( "Unable to change [%s]'s license, another cat is using it\n", cat[index].catName );


extern char* toString( const int number, const int item );
extern void checkListSize();
