#include <stdio.h>
#include <ctype.h>

//Counts the number of digits in its input

//Global var never used 
unsigned long superGlobalVar = 127;

int main(){
	
	int c; //Char read
	int count = 0;  //Number of char found

	while((c = getchar()) !=EOF){
		if(isdigit(c)){
			count++;
		}
	}
	printf("%d\n", count);
	
	return 0;
}

