///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file config.h
/// @version 2.0
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

/// Format the heading for dumping members of a class to the console
///
/// Print =====================
#define PRINT_HEADING_FOR_PRINT cout << setw(80) << setfill( '=' ) << "" << endl
/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_PRINT( className, member ) cout << setfill( ' ' ) << left << boolalpha << setw(8)  << (className) << setw(20) << (member) << setw(52)

using namespace std;
