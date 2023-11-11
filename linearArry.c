
#include <stdio.h>
 #include <stdlib.h>
void display(int arr[],int size)
{
    for (int i = 0; i <= size; i++)
    {
        printf("Array[%d] = %d\n",i,arr[i]);
    }
    
}
void add(int  arr[], int element, int index,int newsize)
{

    newsize++;
    for(int i = 0;i<= newsize;i++)
    {
        arr[index+1] = arr[index];
    }
    arr[index] = element;
    for(int j = 0; j <=newsize-1;j++)
    {
        printf("arry %d index[%d]\n",arr[j],j);
    }
 }
int delete(int arr[],int index,int size)
{
    for(int i = index;i<size - 1;i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{
    int arr[] = {1,2,3,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 2;
 
    // Delete x from arr[]
    delete(arr,index,size);
    size-=2;
    display(arr,size);
    

    

}