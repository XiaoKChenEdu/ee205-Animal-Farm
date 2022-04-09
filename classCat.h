///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classCat.h
/// @version 2.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   05_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "catDatabase.h"


class classCat {

    protected:
        char               catName[MAX_CHAR_CAT_NAME]{};
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
        classCat();

        classCat( const char*              pNewCatName,
                  const Gender             newCatGender,
                  const Breed              newCatBreed,
                  const Weight             newCatWeight
//                  const Color              newCollarColor1,
//                  const Color              newCollarColor2,
//                  const unsigned long long newCatLicense
                );

        virtual ~classCat();

    public:
        ////// Getters //////
        char*  getName    ();
        Gender getGender  ();
        Breed  getBreed   ();
        bool   getIsFixed ();
        Weight getWeight  ();

        ////// Setters //////
        void setName    ( const char* pNewName  );
        void setGender  ( Gender      newGender );
        void setBreed   ( Breed       newBreed  );
        void setIsFixed ();
        void setWeight  ( Weight      newWeight );

    public:
        bool print();

    public:
        bool validate();
        bool validateCatName   ( const char*  pNewName  );
        bool validateCatGender ( const Gender newGender );
        bool validateCatBreed  ( const Breed  newBreed  );
        bool validateCatWeight ( const Weight newWeight );

};