// INPUT IS AN VOWEL OR CONSONANT
) #include<stdio.h>
void main()
{
 char c;
 int caps,lower;
 printf("****PROGRAM TO CHECK IF AN INPUT IS AN VOWEL OR CONSONANT****\n");
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf("enter an alphabet");
 scanf("%c",&c);
 lower=(c == 'a'|| c == 'e' || c == 'i'|| c == 'o'|| c == 'u');
 caps=(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
 if(lower || caps)
 printf("%c is a vowel" ,c);
 else
 printf("%c is a consonant",c);
}
OUTP
