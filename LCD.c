// Least Common Divisor#include<stdio.h>int GCD(int a,int b);int max(int a,int b);int main () {        int a,b;        //printf("Enter the numbers\n");    scanf("%d %d", &a,&b);    printf("The GCD is = %d\n",GCD(a,b));        int LCD = max(a,b)/GCD(a,b);        printf("The LCD is = %d\n",LCD);}int GCD(int a,int b){        if (a == 0 || b == 0)        return a+b;    else if (a > b)        return GCD(a%b , b);    else        return GCD(a , b%a);}int max(int a,int b){        if (a>b)        return a;    else        return b;    }