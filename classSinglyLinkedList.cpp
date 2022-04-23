///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-Animal-Farm - EE 205 - Spr 2022
///
/// @file classSinglyLinkedList.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include "classSinglyLinkedList.h"
#include "config.h"


//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Constructors ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
classSinglyLinkedList::classSinglyLinkedList() {

    assert( validate() ) ;

}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Constructors ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// List Modifying ///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classSinglyLinkedList::push_front( classNode* pNewNode ) {

    if ( pNewNode == nullptr ) {

        throw invalid_argument( PROGRAM_NAME ": pNewNode has to != nullptr" ) ;

    }

    if ( isIn( pNewNode ) ) {

        throw logic_error( PROGRAM_NAME ": pNewNode already exist" ) ;

    }

    if ( pHead != nullptr ) {

        pNewNode -> pNext = pHead ;
        pHead = pNewNode ;

    }

    if ( pHead == nullptr ) {

        pNewNode -> pNext = nullptr ;
        pHead = pNewNode ;

    }

    count++ ;
    assert( validate() ) ;

}

void classSinglyLinkedList::insert_after( classNode* pCurrentNode, classNode* pNewNode ) {

    if ( !pNewNode -> validate() ) {

        throw logic_error( PROGRAM_NAME ": pNewNode is invalid" ) ;

    }

    if ( pHead == nullptr ) {

        throw logic_error( PROGRAM_NAME ": Your list is empty." ) ;

    }

    if ( pCurrentNode == nullptr ) {

        throw logic_error( PROGRAM_NAME ": You cannot insert a node after a nullptr" ) ;

    }

    if ( pNewNode == nullptr ) {

        throw logic_error( PROGRAM_NAME ": pNewNode must have a value" ) ;

    }

    if ( !isIn( pCurrentNode ) ) {

        throw logic_error( PROGRAM_NAME ": pCurrentNode must be in the list" ) ;

    }

    if ( isIn( pNewNode ) ) {

        throw logic_error( PROGRAM_NAME ": pNewNode already exist" ) ;

    }

    pNewNode     -> pNext = pCurrentNode -> pNext ;
    pCurrentNode -> pNext = pNewNode              ;

    assert( validate() ) ;
    count++ ;

}

classNode *classSinglyLinkedList::pop_front() noexcept {

    if ( pHead == nullptr ) {

        return nullptr ;

    }

    classNode* pNodeToPop = pHead ;

    if ( pHead -> pNext != nullptr ) {

        pHead = pHead -> pNext ;
        delete pNodeToPop;

    } else {

        pHead = nullptr ;

    }

    assert( validate() ) ;
    count-- ;

    return pHead ;

}
//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// List Modifying ///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// Validation & Print /////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classSinglyLinkedList::print() const noexcept {

    cout << "classSinglyLinkedList:   head=[" << pHead << "]" << endl ;

    for ( classNode* pI = pHead; pI != nullptr; pI = pI -> pNext ) {

        pI -> print() ;

    }

}

bool classSinglyLinkedList::validate() const noexcept {

    if ( pHead == nullptr ) {

        if ( ( count == 0 ) && ( empty() ) ) {

            return true ;

        }

        return false ;

    } else if ( (count != 0 ) && ( !empty() ) ) {

        return true ;

    }

    unsigned int testCount = 0     ;
    classNode*   pTestNode = pHead ;

    while ( pTestNode != nullptr ) {

        testCount++ ;
        pTestNode = pTestNode -> pNext ;

    }

    if ( testCount == size() ) {

        return true ;

    } else if ( testCount != size() ) {

        return false ;

    }

    return true;

}
//////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// Validation & Print /////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////