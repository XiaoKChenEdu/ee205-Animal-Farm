///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include "config.h"


//Turn enum item into string {
const char* toString( const int number, const int item ) {

   char returnItem[HOLDER];

   if ( number == 0 ) {

      switch( item ) {

         case 1  : return "Male"          ;

         case 2  : return "Female"        ;

         default : return "Unknown Gender";

      }

   }

   else if ( number == 1 ) {

      switch( item )  {

         case 1  : return "Maine Coon"    ;
                  
         case 2  : return "Manx"          ;
                  
         case 3  : return "ShortHair"     ;
                  
         case 4  : return "Persian"       ;
                  
         case 5  : return "Sphynx"        ;

         case 6  : return "Ragdoll"       ;

         default : return "Unknown Breed" ;
     
                   
      }

   }

   else if ( number == 2 ) {
   
      switch( item ) {
        
         case 0  : return "Black" ;
                  
         case 1  : return "White" ;

         case 2  : return "Red"   ;

         case 3  : return "Blue"  ;

         case 4  : return "Green" ;

         case 5  : return "Pink"  ;

         default : return "N/A"   ;

      } 

   } else {
	
	   return 0;
   
   }

}
