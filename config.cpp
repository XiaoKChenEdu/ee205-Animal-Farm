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
char* toString( const int number, const int item ) {

   char returnItem[HOLDER];

   if ( number == 0 ) {

      switch( item ) {

         case 1  : return strncpy( returnItem, "Male",           HOLDER );

         case 2  : return strncpy( returnItem, "Female",         HOLDER );

         default : return strncpy( returnItem, "Unknown Gender", HOLDER );

      }

   }

   else if ( number == 1 ) {

      switch( item )  {

         case 1  : return strncpy( returnItem, "Maine Coon",    HOLDER );
                  
         case 2  : return strncpy( returnItem, "Manx",          HOLDER );
                  
         case 3  : return strncpy( returnItem, "ShortHair",     HOLDER );
                  
         case 4  : return strncpy( returnItem, "Persian",       HOLDER );
                  
         case 5  : return strncpy( returnItem, "Sphynx",        HOLDER );

         case 6  : return strncpy( returnItem, "Ragdoll",       HOLDER );

         default : return strncpy( returnItem, "Unknown Breed", HOLDER );
     
                   
      }

   }

   else if ( number == 2 ) {
   
      switch( item ) {
        
         case 0  : return strncpy( returnItem, "Black", HOLDER );
                  
         case 1  : return strncpy( returnItem, "White", HOLDER );

         case 2  : return strncpy( returnItem, "Red",   HOLDER );

         case 3  : return strncpy( returnItem, "Blue",  HOLDER );

         case 4  : return strncpy( returnItem, "Green", HOLDER );

         case 5  : return strncpy( returnItem, "Pink",  HOLDER );

         default : return strncpy( returnItem, "null",  HOLDER );

      } 

   } else {
	
	   return 0;
   
   }

}
