#include <stdio.h>
#include <stdlib.h>


int main()

{
 
char *dayname;
int numberOfProducts,day;
while (1)
{

numberOfProducts=0;
day=0;

printf("Enter a day of number (1-7) :");
scanf("%d",&day);
if (day<1 || day>7)
{
    printf("Please Enter a number between 1-7\n");
    continue;
}

switch (day)
{
case 7:numberOfProducts+=25;
    if (day==7) {dayname="Sunday";}
case 6:numberOfProducts+=19;
    if (day==6) {dayname="Saturday";}
case 5:numberOfProducts+=15;
    if (day==5) {dayname="Friday";}
case 4:numberOfProducts+=10;
    if (day==4) {dayname="Thursday";}
case 3:numberOfProducts+=7;
    if (day==3) {dayname="Wednesday";}
case 2:numberOfProducts+=5;
    if (day==2) {dayname="Tuesday";}
case 1:numberOfProducts+=2;
    if (day==1) {dayname="Monday";}
}

printf("You got earn %d dollar total in %s\n",numberOfProducts,dayname);


}







    return 0;
}