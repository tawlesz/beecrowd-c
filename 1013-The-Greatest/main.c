/*
Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

Input

The input file contains 3 integer values.
Output

Print the greatest of these three values followed by a space and the message “eh o maior”.
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
 
    int MaiorAB, A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    MaiorAB = (A + B + abs(A-B))/2;
    if(C >= MaiorAB){
        MaiorAB = (C + MaiorAB + abs(C-MaiorAB))/2;
    }

    printf("%d eh o maior\n", MaiorAB);

    return 0;
}