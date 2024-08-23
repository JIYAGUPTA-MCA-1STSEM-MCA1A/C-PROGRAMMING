//CHARACTER IS AN ALPHABET, DIGIT, SPCIAL CHARACTER
#include<stdio.h>
void main()
{
 char ch;
 printf("****PROGRAM TO CHECK A CHARACTER IS AN ALPHABET,DIGIT,SPECIAL CHARACTER****\n");
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf("\n enter character or digit");
 scanf("%c",&ch);
 if((ch >= 'a' && ch <= 'z') || (ch >= 'A'&& ch <= 'Z'))
 printf("entered character is CHARACTER");
 else if(ch >= '0' && ch <= '9')
 printf("entered character is DIGIT");
 else
 printf("entered character is SPECIAL DIGIT");
}
