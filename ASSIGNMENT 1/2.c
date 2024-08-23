// SUM OF POSITIVE INTEGER NUMBER
 #include<stdio.h>
void main()
{
 int sum=0,n;
 printf("****PROGRAM TO FIND THE SUM OF POSITIVE INTEGER NOS****\n");
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf(" enter a positive integer numbers:");
 scanf("%d",&n);
 while(n>0)
 {
 sum=sum+n%10;
 n=n/10;
 }
 printf("sum of individual digits of a positive integer is %d",sum);
}
