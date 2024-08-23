// CONVERTING CELCIUS TO FAHRENHEIT AND VICE VERSA
 #include<stdio.h>
void main()
{
 float fah, cel;
 int choice;
 printf("****PROGRAM TO CONVERT CELCIUS TO FAHREHEIT***\n");
printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf("\n1:Convert temperature from Fahrenheit to Celsius:");
 printf("\n2:Convert temperature from Celsius to Fahrenheit:");
 printf("\n enter your choice(1,2):");
 scanf("%d",&choice);
 if(choice==1)
 {
 printf("\n Enter temperature in Fahrenheit:");
 scanf("%f",&fah);
 cel=(fah-32)/1.8;
 printf("Temperature in celcius:%f",cel);
 }
 else if(choice ==2)
 {
 printf("\nEnter temperature in celcius:");
 scanf("%f",&cel);
 fah=(cel*1.8)+32;
 printf("Temperature in Fahrenheit:%2.f",fah);
 }
 else
 printf("\n Invalid Choice!!!");
}
