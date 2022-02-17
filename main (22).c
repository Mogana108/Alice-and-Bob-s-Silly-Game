#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  main ()
{
    int N, i, j, a0;
    int test_cases;
    scanf("%d", &test_cases);
    for (a0 = 0; a0 < test_cases; a0++) {
        scanf("%d", &N);
        char arr[N+1];
        int b = 1;
        if (N == 1) {
            printf("Bob\n");
            continue;
        }

        for (i = 0; i <= N; i++)
             arr[i] = 1;

        for (i = 2; i <= sqrt(N); i++) {
             j = i+i;
             while (j <= N) {
                 arr[j] = 0;
                 j += i;
             }
        }
        int k = 0;
        for (i = 2; i <= N; i++) {
             if (arr[i])  {
                 ++k;
                 
                 b = abs(b-1);
             }
        } 
        
        if (b) {
            printf("Bob\n");
        } else {
            printf("Alice\n");
        }
    }
}
