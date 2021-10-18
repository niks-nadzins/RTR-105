#include <stdio.h>

int main(){

 char dec;
 int i;
 printf("Ievadi skaitli: ");
 scanf("%d", &dec);
    
for( i = 7; i >= 0; i-- ) {
  
   printf( "%d", ( dec >> i ) & 1);
}
	
printf("\n");

return 0;
}
