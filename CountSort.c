#include <stdio.h>

void countsort(int a[], int l, int r, int max)
{
    int b[max], i, length;
    length = r - l + 1;
    memset(b,0,sizeof(int)*max);


    for(i=0; i<length; i++)
    {
        b[a[i]] += 1 ;
    }
    for(i=1; i<max; i++)
    {
        b[i] += b[i-1];
    }
    for (i = 0; i < length; i++) {
        printf("%d is the %dth\n",a[i],b[a[i]]);
    }

    int n=0;
    for (i = 0; i < max; i++) {
        b[i] -= n;
        while (b[i]--) {
            printf("%dth is %d\n",n+1,i);
            n++;
        }
    }
}
int main(int argc, const char *argv[])
{
    int n = (int)*argv[1] - 48 , i;
    int a[n];
    for(i=0; i<n; i++)
    {
        a[i] = rand()%100;
        printf("a[%d] = %d\n", i, a[i]);
    }
    countsort(a, 0, n-1, 100);

    return 0;
}
