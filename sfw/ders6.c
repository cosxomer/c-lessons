#include <stdio.h>
#include <stdlib.h>

int main ()

{


int score ;

while (1)


{

printf("Enter Your Score:");
scanf("%d",&score);


if (score>=60)
{
printf("\nCongratulations,you passed the exam\n");
}


else
{
printf("\nUnfortunately you didnt pass the exam\n");
}

printf("kod hatasiz\n");


}


    return 0;
}