#include<stdio.h>
#include<math.h>

void suan(long long n){
    
    if(n==1)
    {
        printf("jhljx is sangxinbingkuang!\n");
    }
    else if(n==2||n==3){
        printf("jhljx is good!\n");
    }
    else
    {
        int bsa = 0;
        long long i;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i == 0)
            {
                bsa=bsa+1;
            }
        }
        if(bsa == 0)
        {
            printf("jhljx is good!\n");
        }
        else
        {
            printf("jhljx is sangxinbingkuang!\n");
        }
    }
}
int main(){
    long long n;
    
    while(~scanf("%lld",&n)){
        suan(n);
    }
}
