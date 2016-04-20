#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int t,n,k;
    scanf("%d", &t);

    int i, j;
    for(i=0;i<t;++i)
        {
        scanf("%d %d", &n, &k);

        int a;

        for(j=0;j<n;++j)
            {
            scanf("%d", &a);
            if(a<=0)
              k--;
        }
        
        if(k<=0)
            printf("NO\n");
        else
            printf("YES\n");

    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
