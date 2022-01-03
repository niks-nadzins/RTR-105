#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, x, integral1 = 0, integral2 = 0, integral3 = 0;
	int k = 0, n;
	
	
	printf("Ievadi a: ");
	scanf("%lf", &a);
	printf("Ievadi b: ");
	scanf("%lf", &b);
	printf("Ievadi n: ");
	scanf("%d", &n);
	x = a;
	
	for(k; k < n; k++){
		
		integral1 += (fabs(a - b)/(n*1.0)*(sinh(x + (fabs(a - b)/n)*(k*1.0))));
		
	}
	printf("taisnstura metode - %lf\n", integral1);
	k = 0;
	
	double y0, y1;
	
	for(k; k < n; k++){
		
		y0 = sinh(x + (fabs(a - b)/n)*(k*1.0));
		y1 = sinh(x + (fabs(a - b)/n)*((k+1)*1.0));
		
		integral2 += (fabs(a - b)/(n*1.0))*((y1+y0)/2);
		
	}
	printf("trapecu metode - %lf\n", integral2);
	k = 0;
	
	double z0, z1, z2, x0, x1;
	
	for(k; k < n; k++){
		
		x0 = x + (fabs(a - b)/n)*(k*1.0);
		x1 = x + (fabs(a - b)/n)*((k+1)*1.0);
		z0 = sinh(x0);
		z1 = sinh(x1);
		z2 = sinh((x0+x1)/2);
		
		integral3 += ((x1-x0)/6)*(z0+4*z2+z1);
			
	}
	printf("simpsona metode - %lf", integral3);
	
}
