#include<stdio.h>

int main(){
    int n,k;
    int a[1010];
    int friend = 0;
    int weight = 0;
    scanf("%d %d\n",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(weight<k&&i<=n-1){
            weight=a[i]+weight;
        }
        if(weight+a[n]<k&&i==n){
            friend++;
        //printf("%d %d \n",i,friend);
            }
        if(weight>=k){
            friend++;
            weight = 0;
        //printf("%d %d \n",i,friend);
            }
        
    }
    printf("%d",friend);
}
