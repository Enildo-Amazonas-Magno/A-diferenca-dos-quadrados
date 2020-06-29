#include <stdio.h>
#include <math.h>
int main()
{
    int oddNumber, a, b;
    double square1, square2;
    oddNumber=1;
    while(oddNumber!=0)
    {
        square1=0; 
        scanf("%d", &oddNumber);
        if(oddNumber!=0)
        { 
            a=(oddNumber/2)*(oddNumber/2);
            b=((oddNumber/2)+1)*((oddNumber/2)+1);
            printf("%d - %.d\n", b, a);
                
        }
    }       
    return 0;
}
