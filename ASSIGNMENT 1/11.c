//PALINDROME OR NOT
) #include<stdio.h>
 void main()
 {
 int n,r,sum=0,temp;
 printf("****PROGRAM TO CHECK IF A NUMBER IS PALINDROME OR NOT****\n);
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27 \n");
 printf("enter the number:");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
 r=n%10;
 sum=(sum*10)+r;
 n=n/10;
 }
 if(temp==sum)
 printf("Palindrome number");
 else
 printf("Not a palindrome number");
}
