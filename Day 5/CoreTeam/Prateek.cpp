/*-------------To print all the natural numbers between n and m------------*/

#include <stdio.h>

int main()
{
    int n=0, m=0;
    int i=0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter m: ");
    scanf("%d", &m);

    if(m<0 || n<0)
        printf("Input positive values only.\n");

    else{
        for(i =n; i<=m && i>=n; i++)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
