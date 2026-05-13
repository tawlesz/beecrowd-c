/*
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
Input

The input file contains an integer N.
Output

Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.
*/

#include <stdio.h>

int sectoh(int n);
 
int main() {
 
    int N;
    scanf("%d", &N);
    sectoh(N);

    return 0;
}

int sectoh(int n){

    int h=0, m=0, s=0;
    while(n > 3600){
        h = n/3600;
        n = n % 3600;
    }
    while(n > 60){
        m=n/60;
        n = n % 60;
    }
    s = n;
    printf("%d:%d:%d\n", h, m, s);

}