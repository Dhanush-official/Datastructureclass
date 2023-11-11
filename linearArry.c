//consist of Traversing , Adding and Deleting of an element in an array


#include <stdio.h>
#include <stdlib.h>

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


int main()
{
    int ptr[] = {1,2,3,4,5,7};
    
    int newsize = sizeof(ptr)/sizeof(ptr[0]);
    add(ptr,6,5,newsize);

}