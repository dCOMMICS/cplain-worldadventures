#include <stdio.h>

int main() {
  printf("Hello World!");
   printf("aM High AF");
  return 0;
}

// this is a comment//
// #include <stdio.h> this is the header file binary on c language that let us work with input and output on code.
/* 
printf() adds functionality to C programs
any code inside the curly brackets will be executed DONT FORGET TO CLOSE THE CURLY BRAKETS.
OTHER WAY OF WRITTING THE PROGRAM
int main(){printf("Hello World!");return 0;}
*/
/*#include <stdio.h>

int main() {
  printf("Hello World\n Wettin be dis \n LOL \n your are awesome\n this is new me Enjoy");// \n adds new line //
  return 0;
} 
*/
//declaring variables //

#include <stdio.h>

int main() {
    int myAge = 76;
    myAge = 76;
  printf("%d",myAge);// this code should be able to DO NOTHING until the Developer adds "%d" , declare the variable// 
  return 0;
}

/*data types*/
// float (decimal i.e 3.002 , 8.167) , intergers (whole numbers i.e 15,400,405)
//eg
float myFloatSpace = 1.002; // declare float on floating numbers

char myLetter = 'K'; // char characters 

int myWidth = 22; // int for intergers 

printf("%f", myFloatSpace); //always write %f on float numbers

printf("%c", myLetter); //always write %c on letters / characters 

printf("%d", myWidth); //always write %d on intergers

// Sign Out at 4:30 pm Great Time



// DAY 2 DATA TYPES//

// WHAT ARE BYTES ???//
/*
1. INT (INTERGERS) %d (4 bytes)
2. CHAR (CHARACTER) %c (1 byte)
3. DOUBLE %lf (8bytes)
4. FLOAT %f (4 bytes)
*/
#include <stdio.h>

int main() {
  float newFloat = 2.11;
  printf("%f",newFloat);
  printf("jUAN");
  return 0;
}
// always use double for decimal number//
// today target IF STATEMENT //
#include <stdio.h>

int main() {
  float newFloat = 2.11f; //you might or not add f on float it does not change anything

  double square = 10.49;
  printf("%.4f\n",newFloat); //adding %.f prints 2 adding %.1f prints 2.1 
  printf("jUAN");
  return 0;
}

// single quatation for characters 

// character / letters//
#include <stdio.h>

int main() {
  char myName= 'U';
  printf("%c\n\n",myName);//more \n more space//
  printf("%d" , myName);
  return 0;
}

/*size of operator*/
//size of()

//  User input//

#include <stdio.h>
int main (){
  int Age; //STORES THE AGE ASSIGNED BY THE USER//
  scanf("%d",&Age); //ENABLES THE USER TO INPUT HIS / HER / THEIR AGE //
  printf("Age = %d", Age);
  return 0;
}

//AFTER A LONG TIME//