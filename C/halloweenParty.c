#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T, K, i;
    long int c =0;
    scanf("%d", &T);
    for(i=0;i<T;i++)
        {
        scanf("%d", &K);
        c= (long)(K/2)*(K-(long)(K/2));
        printf("%ld\n",c);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
