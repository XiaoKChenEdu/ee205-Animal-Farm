///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab12a_fatCat - EE 205 - Spr 2022
///
/// @file classWeight.h
/// @version 3.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <cassert>
#include <stdexcept>
#include <iomanip>
#include <ostream>

#define NL cout << endl;

typedef float t_weight;
using namespace std;


class classWeight {

    public:
        enum UnitOfWeight { POUND, KILO, SLUG } ;
        typedef float t_weight                  ;

    public:
        //////////// Public Attributes ////////////
        static const t_weight UNKNOWN_WEIGHT   ;
        static const t_weight KILOS_IN_A_POUND ;
        static const t_weight SLUGS_IN_A_POUND ;

        static const string POUND_LABEL ;
        static const string KILO_LABEL  ;
        static const string SLUG_LABEL  ;
        //////////// Public Attributes ////////////

    private:
        //////////// Private Attributes ////////////
        bool bWeightIsKnown = false ;
        bool bWeightHasMax  = false ;

        enum UnitOfWeight unitOfWeight = POUND;

        t_weight weight    {} ;
        t_weight maxWeight {} ;
        //////////// Private Attributes ////////////

    public:
        //////////// Constructors ////////////
        classWeight();                                          //Constructor 1

        classWeight( t_weight newWeight            )          ; //Constructor 2

        classWeight( UnitOfWeight newUnitOfWeight  ) noexcept ; //Constructor 3

        classWeight( t_weight newWeight,                        //Constructor 4
                     UnitOfWeight newUnitOfWeight  )          ;

        classWeight( t_weight newWeight,                        //Constructor 5
                     t_weight newMaxWeight         )          ;

        classWeight( UnitOfWeight newUnitOfWeight,              //Constructor 6
                     t_weight newMaxWeight         )          ;

        classWeight( t_weight newWeight,                        //Constructor 7
                     UnitOfWeight newUnitOfWeight,
                     t_weight newMaxWeight         )          ;
        //////////// Constructors ////////////

    public:
        //////////// Getters ////////////
        bool isWeightKnown () const noexcept ;
        bool hasMaxWeight  () const noexcept ;

        t_weight getWeight    ()                           const noexcept ;
        t_weight getWeight    ( UnitOfWeight weightUnits ) const noexcept ;
        t_weight getMaxWeight ()                           const noexcept ;

        UnitOfWeight getWeightUnit() const noexcept ;
        //////////// Getters ////////////

        //////////// Setters ////////////
        void setWeight( t_weight newWeight       ) ;
        void setWeight( t_weight newWeight,
                        UnitOfWeight weightUnits ) ;
        //////////// Setters ////////////

    private:
        //////////// Setters ////////////
        void setMaxWeight( t_weight newMaxWeight ) ;
        //////////// Setters ////////////

    public:
        //////////// Conversion ////////////
        static t_weight fromKilogramToPound ( t_weight kilogram        ) noexcept ;
        static t_weight fromPoundToKilogram ( t_weight pound           ) noexcept ;
        static t_weight fromSlugToPound     ( t_weight slug            ) noexcept ;
        static t_weight fromPoundToSlug     ( t_weight pound           ) noexcept ;
        static t_weight convertWeight       ( t_weight fromWeight,
                                              UnitOfWeight fromUnit,
                                              UnitOfWeight toUnit      ) noexcept ;
        //////////// Conversion ////////////

    public:
        //////////// Validation & Print ////////////
        bool isWeightValid ( t_weight checkWeight ) const noexcept ;
        bool validate      ()                       const noexcept ;

        void print      () const noexcept ;
        void debugPrint () const noexcept ;
        //////////// Validation & Print ////////////

    public:
        //////////// Operators ////////////
        bool operator== ( const classWeight& rhs_Weight ) const ;
        bool operator<  ( const classWeight& rhs_Weight ) const ;

        classWeight &operator+=( t_weight rhs_addToWeight ) ;
        //////////// Operators ////////////

};



//////////////////// Operators ////////////////////
ostream &operator<<( ostream                         &lhs_stream,
                     const classWeight::UnitOfWeight rhs_UnitOfWeight ) ;
ostream &operator<<( ostream                         &lhs_stream,
                     const classWeight               &rhs_Weight      ) ;
//////////////////// Operators ////////////////////