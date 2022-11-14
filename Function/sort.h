int bubble_sort(int array[],int len)
{
    int i,j,temp;
    for (i = 0; i < len; i++)
    {
        for (j = len-1; j>i; j--)
        {
            if (array[j]>array[j-1])
            {
                temp=array[j-1];
                array[j-1]=array[j];
                array[j]=temp;
            }
        }
    }
    return 0;
}
int Max(int first,int second)
{
    if (first>second) return first;
    else return second;
}
int Min(int first,int second)
{
    if (first<second) return first;
    else return second;
}
int ArrayMin(int array[],int len)
{
    int i,min=array[0];
    for (i = 0; i < len; i++)
    {
        if (array[i]<=min&&array[i]!=0)
        {
            min=array[i];
        }
    }
    return min;
}
void ReverseOrder(char str[],int len)
{
    char temp;
    for (int i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}