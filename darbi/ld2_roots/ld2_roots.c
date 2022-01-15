#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, c, x, delta_x, funkca, funkcb, funkcx;
	int k = 0;
	
	printf("Ievadi a, b un c vertibas:\n");
	scanf("%lf\n", &a);
	scanf("%lf\n", &b);
	scanf("%lf", &c);
	printf("Ievadi delta_x: \n");
	scanf("%lf", &delta_x);
	
	funkca = sinh(a)-c;
	funkcb = sinh(b)-c;
	
	if(funkca*funkcb > 0){
		printf("Intervala [%lf; %lf] sinh(x) = %lf funkcijai.", a, b, c);
		printf(" Saknju nav vai ir para skaits saknu, vai ir sakne, kas pieskaras x-asi\n");
		return 1;
	}
	
	while((b-a) > delta_x){
		
		k++;
		x = (a+b)/2;
		if(funkca*(sinh(x)-c) > 0){
			a = x;
		}
		else{
			b = x;
		}
		printf("%d iteracija: sinh(%lf) = %lf\t", k, a, sinh(a));
		printf("sinh(%lf) = %lf\t", x, sinh(x));
		printf("sinh(%lf) = %lf\n", b, sinh(b));
	}
	
	printf("Sakne atrodas pie x=%lf, jos sinh(x) ir %lf\n", x, sinh(x));
	return 0; 
	
}
