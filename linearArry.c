
#include <stdio.h>
 #include <stdlib.h>
void display(int arr[],int size)
{
    for (int i = 0; i <= size-1; i++)
    {
        printf("Array[%d] = %d\n",i,arr[i]);
    }
    
}
int addElement(int  arr[], int element, int index,int capacity,int size)
{

    if(size >= capacity)
    {
        return - 1;
    }
    for(int i = size -1;i>=index;i--)
    {
        arr[index+1] = arr[index];
    }
    arr[index] = element;
    return 1;
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
    int arr[10] = {1,2,3,5,6};
    int size = 5;
    int index = 2;
    printf("Adding Elements\n");
    addElement(arr,7,5,10,size);
    size+=1;
    display(arr,size);
    // // Delete x from arr[]
    printf("Deletion\n");
    delete(arr,index,size);
    size-=1;
    display(arr,size);
    

    

}