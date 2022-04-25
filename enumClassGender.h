///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file enumClassGender.h
/// @version 3.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"


enum class Gender { UNKNOWN_GENDER=0,
                    MALE,
                    FEMALE            } ;


inline ostream &operator<<( ostream &lhs_stream, const Gender &rhs_Gender ) {

    switch ( rhs_Gender ) {

        case Gender::UNKNOWN_GENDER : lhs_stream << "Unknown Gender" ;
            break ;

        case Gender::MALE           : lhs_stream << "Male"           ;
            break ;

        case Gender::FEMALE         : lhs_stream << "Female"         ;
            break ;

        default:
            throw out_of_range( "Gender not mapped to a string" ) ;

    }

    return lhs_stream ;

}