
#include <stdio.h>
  
int main() 
{ 
   printf("In file:%s, function:%s() and line:%d",__FILE__,__func__,__LINE__); 
 	int k=11;
  int p =  k++ + k++ + k++ + k++;
  printf("\n%d\n\n",p);
   return 0; 
} 

