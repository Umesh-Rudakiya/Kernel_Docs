
#include <stdio.h> 
struct test 
{ 
   unsigned int x; 
   long int y: 33; 
   unsigned int z; 
}; 
int main() 
{ 
   struct test t; 
   unsigned int *ptr1 = &t.x; 
   unsigned int *ptr2 = &t.z; 
   printf("%ld\n", ptr2 - ptr1); 
   printf("%u\n", ptr2); 
   printf("%u\n", ptr1); 
   return 0; 
} 

