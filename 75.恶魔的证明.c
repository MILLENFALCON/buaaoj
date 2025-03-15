#include<stdio.h>


char a[10000];

int main(){
    
    int n,fash;
    while(~scanf("%d",&n)){
        fash = 0;
        scanf("%s",a);
        for(int i=1;i<n-1;i++)
        {
            if(a[i-1]>='a'&& a[i-1]<='z'&&a[i]>='A'&& a[i]<='Z'&&a[i+1]>='a'&&a[i+1]<='z')
            {
                fash = 1;
            }
        }
        if(fash == 1 ){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}
