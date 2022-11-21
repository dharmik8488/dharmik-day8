#include<stdio.h>

main(){
	
	int d,h,a,r;
	
	printf("Enter A :- ");
	scanf("%i",&d);

	printf("Enter B :- ");
	scanf("%i",&h);

	printf("Enter C :- ");
	scanf("%i",&a);

	printf("Enter D :- ");
	scanf("%i",&r);
	
	if(d>h){
		
		if(d>a){
			
				if(d>r){
				
					printf("A is Max");
				}			
				else{
					printf("D is Max");
				}
		}
		
		else{
			
			printf("C is max");
		}
}
		
	else if(h>a){
		
			if(a>r) {
		
			printf(" B is max");
      } 
	}
			else{ 
		
			printf("D is max");
		
		 }
		 
	}
