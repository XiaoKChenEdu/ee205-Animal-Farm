///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classNode.cpp
/// @version 3.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include "classNode.h"
#include "config.h"


//////////////////////////////////////////////////////////////////////////////////////
///////////////////////// Protected Static Member Functions //////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
bool classNode::compareByAddress( const classNode* pNode1, const classNode* pNode2 ) {

    if ( pNode1 > pNode2 ) {

        return true ;

    }

    return false ;

}
//////////////////////////////////////////////////////////////////////////////////////
///////////////////////// Protected Static Member Functions //////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Validation & Print //////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classNode::print() const {

    FORMAT_LINE_FOR_PRINT("Node", "this" ) << this << endl ;
    FORMAT_LINE_FOR_PRINT("Node", "next" ) << pNext << endl ;

}

bool classNode::validate() const noexcept {

    if ( pNext == nullptr ) {

        return true ;

    }

    if ( pNext == pNext -> pNext ) {

        return false ;

    }

    return true ;

}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Validation & Print //////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Operators ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
bool classNode::operator>( const classNode &RightSide ) {

    return compareByAddress( this, &(classNode&)RightSide ) ;

}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Operators ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Debug Print //////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classNode::debugPrint() const {

    FORMAT_LINE_FOR_DEBUG_PRINT("Node", "this" ) << this << endl ;
    FORMAT_LINE_FOR_DEBUG_PRINT("Node", "next" ) << pNext << endl ;

}
//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Debug Print //////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////