#include <stdio.h>
#include <stdlib.h>

int main ()

{

char myCharacter ;

while (1)
{
   
printf("Enter a character:");
scanf(" %c",&myCharacter);

if (myCharacter>='A'  && myCharacter<='Z')
{
    printf(" %c is an uppercase letter\n",myCharacter);
}

else if (myCharacter>='a'  && myCharacter<='z')
{
    printf(" %c is an lowercase letter\n",myCharacter);

}

else
{
    printf(" %c is not letter\n",myCharacter);
}




}


    return 0;
}