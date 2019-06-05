
#include <stdio.h> 
  
int main(void) 
{ 
    int *p = malloc(sizeof(int)); 
  
    if (p == NULL) { 
        perror("malloc()"); 
        return -1; 
    } 
  
    *p = 10;
   printf("%d\n",*p); 
    free(p); 
  
   printf("%d\n",*p); 
    return 0; 
} 

