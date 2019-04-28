#include<stdio.h>// fget(), stdin
#include<string.h>//stringlen()
#include<stdlib.h>



int main(void)
{
    int key;
	char plainText[101];
	int type;
	int i=0;
	int cypherValue;
	char cypher;
	
	printf("please choose from the following options:\n");
	printf("to encrypt rotation cipher press 1\n");
	printf("to encrypt substituion cipher press 2\n");
	printf("to decrypt rotation cipher press 3\n");
	printf("to decrypt substitution cipher press 4\n");
	printf("selection :");
	
	scanf("%d", &type);
	
	if(type == 1)
	{
	    printf("please enter key: ");
    	scanf("%d", &key);
	
    	//Ask the user for the plain text to encrypt
        printf("Please enter the plain text you want to encrypt: ");
	    scanf("%c", &plainText);
	
	
	    //Get the users text input and store it in plainText variable
	    fgets(plainText, sizeof(plainText), stdin);
	    printf("The ciphered text is : ");
		
	    while( plainText[i] != '\0' && strlen(plainText)-1 > i)
	    {
		cypherValue = ((int)plainText[i] -97 + key) % 26 + 97;
		cypher = (char)(cypherValue);
		i++;
		printf("%c", cypher);
	    }
	}
	
	if(type == 3)
	{
	    printf("please enter key: ");
    	scanf("%d", &key);
	
    	//Ask the user for the plain text to encrypt
        printf("Please enter the ciphered text you want to decrypt: ");
	    scanf("%c", &plainText);
	
	
	    //Get the users text input and store it in plainText variable
	    fgets(plainText, sizeof(plainText), stdin);
	    printf("The decryped text is : ");
		
	    while( plainText[i] != '\0' && strlen(plainText)-1 > i)
	    {
		cypherValue = ((int)plainText[i] -97 - key) % 26 + 97;
		cypher = (char)(cypherValue);
		i++;
		printf("%c", cypher);
	    }
	}
	
}
