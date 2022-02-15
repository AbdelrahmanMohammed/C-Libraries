
static int max=0x800000000,
           max2=0x800000000,
           min=0xfffffff,
           min2=0xfffffff;     //signed int
                               //max -> max2 -> ... -> min2 -> min

void take_num(int num)
{
    if(num>max)
    {
        max2=max;
        max=num;
    }
    if(num<min)
    {
        min2=min;
        min=num;
    }
}

int get_min()
{
    return min;
}
int get_2nd_min()
{
    return min2;
}

int get_max()
{
    return max;
}
int get_2nd_max()
{
    return max2;
}

//task2-4/2/2022
void max_min_num()
{
    int num;
    while(1)
    {
        printf("enter a number : ");
        scanf(" %d",&num);
        if(num==0)
            break;
        else
            take_num(num);
    }
    printf("min : %d\n",get_min());
    printf("max : %d\n",get_max());
}

//task1-4/2/2022
int max_num(int num)
{
    /*
    //test code
    printf("%d\n",max_num(10));
    printf("%d\n",max_num(15));
    printf("%d\n",max_num(1));
    printf("%d\n",max_num(12));
    printf("%d\n",max_num(19));
    printf("%d\n",max_num(1));
    printf("%d\n",max_num(10));
    printf("%d\n",max_num(11));
    */
    static int max=0;
    if(num>max)
        max=num;
    return max;
}
