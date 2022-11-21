#include<stdio.h>

main(){
	
	char p;
	printf("Write any character :-");
	scanf("%c",&p);
	
	if((p>='p' && p<='z')||(p>='P' && p<='Z')){
		
		printf("it is alphabet");
		
	}
	else if(p>='0' && p<='9'){
		
		printf("it is number");	
		
	}
		
	else
	
	printf(" it is special character");
	
}
