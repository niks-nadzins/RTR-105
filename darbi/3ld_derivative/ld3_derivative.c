#include <stdio.h>
#include <math.h>

double derivative(double b, double delta_b){
	
	return (sinh(b+delta_b)-sinh(b))/delta_b;
}

double derivative2(double b, double delta_b){
	
	return (cosh(b+delta_b)-cosh(b))/delta_b;
}

int main(){
	
	double a, b, x, delta_x;
	printf("Ievadi a vertibu: ");
	scanf("%lf", &a);
	printf("Ievadi b vertibu: ");
	scanf("%lf", &b);
	printf("Ievadi delta_x vertibu: ");
	scanf("%lf", &delta_x);
	printf("\n\n");
	
	x = a;
	
	printf("   x\t\t  f(x)\t\tf'(x) an.\t\tf'(x) sk.\tf''(x) an.\tf''(x) sk.\n");
	
	while(x< b){
		
		printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x, sinh(x), cosh(x), derivative(x, delta_x), sinh(x), derivative2(x, delta_x));
		
		FILE * fpointer = fopen("derivative.txt", "a");
		
		fprintf(fpointer, "%lf %lf %lf %lf %lf %lf\n", x, sinh(x), cosh(x), derivative(x, delta_x), sinh(x), derivative2(x, delta_x));
	
		fclose(fpointer);
		
		x += delta_x;
	}
	
}
