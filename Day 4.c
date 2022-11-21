#include<stdio.h>

main(){
	
	int day;
	
	    printf(" 1. Monday\n"); 
	    printf(" 2. Tuesday\n");
		printf("3. Wednesday\n");
		printf("4. Thursday\n");
		printf("5. Friday\n");
		printf("6. Saturday\n");
		printf("7. Sunday\n\n\n");
	
	
	printf("type is Day no. :-");	
	scanf("%i",&day);
	
	switch(day){
		
		default:
			
			printf("type is correct value");
			
			break;
		
		case 1 :
			
			printf("Monday");
			
			break;
			
		case 2 :
					
			printf("Tuesday");
			
			break;
		
		case 3 :
					
			printf("Wednesday");
			
			break;
			
		case 4 :
					
			printf("Thursday");
			
			break;
			
		case 5 :
					
			printf("Friday");
			
			break;
			
		case 6 :
					
			printf("Saturday");
			
			break;
			
		case 7 :
					
			printf("Sunday");
			
			break;
		
	}
	
}

