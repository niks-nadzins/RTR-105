#include <stdio.h>

int main(){

	printf("Choose data-type: \n1)char\n2)int \n3)long long\n\n");
	
	int choice;
	
	scanf("%d", &choice);
	
	if (choice == 1){
		
		char input, result = 1, result_old = 1;
		
		printf("Enter number: ");
		scanf("%lld", &input);
		
		while(input != 0){
			
			result_old = result;
			
			result = result*input;
			input--;
			
			if(result_old > result){
				printf("Impossible with chosen data-type!\n");
				break;
			}
			
		}
		if(input == 0){
			printf("%lld", result);
		}
		
	}
	if (choice == 2){
		
		int input, result = 1, result_old = 1;
		
		printf("Enter number: ");
		scanf("%lld", &input);
		
		while(input != 0){
			
			result_old = result;
			
			result = result*input;
			input--;
			
			if(result_old > result){
				printf("Impossible with chosen data-type!\n");
				break;
			}
			
		}
		if(input == 0){
			printf("%lld", result);
		}
		
	}
	if (choice == 3){
		
		long long int input, result = 1, result_old = 1;
		
		printf("Enter number: ");
		scanf("%lld", &input);
		
		while(input != 0){
			
			result_old = result;
			
			result = result*input;
			input--;
			
			if(result_old > result){
				printf("Impossible with chosen data-type!\n");
				break;
			}
			
		}
		if(input == 0){
			printf("%lld", result);
		}
		
	}
	
	return 0;

}
