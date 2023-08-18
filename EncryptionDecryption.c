/////////////////////////////////////////////////////////////
//
// Function name : Encryption and Decryption
// input         : integer
// Output        : integer
// Discption     : Code are input a string and return the Encryption or Decryption string
// Auther        : Tahakik Sanket Rajendra
// Date          : 17/08/2023
//
/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////
//
// Problem Statement :  
//
/////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
   int i = 0;
   int x = 0;
   int iValue = 0;
   char str[100];

   printf("\nPlease enter a string:\t");
   gets(str);
   // scanf("%s",&str);

   printf("-------------------Enter the key under 1 to 25-------------------\n");
   printf("Enter the key : ");
   scanf("%d",&iValue);

   if(iValue < 1 || iValue > 25)
   {
      printf("Invalid key");
      return;
   }


   printf("\n-------------------Please choose following options:-------------------\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");

   scanf("%d", &x);

   while(1)
   {

      switch(x)
      {
         case 1:

            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            
               str[i] = str[i] + iValue; 

               printf("\nEncrypted string: %s\n", str);
            
            break;
            

         case 2:

            for(i = 0; (i < 100 && str[i] != '\0'); i++)
            
               str[i] = str[i] - iValue; 

               printf("\nDecrypted string: %s\n", str);
            
            break;
            

         default:

            printf("\nError\n");
      }
      return 0;
   }
}
