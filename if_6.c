#include<stdio.h>
int main()
{
    int m1,m2,m3,total,avg;
    printf("Enter marks of 3 subjects:\n");
    scanf("%d %d %d", &m1, &m2, &m3);
    if(m1<35 || m2<35 || m3<35)
    {
        printf("Student is fail");
    }
    else{
        total=m1+m2+m3;
        avg=total/3;
    if(avg>=70)
    {
        printf("Grade is distinction");
    }
    else if(avg>=60)
    {
        printf("Grade is first");
    }
    else if(avg>=50)
    {
        printf("Grade is second");
    }
    else if(avg>=35)
    {
        printf("Grade is third class");
    }
    }
}