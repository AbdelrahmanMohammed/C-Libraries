
void selection_sort(int* arr,int size)
{
    if(arr==0)
        return;
    int i,j,max=0;
    for(j=0; j<size; j++)
    {
        for(i=0; i<size-j; i++)
        {
            if(arr[i]>arr[max])
            {
                max=i;
            }
        }
        swap_int(arr+max,arr+size-j-1);
        max=0;
    }
}

void bubble_sort(int* arr,int size)
{
    if(arr==0)
        return;
    int i,j;
    for(j=0; j<size; j++)
    {
        for(i=0; i<size-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap_int(arr+i,arr+i+1);
            }
        }
    }
}

void quick_sort(int*number,int first,int last)
{
    if(number==0)
        return;
    int i,j,pivot;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(number[i]<=number[pivot]&&i<last)
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j)
            {
                swap_int(number+i,number+j);
            }
        }
        swap_int(number+pivot,number+j);
        quick_sort(number,first,j-1);
        quick_sort(number,j+1,last);

    }
}
