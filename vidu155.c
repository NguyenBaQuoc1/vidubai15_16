#include <stdio.h>

main() 
{
    int a , b , c ;
    a = b = c = 0 ;

    printf("\nNhap a : ");
    scanf("%d" , &a);
    printf("\nNhap b : ");
    scanf("%d" , &b);
    c = adder(a,b);
    printf("\nGia tri trong main cua a la %d , b la %d" , a , b);
    printf("\nGia tri cua c trong main la %d " , c);
}

adder(int a , int b)
{
    int c ;
    c = a + b ; 
    a *= a ; 
    b += 5 ;
    printf("\n\n a va b trong ham adder la : %d , %d", a , b);
    printf("\n c trong ham adder la : %d" , c);
    return (c);
}