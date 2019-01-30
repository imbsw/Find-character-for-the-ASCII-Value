#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int value;

    printf("Enter ASCII Value:");
    scanf("%d",&value);

    ch=(char)value;

    printf("Character for ASCII value %d is %c",value,ch);

    return 0;
}
