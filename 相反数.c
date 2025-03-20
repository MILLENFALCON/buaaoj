#include<stdio.h>

int main(){
    int n;
    int a[510];
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]+a[j]==0){
                count++;
            } 
        }
    }
    printf("%d",count);
    return 0;
}
