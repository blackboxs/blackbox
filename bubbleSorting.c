//bubble sorting//
#include<stdio.h>


int swap(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    return 0;
}



int main()
{
    int array[100];
    int size,count=0;
    int size1;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter elements of array: ");
    for(count=0;count<size;count++)
    {
        scanf("%d",&array[count]);
    }
    size1=size;
    while(size1!=0)
    {
        for(count=0;count<size1-1;count++)
        {
            if(array[count]>array[count+1])
                swap(&array[count],&array[count+1]);
        }
        size1--;
    }
    for(count=0;count<size;count++)
    {
        printf("%d ",array[count]);
    }
    return 0;
}
