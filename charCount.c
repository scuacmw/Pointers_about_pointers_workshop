//Practice problems from the Pointers about Pointers Workshop
/*Problem 2: Write a C program to count the number of a given character in a string using pointers.*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
/* function that counts the number of a given character in a string using pointers.*/
void charCount(char str[], char c){
	char *p = str;
	int counter = 0; 
	while(*p != '\0'){
		if(*p == c){
			counter++;
		}
		p++;
	} 
	printf("The total number of '%c' characters in the string are %d\n", c, counter);

}


int main(){
    char s[] = "I attended the Pointers about Pointers Workshop with acmw.";
	char c = 't';
    charCount(s,c); //answer is 7
    return 0;
}

