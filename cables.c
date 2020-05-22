#include <stdlib.h>
#include <stdio.h>
int cables(int n, int d)
{
    if(n <= 0 || d <= 0)
    {
        return 0;
    }
    return d*(n+1)*n/2;
}
int main(int argc, char **argv)
{
    int N = atoi(argv[1]);
    int D = atoi(argv[2]);
    printf("%d\n", cables(N,D));
}
