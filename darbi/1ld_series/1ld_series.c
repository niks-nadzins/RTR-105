#include <stdio.h>
#include <math.h>

long double summa_sinh (long double x, int bound){
	
	long double a, S;
	int k = 0;
	
	a = pow(x, 2*k+1)/(1.);
	S = a;
	
	while(k < bound){
		k++;
		a = (a*x*x)/((2*k+1)*(2*k));
		S = S+a;		
	}
	return S;
}

int main(void){
	
	double x, y, yy;
	printf("funkcija ir defineta visiem realiem skaitliem\n\n");
	printf("Ievadi vertibu: ");
	scanf("%Lf", &x);

	printf("%lf\n", x);
	y = sinh(x);
	printf("\nsinh(%lf) = %lf\n\n", x, y);
	yy = summa_sinh(x, 500);
	double a500 = summa_sinh(x, 30)-summa_sinh(x, 29);
	double a499 = summa_sinh(x, 499)-summa_sinh(x, 498);
	printf("funkcijas vertiba caur summu: %.2f\n", yy);
	printf("a499 = %lf\n", a499);
	printf("a500 = %lf\n\n\n", a500);
	
	printf("               500                      \n");
	printf("              _____                     \n");
	printf("              \\             2*k+1          \n");
	printf("               \\        %.2f            \n", x);
	printf(" sinh(%.2f) =   >   ________________    \n", x);
	printf("               /                \n");
	printf("              /____    (2*k+1)!                 \n");
	printf("               k=0                      \n\n\n");
	
	printf("                                 2\n");
	printf("                             %.2f  \n", x);
	printf(" rekurences reizinatajs: _______________\n");
	printf("\n");
	printf("                         (2*k+1)*(2*k)\n");
	
	double b;
	
	/*FILE * fpointer = fopen("series_data.txt", "a");
	
	for(b = -10; b <= 10; b+=0.1){
		
		fprintf(fpointer, "\n%.2f %.2f", b, summa_sinh(b, 500));
	}
	
	fclose(fpointer);
	return 0;*/

	
}
