#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int find_index(char code[],char char_to_find){
  for(int i = 0 ; i < 26; i ++){
    if(code[i] == char_to_find){
      return i;
    }
  }
  return -1;
}

//Define substitution cipher encode
char* encrypt(char *message,char code[]){
  int length = strlen(message);
  char *encrypted_message = (char *) malloc(sizeof(char)*length);

  for(int i = 0; i < length; i++){
    int encryption_index = tolower(message[i]) - 'a';
    if(encryption_index >= 0 && encryption_index < 26){
      encrypted_message[i] = code[encryption_index];
    }else{
      encrypted_message[i] = message[i];
    }
  }
  return encrypted_message;
}

//Define substitution cipher decode
char *decrypt(char *message,char code[]){
  int length = strlen(message);
  char *decrypted_message = (char *) malloc(sizeof(char)*length);
  for(int i = 0; i <length; i++){
    int decryption_index = tolower(message[i]) - 'a';
    if(decryption_index >= 0 && decryption_index < 26){
      int code_index = find_index(code,tolower(message[i]));
      decrypted_message[i] = 'a' + code_index;
    }else{
      decrypted_message[i] = message[i];
    }
  }
  return decrypted_message;
}

//Define Ceaser cipher encode
void caesarCipherEncode(char* plainText, int key){
	
	int i=0;
	int cypherValue;
	char cypher;
	
	while( plainText[i] != '\0' && strlen(plainText)-1 > i)
	{
	    if((int)plainText[i]>='a' && (int)plainText[i]<='z')
	    {
		    cypherValue = ((int)plainText[i] -97 + key) % 26 + 97;
		    cypher = (char)(cypherValue);
		    printf("%c", cypher);
		}
		if((int)plainText[i]>='A' && (int)plainText[i]<='Z')
	    {
		    cypherValue = ((int)plainText[i] -65 + key) % 26 + 65;
		    cypher = (char)(cypherValue);
		    printf("%c", cypher);
		}
		if((int)plainText[i] >= ' ' && (int)plainText[i]<=' '){
	    printf(" ");
	    }
		i++;
	}
	printf("\n");
};

//Define Ceaser cipher decode
void caesarCipherDecode(char* plainText, int key){
	
	int i=0;
	int cypherValue;
	char cypher;
	
	while( plainText[i] != '\0' && strlen(plainText)-1 > i)
	{
	    if((int)plainText[i]>='a' && (int)plainText[i]<='z')
	    {
		cypherValue = ((int)plainText[i] -122 - key) % 26 + 122;
		cypher = (char)(cypherValue);
		
		printf("%c", cypher);
	    }
	    
		if((int)plainText[i]>='A' && (int)plainText[i]<='Z')
	    {
		cypherValue = ((int)plainText[i] -90 - key) % 26 + 90;
		cypher = (char)(cypherValue);
		
		printf("%c", cypher);
	    }
	    if((int)plainText[i] >= ' '){
	    printf(" ");
	    }
		i++;
	}
	printf("\n");
};

int main(){
 
 int type;
 
// Asking user to Choose which type of Cipher to use
printf("Please Make a selection from the following options:\n\n");
printf("* For Substitution Cipher, press 1\n");
printf("* For Ceaser Cipher, press 2\n");
scanf("%d", &type);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
 
 
 if(type == 1)
{   
    //User must hard code the message to encrypt or decrypt and insert Cipher key here
    char *message = "test message";
    char code[26] = {'b','a','c','d','s','f','g','h','i','j','k','l','m','n','o','p','q','r','e','t','u','v','w','x','y','z'};
    char *encrypted_message = encrypt(message,code);
    char *decrypted_message = decrypt(encrypted_message,code);
    int select;
    
    //Asking user if they would like to encrypt or decrypt the Substitution Cipher
    printf("Please Make a selection from the following options:\n\n");
    printf("* To encrypt a message press 1\n");
    printf("* To decrypt a message press 2\n");
    printf("\n");
    printf("Selection: ");
    scanf("%d", &select);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
    
    if(select == 1)
    printf("The original message was: %s\n\nThe Encoded text is: %s\n",message, encrypted_message);
    
    if(select == 2)
    printf("The Decoded text is: %s\n",decrypted_message);
    
    return 0;
} 
 
 
if(type == 2);
{
    int select;
    //Asking user if they would like to encrypt or decrypt the Ceaser Cipher
    printf("Please Make a selection from the following options:\n\n");
    printf("* To encrypt a message press 1\n");
    printf("* To decrypt a message press 2\n");
    printf("\n");
    printf("Selection: ");
    scanf("%d", &select);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
    
    if(select == 1)
    {   
        //Asking user to enter Cipher key
        int key;
        printf("Please enter Cipher key: ");
        scanf("%d", &key);
        printf("\n");
        
        char plainText[101];
	
	    //Asking the user for the text to encrypt
	    printf("Please enter the text you want to encrypt: ");
	    scanf("%c", &plainText);
	    
	
	    //Get the users text input and store it in plainText variable
	    fgets(plainText, sizeof(plainText), stdin);
	
	    //Printing the ciphered text
	    printf("\n");
	    printf("The Encoded text is: ");
	
	    //Printing the ciphered text
	    caesarCipherEncode(plainText, key);
	
	    return 0; 
    }
    
    
    if(select == 2)
    {
        //Asking user to enter Cipher key
        int key;
        printf("Please enter Cipher key: ");
        scanf("%d", &key);
        printf("\n");
        
        char plainText[101];
	
	    //Asking the user for the plain text to encrypt
	    printf("Please enter the text you want to Decrypt: ");
	    scanf("%c", &plainText);
	    
	
	    //Get the users text input and store it in plainText variable
	    fgets(plainText, sizeof(plainText), stdin);
	    printf("\n");
	    //Printing the ciphered text
	    printf("The Decoded text is: ");
	
	    //Printing the ciphered text
	    caesarCipherDecode(plainText, key);
	
	    return 0; 
    }
  
 }
 
}
