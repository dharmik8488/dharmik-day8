#include<stdio.h>

main(){
	
	float amt;
	float unit;
	float surcharge;
	float total_bill;
	
	printf("type Unit :- ");
	
	scanf("%f",&unit);
	
	if(unit<=50){
		
		amt = unit*0.50;		
		
	}	
	
	else if(unit<=150){
		
		amt = unit*0.75;
		
		}
	
	else if(unit<=250){	
		
		amt = unit*1.20;
		
		}
	
	else{

		amt = unit*1.50;
		
		}
	
	surcharge = amt*0.2;
	
	total_bill = amt+surcharge;
	
	printf("Total Bill %.2f",total_bill);	
	
}
