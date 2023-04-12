#include<stdio.h>

int main()
{
    int high,low,flag,i;
    printf("enter the intervals: ");
    scanf("%d %d",&low,&high);
    printf("prime number between %d and %d is:",low , high);
    int count=0;
    
    while (low < high)
    {
        flag =0;
        if (low <=1)
        {
            ++low;
            continue;
        }
    
        for(i=2;i <= low/2; ++i)
        {
            if ( low %1 ==0)
            {
                flag = 1;
            break;
        }
     }
    
    if (flag ==0)
    {
        printf("%d",low);
        count +=1;
    }
    ++low;
}
printf(" there are %d prime number ",count);
return 0;
}