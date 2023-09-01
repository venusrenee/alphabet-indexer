#include <stdio.h>

int main(){
	
	char alphabet[11];
	alphabet[0] = '\0';
	alphabet[1] = 'A';
	alphabet[2] = 'B';
	alphabet[3] = 'C';
	alphabet[4] = 'D';
	alphabet[5] = 'E';
	alphabet[6] = 'F';
	alphabet[7] = 'G';
	alphabet[8] = 'H';
	alphabet[9] = 'I';
	alphabet[10] = 'J';
	int i;
	printf("Please enter a number: ");
	scanf("%d", &i);
	printf("%c is number %d in the alphabet", alphabet[i], i);
	return 0;
}