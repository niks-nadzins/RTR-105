#include <stdio.h>

int main(){
	
	char let1, let2, let3;
	
	printf("Ievadi trîs burtus: ");
	scanf("%c %c %c", &let1, &let2, &let3);

	int order;
	
	printf("Augoða secîba: 1\n");
	printf("Dilstoða secîba: 0\n");
	scanf("%d", &order);
	
	if(let2 <= let1){
		char i = let1;
		let1 = let2;
		let2 = i;
	}
	if(let3 <= let1){
		char i = let1;
		let1 = let2;
		let2 = i;
	}
	if(let3 <= let2){
		char i = let2;
		let2 = let3;
		let3 = i;
	}
	if(order == 0){
		char i = let1;
		let1 = let3;
		let3 = i;
	}
	
	printf("%c %c %c", let1, let2, let3);
	
	return 0;
	
}
