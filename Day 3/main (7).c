#include <stdio.h>

int hasuniquedigits(int num){
    int seen[10]={};
    while(num>0){
        int digit=num%10;
        if(seen[digit]++){
            return 0;
        }
        return 1;
    }
}
int main() {
    int lower,upper,count=0;
    scanf("%d %d",&lower,&upper);
    for(int i=lower;i<upper;i++){
        if(hasuniquedigits(i)){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}