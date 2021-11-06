#include <stdio.h>

void zina(void){
	
	printf("Hello world!\n");
}

void name(char a[100]){
	
	printf("Hello %s\n", a);
}

int tot(void){
	
	printf("1\n");
	return 1;
}

int power(int base, int exp){
	
	int i, result = 1;
	for(i = 0 ; i < exp; i++){
		
		result = result*base;
	}
	
	printf("%d", result);
	return result;
}


int main(){
	
	zina();
	char vards[100];
	scanf("%s",&vards);
	name(vards);
	tot();
	int a, b;
	scanf("%d %d", &a, &b);
	power(a, b);
	
}
