#include <stdio.h>

main()
{
    int x , y , *px , *py ;
    px = &x;
    py = &y;
    x = 15 , y = 20 ;
    printf("x = %d , y = %d" , x , y);
    swap(px , py);
    printf("\n sau khi trao doi x=%d , y=%d" , x , y);
}
swap(int *u , int *v)
{
    int  temp ;
    temp = *u ;
    *u = *v ;
    *v = temp ;
    return;
}