#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ISBN;
    int GSI,identifier;
    int publisher,number,digit;

    printf("Enter ISBN\n",ISBN);
    scanf("%d",&GSI);
     scanf("%d",&identifier);
     scanf("%d",&publisher);
     scanf("%d",&number);
     scanf("%d",&digit);
   printf("GSI prefix:%d\n",GSI);
   printf("group identifier:%d\n",identifier);
   printf("publisher code:%d\n",publisher);
   printf("Item number:%d\n",number);
   printf("check digit:%d",digit);

    return 0;
}
