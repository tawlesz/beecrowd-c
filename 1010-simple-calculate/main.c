/*In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.
Input

The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.
Output

The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.
*/
#include <stdio.h>

typedef struct{
    int cod, n;
    float ppu;
}p;

int main() {
    p product[2];
    float v[2], total;
    for(int i = 0; i < 2; i++){
        scanf("%d", &product[i].cod);
        scanf("%d", &product[i].n);
        scanf("%f", &product[i].ppu);
        v[i] = (product[i].n * product[i].ppu);
    }    
    total = v[0] + v[1];
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}