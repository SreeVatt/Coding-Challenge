#include<stdio.h>
int isleapyear(int year)
    {
        if(year<1981)
        {
            return(year%4==0);
            
        }
        else if(year>1981)
        {
            return(year%400 || (year%4==0 && year%100!=0));
        }
        else
        {
            return 0;
        }
    }
void programmerday(int year)
{
    int day=13;
    if(year==1918)
    {
        day=26;
    }
    else if(isleapyear(year))
    {
        day=12;
    }
    printf("%02d.09.%d\n",day,year);
}
int main()
    {
        int year;
        scanf("%d",&year);
        programmerday(year);
        
        return 0;
    }