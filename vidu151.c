#include <stdio.h>

main()
{
    int i ;
    for(i=1 ; i<=10 ; i ++){
        printf("\nSquare of %d is %d " , i , squarer(i)); // i = 1
    }
}
squarer(int x) // int x = 1
{
    int j ;
    j = x * x; // j = 1*1
    return (j);
}