#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <conio.h>


int main(){
	
	printf("******************* ikinci dereceden denklemin kokunu bulma *******************\n\n");
	
	float a, b, c, x1, x2, delta;
	printf("ikinci dereceden denklemin katsayilirini giriniz? (a,b,c)\n");
	
	printf("a: ");	
	scanf("%f", &a);
	
	printf("b: ");	
	scanf("%f", &b);
	
	printf("c: ");	
	scanf("%f", &c);
	
	delta = b*b-4*a*c;
	
	if (delta > 0){
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		
		printf("iki koku vardir: %f ve %f\n", x1, x2);
		
	}
	else if (delta == 0){
		
		x1 = x2 = -b/(2*a);
		printf("bir koku vardir : %f\n", x1);
		
	}
 	else {
 		printf("Kok yoktur.");
 		
	 }
	 getch();
	
	return 0;
}