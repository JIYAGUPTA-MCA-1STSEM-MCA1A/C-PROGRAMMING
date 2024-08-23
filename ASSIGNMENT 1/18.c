//ENTERED CHARACTER IS ALPHABET OR NOT
#include<stdio.h>
void main()
{
 char c;
 printf("****PROGRAM TO CHECK IF AN ENTETERD CHARACTER IS ALPHABETOR NOR****\n");
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf("enter a character:");
 scanf("%c",&c);
 if((c>='a' && c<='z') || (c >='A' && c<='Z'))
 printf("%c is an alphabet",c);
 else
 printf("%c is not an alphabet",c);
}
