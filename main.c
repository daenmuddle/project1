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
 
 printf("1 for sub, 2 for ceaser: ");
 scanf("%d", &type);
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 
 if(type == 1)
{    
  char *message = "test message";
  char code[26] = {'b','a','c','d','s','f','g','h','i','j','k','l','m','n','o','p','q','r','e','t','u','v','w','x','y','z'};

  char *encrypted_message = encrypt(message,code);
  printf("Original Message: %s\nEncrypted Message: %s\n",message,encrypted_message);
  char *decrypted_message = decrypt(encrypted_message,code);
  printf("Decrypted Message: %s\n",decrypted_message);
  return 0;
} 
 if(type == 2);
 {
    int select;
    
    printf("Please Make a selection from the following options:\n");
    printf("\n");
    printf("* To encrypt a message press 1\n");
    printf("* To decrypt a message press 2\n");
    printf("\n");
    printf("Selection: ");
    scanf("%d", &select);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    if(select == 1)
    {
        int key;
        printf("Insert Cipher key: ");
        scanf("%d", &key);
        printf("\n");
        
        char plainText[101];
	
	    //Ask the user for the plain text to encrypt
	    printf("Please enter the text you want to encrypt: ");
	    scanf("%c", &plainText);
	    printf("\n");
	
	    //Get the users text input and store it in plainText variable
	    fgets(plainText, sizeof(plainText), stdin);
	
	    //Print the ciphered text
	    printf("The Encoded text is : ");
	
	    //Print the ciphered text
	    caesarCipherEncode(plainText, key);
	
	    return 0; 
    }
    
    if(select == 2)
    {
        int key;
        printf("Insert Cipher key: ");
        scanf("%d", &key);
        printf("\n");
        
        char plainText[101];
	
	    //Ask the user for the plain text to encrypt
	    printf("Please enter the text you want to Decrypt: ");
	    scanf("%c", &plainText);
	    printf("\n");
	
	    //Get the users text input and store it in plainText variable
	    fgets(plainText, sizeof(plainText), stdin);
	
	    //Print the ciphered text
	    printf("The Decoded text is : ");
	
	    //Print the ciphered text
	    caesarCipherDecode(plainText, key);
	
	    return 0; 
    }
  	
  
 }
  
  
}
