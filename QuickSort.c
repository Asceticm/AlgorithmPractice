#include <stdio.h>

int pivot(int*, int, int);
void quicksort(int *, int, int);

void main(int argc,char **argv)
{
    int n = (int)*argv[1] - 48;
    int i,a[n-1];

    for(i = 0;i < n;i++)
    {
        a[i] = rand()%100;
        printf("%d\t", a[i]);
    }

    printf("\n");
    quicksort(a, 0, n-1);
    printf("Sorted\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void quicksort(int a[], int l, int r)
{
    if(l<r)
    {
        int offset;
        offset = pivot(a,l,r);

        quicksort(a,l,offset-1);
        quicksort(a,offset+1,r);
    }
}

int pivot(int a[],int l, int r)
{
    int i = l, j = l + 1, pivot, temp,n; 
    n = rand()%(r-l);
    n += l;
    pivot = a[n];
    a[n] = a[l];
    a[l] = pivot;

    while(j <= r)
    {
        if(a[j] < pivot)
        {
            temp = a[i];
            a[i++] = a[j];
            a[j] = temp;
        }
        j++;
    }
    a[i] = pivot;
    n = i;

    return n;
}
