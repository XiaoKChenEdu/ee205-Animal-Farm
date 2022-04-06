///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file classCat.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   05_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "catDatabase.h"


class classCat {

    protected:
        char               catName[MAX_CHAR_CAT_NAME];
        enum Gender        catGender;
        enum Breed         catBreed;
        bool               catIsFixed;
        Weight             catWeight;
//        enum Color         collarColor1; //@todo: add these when i have the time.
//        enum Color         collarColor2;
//        unsigned long long catLicense;

    public:
        classCat* next;

    public:
        void createCat();

        void createCat( const char*              newCatName,
                        const Gender             newCatGender,
                        const Breed              newCatBreed,
                        const Weight             newCatWeight
//                        const Color              newCollarColor1,
//                        const Color              newCollarColor2,
//                        const unsigned long long newCatLicense
                        );

    public:
        ////// Getters //////
        char*  getName();
        Gender getGender();
        Breed  getBreed();
        bool   getIsFixed();
        Weight getWeight();

        ////// Setters //////
        void setName    ( const char* newName );
        void setGender  ( Gender newGender );
        void setBreed   ( Breed newBreed );
        void setIsFixed ();
        void setWeight  ( Weight newWeight );

    public:
        bool print();

    public:
        bool validate();
        bool validateCatName   ( const char* newName );
        bool validateCatGender ( const Gender newGender );
        bool validateCatBreed ( const Breed newBreed );
        bool validateCatWeight ( const Weight newWeight );

};