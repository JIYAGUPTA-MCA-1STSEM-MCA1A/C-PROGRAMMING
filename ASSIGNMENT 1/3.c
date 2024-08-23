// FIBONACCI SERIES
 #include<stdio.h>
void main()
{
 int n=10;
 int a = 0, b = 1;
 printf("****PROGRAM TO FIND THE FIBONNACI SERIES****\n");
 printf("NAME:JIYA GUPTA CLASS: MCA1A ROLLNO:27\n");
 printf("%d/,%d",a,b);
 int nextterm;
 for(int i=2;i<n; i++)
 {
 nextterm = a+b;
 a=b;
 b=nextterm;
 printf("%d",nextterm);
 }
}
