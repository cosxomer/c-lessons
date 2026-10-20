#include <stdio.h>
#include <stdlib.h>


int main()
{

    /* code */



int number ;
while (1)


{
    printf("enter a number:");
    scanf("%d",&number);
if (number>0)
{
printf("positive number\n");
}
else if (number<0)
{
    printf("negative number\n");
}

else 
{
printf("number is 0\n");
}

}

return 0;

}