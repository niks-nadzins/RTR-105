#include <stdio.h>

int main(){

int a[10], dec, i;

printf("Ievadi: ");
scanf("%d", &dec);

for(i=0; dec>0; i++){

a[i]=dec%2;
dec = dec >> 1;
}

printf("\n");

for(i=i-1; i>=0; i--){

printf("%d",a[i]);
}
return 0;
}
