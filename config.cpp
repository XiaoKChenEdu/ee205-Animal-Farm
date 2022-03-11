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
#include "catDatabase.h"



void checkListSize() {

     for ( int i = 0; i < MAX_CAT; i++ ) {

        if ( cat[i].catWeight != 0 ) {
 
             currentCatListSize++;
 
         }
 
     }
 
};


//Turn enum item into stheckListSize() {
char* toString( const int number, const int item ) {

   char returnItem[HOLDER - 1];

   if ( number == 0 ) {

      switch( item ) {

         case 1  : return strncpy( returnItem, "Male",           HOLDER - 1 );

         case 2  : return strncpy( returnItem, "Female",         HOLDER - 1 );

         default : return strncpy( returnItem, "Unknown Gender", HOLDER - 1 );

      }

   }

   else if ( number == 1 ) {

      switch( item )  {

         case 1  : return strncpy( returnItem, "Maine Coon",    HOLDER - 1 );
                  
         case 2  : return strncpy( returnItem, "Manx",          HOLDER - 1 );
                  
         case 3  : return strncpy( returnItem, "ShortHair",     HOLDER - 1 );
                  
         case 4  : return strncpy( returnItem, "Persian",       HOLDER - 1 );
                  
         case 5  : return strncpy( returnItem, "Sphynx",        HOLDER - 1 );

         case 6  : return strncpy( returnItem, "Ragdoll",       HOLDER - 1 );

         default : return strncpy( returnItem, "Unknown Breed", HOLDER - 1 );
     
                   
      }

   }

   else if ( number == 2 ) {
   
      switch( item ) {
        
         case 0  : return strncpy( returnItem, "Black", HOLDER - 1 );
                  
         case 1  : return strncpy( returnItem, "White", HOLDER - 1 );

         case 2  : return strncpy( returnItem, "Red",   HOLDER - 1 );

         case 3  : return strncpy( returnItem, "Blue",  HOLDER - 1 );

         case 4  : return strncpy( returnItem, "Green", HOLDER - 1 );

         case 5  : return strncpy( returnItem, "Pink",  HOLDER - 1 );

         default : return strncpy( returnItem, "null",  HOLDER - 1 );

      } 

   } else {
	
	   return 0;
   
   }

}
