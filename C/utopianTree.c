#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int t, n, a;
    scanf("%d", &t);
    while(t--) {
        a=1;
        scanf("%d", &n);
        for(int i=1; i<=n; i++) {
            if(i%2) a<<=1;
            else a++;
        }
        printf("%d\n", a);
    }
    return 0;
}
