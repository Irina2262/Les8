#include <stdio.h>

int Input(int arr[], int n)
{
int i;
    for( i = 0; i< n; i++)
        scanf("%d",&arr[i]);
 return i;
}
int Max(int *arr,int len)
{
int max=arr[0];
 for (int i = 1; i < len; i++)
 if (max < arr[i])
 max = arr[i];
 return max;
}
int main() {
enum {SIZE = 100};
int in[SIZE];
 Input(in,SIZE);
 printf("%d",Max(in,SIZE));
 return 0;
}
