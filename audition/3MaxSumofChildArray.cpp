#include <iostream>

using namespace std;

int maxSum(int *a, int n)
{
    int sum = 0;
    int b = 0;
    for(int i=0; i < n; i++)
    {
        if(b <= 0)
            b = a[i];
        else
            b += a[i];
        if(sum < b)
            sum =b;
    }
    return sum;
}

int main()
{
    int a[10] = {1,-2,3,10,-4,7,2,-5};
    cout << maxSum(a, 10) << endl;
    return 1;
}
