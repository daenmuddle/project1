#include<stdio.h>// fget(), stdin
#include<string.h>//stringlen()
#include<stdlib.h>

//Caesar Cipher Function
void caesarCipher(char* ToCode, int key);

int main(void){
	
	int key;
	int x;
	printf("key: ");
	scanf("%d", &x);
	key = x;
	char ToCode[101];
	
	
	
	//Ask the user for the plain text to encrypt
	printf("Please enter the plain text you want to encrypt: ");
	
	//Get the users text input and store it in plainText variable
	fgets(plainText, sizeof(ToCode), stdin);
	
	//Print the ciphered text
	printf("The ciphered text is : ");
	
	//Print the ciphered text
	caesarCipher(ToCode, key);
	
	
}

void caesarCipher(char* ToCode, int key){
	
	int i=0;
	int cypherValue;
	char cypher;
	
	while( plainText[i] != '\0' && strlen(ToCode)-1 > i){
		cypherValue = ((int)ToCode[i] -97 + key) % 26 + 97;
		cypher = (char)(cypherValue);
		
		printf("%c", cypher);
		i++;
	}
