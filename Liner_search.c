#include<stdio.h>
#include<conio.h>

#define MAX_ELEMENTS 50
#define TRUE  1
#define FALSE 0

int main()
{
    int i=0,
        found = TRUE,
        keyElements = 0,
        totalElements = 0,
        array[MAX_ELEMENTS];

    clrscr();
    printf("\nHow many elements");
    scanf("%d",&totalElements);
    for(i=0; i<totalElements; i++) {
        printf("\nEnter elements#%2d:",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nElements to search");
    scanf("%d",keyElement);
    found = FALSE ;
    for(i=0, i < totalElements; i++)
    {
        if(array[i] ==keyElement)
        { printf("\n%d is at %d", keyElement,i+1);
        found = TRUE;
        break;
        
        }
    }
    if (FALSE == found )
    { printf("\n%d is not at list." keyElements);
    }
    getch();
    
    return 0;
}