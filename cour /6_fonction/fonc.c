#include <stdio.h>


int sumult(int a ,int b,int *somme,int *prod)
{
    *somme = a+b;
    *prod = a*b;
    return 0;
}

int main()
{
    int a,b,somme,prod;
    a=3;
    b=4;
    sumult(a,b,&somme,&prod);
    printf("test fonction 3+4 = %d\n 3*4=%d\n",somme,prod);
    return 0;
}







