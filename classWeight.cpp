///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab12a_fatCat - EE 205 - Spr 2022
///
/// @file classWeight.cpp
/// @version 3.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include "classWeight.h"


/////////////// Public Attributes ///////////////
const classWeight::t_weight classWeight::UNKNOWN_WEIGHT   = -1       ;
const classWeight::t_weight classWeight::KILOS_IN_A_POUND = 0.453592 ;
const classWeight::t_weight classWeight::SLUGS_IN_A_POUND = 0.031081 ;

const string classWeight::POUND_LABEL = "Pound" ;
const string classWeight::KILO_LABEL  = "Kilo"  ;
const string classWeight::SLUG_LABEL  = "Slug"  ;
/////////////// Public Attributes ///////////////


//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Constructors ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
classWeight::classWeight() = default;

classWeight::classWeight( const classWeight::t_weight newWeight ) {

    setWeight( newWeight );
    assert( validate() );

}

classWeight::classWeight( const classWeight::UnitOfWeight newUnitOfWeight ) noexcept {

    unitOfWeight = newUnitOfWeight;

}

classWeight::classWeight( const classWeight::t_weight newWeight, const classWeight::UnitOfWeight newUnitOfWeight ) : classWeight( newUnitOfWeight ) {

    setWeight( newWeight, newUnitOfWeight );
    assert( validate() );

}

classWeight::classWeight( const classWeight::t_weight newWeight, const classWeight::t_weight newMaxWeight ) {

    setWeight( newWeight );
    setMaxWeight( newMaxWeight );
    assert( validate() );

}

classWeight::classWeight( const classWeight::UnitOfWeight newUnitOfWeight, const classWeight::t_weight newMaxWeight ) : classWeight( newUnitOfWeight ) {

    setMaxWeight( newMaxWeight );
    assert( validate() );

}

classWeight::classWeight( const classWeight::t_weight newWeight, const classWeight::UnitOfWeight newUnitOfWeight, const classWeight::t_weight newMaxWeight ) : classWeight( newUnitOfWeight, newMaxWeight ) {

    setWeight( newWeight, newUnitOfWeight );
    assert( validate() );

}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Constructors ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Getters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
bool classWeight::isWeightKnown() const noexcept {

    return bWeightIsKnown;

}

bool classWeight::hasMaxWeight() const noexcept {

    return bWeightIsKnown;

}

classWeight::t_weight classWeight::getWeight() const noexcept {

    if ( bWeightIsKnown ) {

        return weight;

    } else {

        return UNKNOWN_WEIGHT;

    }

}

classWeight::t_weight classWeight::getWeight( const classWeight::UnitOfWeight weightUnits ) const noexcept {

    return convertWeight( weight, unitOfWeight, weightUnits );

}

classWeight::t_weight classWeight::getMaxWeight() const noexcept {

    if ( bWeightHasMax ) {

        return maxWeight;

    } else {

        return UNKNOWN_WEIGHT;

    }

}

classWeight::UnitOfWeight classWeight::getWeightUnit() const noexcept {

    return unitOfWeight;

}
//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Getters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Setters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void classWeight::setWeight( const classWeight::t_weight newWeight ) {

    if ( !isWeightValid( newWeight ) ) {

        throw out_of_range( "newWight is <= 0 || > maxWeight" );

    }

    weight         = newWeight ;
    bWeightIsKnown = true      ;

    assert( validate() );

}

void classWeight::setWeight( const classWeight::t_weight newWeight, const classWeight::UnitOfWeight weightUnits ) {

    setWeight( convertWeight( newWeight, weightUnits, unitOfWeight ) );

}

//This is a private member function.
void classWeight::setMaxWeight( const classWeight::t_weight newMaxWeight ) {

    if ( !bWeightHasMax ) {

        maxWeight     = newMaxWeight ;
        bWeightHasMax = true         ;

    } else {

        cout << "Your Animal's maxWeight is already defined." << endl;

    }

}
//////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Setters ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////// Conversion /////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
classWeight::t_weight classWeight::fromKilogramToPound( const classWeight::t_weight kilogram ) noexcept {

    return kilogram / KILOS_IN_A_POUND ;

}

