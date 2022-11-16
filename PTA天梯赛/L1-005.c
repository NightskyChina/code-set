#include<stdio.h>
struct student
{
    long number[2000];
    int test_seat_number[2000];
    int seat_number[2000];
};
int main()
{
    int n,list[2000];
    scanf("%d", &n);
    struct student stu;
    for (int i = 0; i < n; i++)
        scanf("%ld %d %d", &stu.number[i],&stu.test_seat_number[i],&stu.seat_number[i]);
    int number,test_number;
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&test_number);
        for (int j = 0; j < n; j++)
            list[i] = test_number==stu.test_seat_number[j]?j:list[i];
    }
    for (int i = 0; i < number; i++)
        printf("%ld %d\n",stu.number[list[i]],stu.seat_number[list[i]]);
}