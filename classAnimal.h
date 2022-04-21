///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classAnimal.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"
#include "classNode.h"
#include "classWeight.h"
#include "enumClassGender.h"


class classAnimal : public classNode {

    private:
        /// Private Attributes ///
        string      species                         ;
        string      classification                  ;
        Gender      gender = Gender::UNKNOWN_GENDER ;
        classWeight weight                          ;
        /// Private Attributes ///

    public:
        /// Static Public Attributes ///
        static const string KINGDOM_NAME ;
        /// Static Public Attributes ///

    public:
        /// Constructor ///
        classAnimal( const classWeight::t_weight newMaxWeight,
                     const string                &NewClassification,
                     const string                &NewSpecies         ) ;
        classAnimal( const Gender                newGender,
                     const classWeight::t_weight newWeight,
                     const classWeight::t_weight newMaxWeight,
                     const string                &NewClassification,
                     const string                &newSpecies         ) ;
        /// Constructor ///

    public:
        /// Getters ///
        string                getKingdom        () const noexcept ;
        string                getClassification () const noexcept ;
        string                getSpecies        () const noexcept ;
        Gender                getGender         () const noexcept ;
        classWeight::t_weight getWeight         () const noexcept ;
        /// Getters ///

    public:
        /// Setters ///
        void setWeight( const classWeight::t_weight newWeight ) ;
        /// Setters ///

    protected:
        /// Setters ///
        void setGender( const Gender newGender ) ;
        /// Setters ///

    public:
        /// Static Public Member Functions ///
        static bool validateClassification ( const string &checkClassification ) noexcept ;
        static bool validateSpecies        ( const string &checkSpecies        ) noexcept ;
        /// Static Public Member Functions ///

    public:
        /// Validation & Print ///
        void print    () const noexcept override ;
        bool validate () const noexcept override ;
        /// Validation & Print ///

    public:
        /// Abstract Function ///
        virtual string speak() const noexcept = 0 ;
        /// Abstract Function ///

} ;