classWeight::t_weight classWeight::fromPoundToKilogram( const classWeight::t_weight pound ) noexcept {

    return pound * KILOS_IN_A_POUND ;

}

classWeight::t_weight classWeight::fromSlugToPound( const classWeight::t_weight slug ) noexcept {

    return slug / SLUGS_IN_A_POUND ;

}

classWeight::t_weight classWeight::fromPoundToSlug( const classWeight::t_weight pound ) noexcept {

    return pound * SLUGS_IN_A_POUND ;

}

classWeight::t_weight classWeight::convertWeight( const classWeight::t_weight fromWeight, const classWeight::UnitOfWeight fromUnit, const classWeight::UnitOfWeight toUnit ) noexcept {

    classWeight::t_weight weightToConvert ;

    switch( fromUnit ) {

        case POUND : weightToConvert = fromWeight                                  ;
            break ;

        case KILO  : weightToConvert = fromKilogramToPound( fromWeight )           ;
            break ;

        case SLUG  : weightToConvert = fromSlugToPound( fromWeight )               ;
            break ;

        default    : cout << "Please enter a proper unit to convert form." << endl ;
            assert( false ) ;

    }

    classWeight::t_weight convertedWeight ;

    switch( toUnit ) {

        case POUND : convertedWeight = weightToConvert                           ;
            break ;

        case KILO  : convertedWeight = fromPoundToKilogram( weightToConvert )    ;
            break ;

        case SLUG  : convertedWeight = fromPoundToSlug( weightToConvert )        ;
            break ;

        default    : cout << "Please enter a proper unit to convert to." << endl ;
            assert( false ) ;

    }

    return convertedWeight ;

}
//////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////// Conversion /////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Validation & Print //////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
bool classWeight::isWeightValid( const classWeight::t_weight checkWeight ) const noexcept {

    if ( checkWeight <= 0 ) {

        cout << "Your Animal Weight [" << checkWeight << "] can't be <= 0" << endl ;
        return false ;

    }

    if ( bWeightHasMax ) {

        if ( checkWeight > maxWeight ) {

            cout << "Your Animal Weight [" << checkWeight << "] is greater than it's maxWeight [" << maxWeight << "], Please change it." << endl ;
            return false ;

        }

    }

    return true ;

}

bool classWeight::validate() const noexcept {

    if ( bWeightHasMax ) {

        if ( maxWeight <= 0 ) {

            cout << "Your Animal maxWeight is <= 0, Please change it." << endl ;
            return false ;

        }

    }

    if ( bWeightIsKnown ) {

        if ( !isWeightValid( weight ) ) {

            return false ;

        }

    }

    return true ;

}
#define FORMAT_PRINT_LINE( className, member ) cout << setw( 30 ) << ( className ) << setw( 30 ) << ( member ) << setw( 52 )

void classWeight::print() const noexcept {

    assert( validate() ) ;

    cout << setw( 80 ) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' )                             ;
    cout << left                                       ;
    cout << boolalpha                                  ;

    FORMAT_PRINT_LINE( "classWeight", "this"           ) << this           << endl ;
    FORMAT_PRINT_LINE( "classWeight", "bWeightIsKnown" ) << bWeightIsKnown << endl ;
    FORMAT_PRINT_LINE( "classWeight", "weight"         ) << weight         << endl ;
    FORMAT_PRINT_LINE( "classWeight", "unitOfWeight"   ) << unitOfWeight   << endl ;
    FORMAT_PRINT_LINE( "classWeight", "bWeightHasMax"  ) << bWeightHasMax  << endl ;
    FORMAT_PRINT_LINE( "classWeight", "maxWeight"      ) << maxWeight      << endl ;

}

#define FORMAT_DEBUG_PRINT_LINE( className, member ) cout << "    " << setw( 30 ) << ( className ) << setw( 30 ) << ( member ) << setw( 52 )

