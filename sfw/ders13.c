#include <stdio.h>
#include <stdlib.h>

int main()


{

int mynumber1,mynumber2,mynumber3,max,min,mid;
printf("Enter 3 number:");
scanf("%d%d%d",&mynumber1,&mynumber2,&mynumber3);

if (mynumber1>mynumber2)
{
    if (mynumber1>mynumber3)
    {
        if (mynumber2>mynumber3)
        {
            max=mynumber1;
            mid=mynumber2;
            min=mynumber3;
        }
        else{

         max=mynumber1;
         mid=mynumber3;
         min=mynumber2;
        }
    } 
    else{

mid=mynumber1;
max=mynumber3;
min=mynumber2;

    }
}

else if (mynumber1>mynumber3)
{
  mid=mynumber1;
  max=mynumber2;
  min=mynumber3;
   
}

else
{
if (mynumber2>mynumber3)
{
   min=mynumber1;
   max=mynumber2;
   mid=mynumber3;
}
else
{
max=mynumber3;
mid=mynumber2;
min=mynumber1;
}

}

printf("max number:%d\n",max);
printf("mid number:%d\n",mid);
printf("min number:%d\n",min);








    return 0;
}