 
#include <stdio.h>

int main()
{
 int i, j, N;
    scanf("%d", &N);
    for (int i = N; i > 0; i--)
    {
        for (j = 0; j < N - i; j++)
        {
            printf("%d ", N-j);
        }

        for(j = 1; j <= i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

}


//output

// 5 5 5 5 5
// 5 4 4 4 4
// 5 4 3 3 3
// 5 4 3 2 2
// 5 4 3 2 1
