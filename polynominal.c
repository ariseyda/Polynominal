#include<stdio.h>
#include<string.h>
#include<conio.h>

///Define a structure called polynomial with following properties: 
//-term_count stores number of terms the polynomial has. A polynomial can store a maximum of 10 terms. 
//-coefficients is an array of real values and stores each term’s coefficient value. 
//-exponents is an array of integer values and stores each term’s exponent value. 
//-coefficients and exponents are parallel arrays, i.e. coefficients[i] • xexponents[i]. 
//Write a function that scans a polynomial from user. 
//Write a function that print a polynomial on console. 
//Test your code in a program. 
//Scan a polynomial from user and display it on console. 

struct polynominal{
	
	int coefficient[10];
	int exponents[10];
	char term_count[10];
	
};
int main(){
	
	struct polynominal p;
    int i,count=0;
    printf("Enter terms of polynominal:(for exit press '.')");
	
	for(i=0;;i++){
	    scanf(" %c",&p.term_count[i]);
		if(isalpha(p.term_count[i])==0){
			break;
		}
		count++;
	}
	printf("\nEnter coefficients of polynominal:");
	
	for(i=0;i<count;i++){
		scanf("%d",&p.coefficient[i]);	
	}
	
	printf("\nEnter exponents of polynominal:");
	
	for(i=0;i<count;i++){
		scanf("%d",&p.exponents[i]);
	}
	printf("\n");
	int j;
	for(j=0;j<count;j++){
		printf("(%d %c ^ %d) ",p.coefficient[j],p.term_count[j],p.exponents[j]);
		if(j<count-1){
			printf("+ ");
		}
	}
	printf("= %d",0);

	return 0;
}
