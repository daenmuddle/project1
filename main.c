#include<stdio.h>// fget(), stdin
#include<string.h>//stringlen()
#include<stdlib.h>

//Define my Caesar Cipher Function
void caesarCipher(char* plainText, int key);

int main(void){
	float x;
	printf("ent: ");
	scanf("%f", &x);
	int key = x;
	
	
	char plainText[101];
	
	
	
	//Ask the user for the plain text to encrypt
	printf("Please enter the plain text you want to encrypt: ");
	
	//Get the users text input and store it in plainText variable
	fgets(plainText, sizeof(plainText), stdin);
	
	//Print the ciphered text
	printf("The ciphered text is : ");
	
	//Print the ciphered text
	caesarCipher(plainText, key);
	
	//system("pause"); // Comment out if you are not using windows OS
}

void caesarCipher(char* plainText, int key){
	
	int i=0;
	int cypherValue;
	char cypher;
	
	while( plainText[i] != '\0' && strlen(plainText)-1 > i){
		cypherValue = ((int)plainText[i] -97 + key) % 26 + 97;
		cypher = (char)(cypherValue);
		
		printf("%c", cypher);
		i++;
	}
	printf("\n");
}
