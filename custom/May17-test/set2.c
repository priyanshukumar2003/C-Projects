// WAP to display nth term of fibonacci series

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
        printf("%d ", n);
    else
    {
        int t1 = 1, t2 = 1, nxt;
        for (int i = 3; i <= n; i++)
        {
            nxt = t1 + t2;
            t1 = t2;
            t2 = nxt;
        }
        printf("%d ", nxt);
    }
    return 0;
}