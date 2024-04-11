#include <stdio.h>
int Input(int arr[], int n)
{
int i;
	for(i = 0; i < n; i++)
	    scanf("%d" , &arr[i]);
	return i;
}

void BubbleSort(int arr[], int n)
{
int i= 0;
int j = 0;
int temp = 0;
for(i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
           if(arr[i] > arr[j])
           {
                temp = arr[i];
                arr[i] = arr[j];
                arr [j] = temp;
            }
        }
    }
}
void Print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int main()
{
enum {BUFFER_SIZE = 20};
int buffer[BUFFER_SIZE];
    Input(buffer,BUFFER_SIZE);
    BubbleSort(buffer, BUFFER_SIZE);
    Print(buffer,BUFFER_SIZE);
 return 0;
}
