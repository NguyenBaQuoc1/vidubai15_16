#include <stdio.h>

main(){
    incre();
    incre();
    incre();
}

incre()
{
    static char var = 65 ; // bien
    printf("\n ky tu duoc luu tru trong var la : %c" , var++);
}