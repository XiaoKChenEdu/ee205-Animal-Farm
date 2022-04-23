///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file enumClassColor.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "config.h"


enum class Color { UNKNOWN_COLOR = 0,
                   BLACK,
                   BROWN,
                   WHITE,
                   RED,
                   BLUE,
                   GREEN,
                   PINK               } ;

inline ostream &operator<<( ostream &lhs_stream, const Color &rhs_Color ) {

    switch ( rhs_Color ) {

        case Color::BLACK : lhs_stream << "Black" ;
            break ;

        case Color::BROWN : lhs_stream << "Brown" ;
            break ;

        case Color::WHITE : lhs_stream << "White" ;
            break ;

        case Color::RED   : lhs_stream << "Red"   ;
            break ;

        case Color::BLUE  : lhs_stream << "Blue"  ;
            break ;

        case Color::GREEN : lhs_stream << "Green" ;
            break ;

        case Color::PINK  : lhs_stream << "Pink"  ;
            break ;

        default:
            throw out_of_range( "Color not mapped to a string" ) ;

    }

    return lhs_stream;

}