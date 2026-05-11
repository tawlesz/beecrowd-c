/*
In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.
Input

The input file contains an integer value N (0 < N < 1000000).
Output

Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.
*/

#include <stdio.h>
 
int main() {
 
    int N, n[7] = {0}, original;
    do{

        scanf("%d", &N);

    }while(!((0 < N )&&(N < 1000000)));
    original = N;

    
    while(N >= 100){
        n[0]++;
        N = N - 100;
    }
    while(N >=50){
        n[1]++;
        N = N - 50;
    }
    while(N >=20){
        n[2]++;
        N = N - 20;
    }
    while(N >=10){
        n[3]++;
        N = N - 10;
    }
    while(N >=5){
        n[4]++;
        N = N - 5;
    }
    while(N >=2){
        n[5]++;
        N = N - 2;
    }
    while(N >=1){
        n[6]++;
        N = N - 1;
    }
    
    printf("%d\n", original);
    printf("%d nota(s) de R$ 100,00\n", n[0]);
    printf("%d nota(s) de R$ 50,00\n", n[1]);
    printf("%d nota(s) de R$ 20,00\n", n[2]);
    printf("%d nota(s) de R$ 10,00\n", n[3]);
    printf("%d nota(s) de R$ 5,00\n", n[4]);
    printf("%d nota(s) de R$ 2,00\n", n[5]);
    printf("%d nota(s) de R$ 1,00\n", n[6]);
    return 0;
}