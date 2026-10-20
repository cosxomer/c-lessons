#include <stdio.h>
#include <stdlib.h>


int main()
 {

int side1,side2,side3,eskenar,cesitkenar,ikizkenar;
while (1)
{
    /* code */


printf("Enter 3 angle of triangle:");
scanf("%d%d%d",&side1,&side2,&side3);

if ((side1+side2+side3)!=180 || side1<=0  || side2<=0 || side3<=0)
{
    printf("Bu bir ucgen degildir\n");

    continue;
}
else if (side1==0 && side2==0  && side3==0)
{
    printf("Bu bir ucgen degildir\n");
    continue;
}

else {

if (side1==side2  && side2==side3)
{
    printf("Eskenar ucgen\n");
}

else if (side1==side2)
{
    printf("Ikizkenar ucgen\n");
}


else if (side1==side3)
{
    printf("Ikizkenar ucgen\n");
}


else if (side2==side3)
{
   printf("Ikizkenar ucgen\n");
}

else
{

printf("Cesitkenar bir ucgendir\n");


}

}

}


return 0;

 }