void classWeight::debugPrint() const noexcept {

    assert( validate() ) ;

    cout << "    " << setw( 80 ) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' )                                       ;
    cout << left                                                 ;
    cout << boolalpha                                            ;

    FORMAT_DEBUG_PRINT_LINE( "classWeight", "this"           ) << this           << endl ;
    FORMAT_DEBUG_PRINT_LINE( "classWeight", "bWeightIsKnown" ) << bWeightIsKnown << endl ;
    FORMAT_DEBUG_PRINT_LINE( "classWeight", "weight"         ) << weight         << endl ;
    FORMAT_DEBUG_PRINT_LINE( "classWeight", "unitOfWeight"   ) << unitOfWeight   << endl ;
    FORMAT_DEBUG_PRINT_LINE( "classWeight", "bWeightHasMax"  ) << bWeightHasMax  << endl ;
    FORMAT_DEBUG_PRINT_LINE( "classWeight", "maxWeight"      ) << maxWeight      << endl ;

}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Validation & Print //////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Operators ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
bool classWeight::operator==( const classWeight &rhs_WeightInput ) const {

    classWeight::t_weight lhs_weight = ( bWeightIsKnown                 ) ?                 getWeight( classWeight::POUND ) : 0 ;
    classWeight::t_weight rhs_weight = ( rhs_WeightInput.bWeightIsKnown ) ? rhs_WeightInput.getWeight( classWeight::POUND ) : 0 ;

    return lhs_weight == rhs_weight ;

}

bool classWeight::operator<( const classWeight &rhs_WeightInput ) const {

    classWeight::t_weight lhs_weight = ( bWeightIsKnown                 ) ?                 getWeight( classWeight::POUND ) : 0 ;
    classWeight::t_weight rhs_weight = ( rhs_WeightInput.bWeightIsKnown ) ? rhs_WeightInput.getWeight( classWeight::POUND ) : 0 ;

    return lhs_weight < rhs_weight ;

}

classWeight &classWeight::operator+=( const classWeight::t_weight rhs_addToWeight ) {

    if ( !bWeightIsKnown ) {

        throw out_of_range( "Your Animal's Weight Is Unknown." ) ;

    }

    if ( bWeightHasMax ) {

        if ( ( weight + rhs_addToWeight ) > maxWeight ) {

            throw out_of_range( "You Cannot Add [rhs_addToWeight] To Your Animal As It Will Exceed It's maxWeight." ) ;

        }

    }

    setWeight( weight + rhs_addToWeight );

    return *this;

}

ostream &operator<<( ostream &lhs_stream, const classWeight::UnitOfWeight rhs_UnitOfWeight ) {

    switch( rhs_UnitOfWeight ) {

        case classWeight::POUND : return lhs_stream << classWeight::POUND_LABEL ;

        case classWeight::KILO  : return lhs_stream << classWeight::KILO_LABEL  ;

        case classWeight::SLUG  : return lhs_stream << classWeight::SLUG_LABEL  ;

        default                 : throw out_of_range( "The unit can’t be mapped to a string" ) ;

    }
}

ostream &operator<<( ostream &lhs_stream, const classWeight &rhs_Weight ) {

    stringstream stringBuffer ;

    if ( !rhs_Weight.isWeightKnown() && !rhs_Weight.hasMaxWeight() ) {

        lhs_stream << "Unknown" ;
        return lhs_stream ;

    } else if ( rhs_Weight.isWeightKnown() ) {

        stringBuffer << rhs_Weight.getWeight() ;

    } else {

        stringBuffer << "Unknown" ;

    }

    if ( rhs_Weight.hasMaxWeight() ) {

        stringBuffer << " out of " << rhs_Weight.getMaxWeight() ;

    }

    stringBuffer << " " << rhs_Weight.getWeightUnit() ;

    if ( ( ( !rhs_Weight.hasMaxWeight() ) && ( rhs_Weight.getWeight() > 1 ) ) || ( ( rhs_Weight.hasMaxWeight() ) && ( rhs_Weight.getMaxWeight() > 1 ) ) ) {

        stringBuffer << "s" ;

    }

    return lhs_stream << stringBuffer.str() ;

}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Operators ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////