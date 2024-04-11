#include <stdio.h>
int Input(int arr[], int n)
{
int i;
    for( i = 0; i< n; i++)
        scanf("%d",&arr[i]);
 return i;
}
int SortOddEven(int arr[], int n,int
odd[],int even[])
{
int cntrOdd=0;
int cntrEven=0;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] % 2)
            odd[cntrOdd++] = arr[i];
        else
            even[cntrEven++] = arr[i];
    }
    return cntrOdd;
}
void Print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",arr[i]);
}
int main()
{
enum {BUFFER_SIZE = 20};
int buffer[BUFFER_SIZE];
int bufferOdd[BUFFER_SIZE];
int bufferEven[BUFFER_SIZE];
    Input(buffer,BUFFER_SIZE);
int cntrOdd =
SortOddEven(buffer,BUFFER_SIZE,bufferOdd,bufferEven);
    Print(bufferEven,BUFFER_SIZE -
cntrOdd);
    Print(bufferOdd,cntrOdd);
    return 0;
}
