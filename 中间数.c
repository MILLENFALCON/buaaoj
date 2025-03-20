#include<stdio.h>

int main(){
    int n,left=0,right=0,realmid =-1;
    int a[1010];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int mid = a[i];
        left = 0;
        right = 0;
        for(int i=0;i<n;i++){
            if(a[i]<mid){
                left ++;
            }
            if(a[i]>mid){
                right++;
            }
        }
        //printf("%d %d %d\n",left,right,mid);
        if(left==right){
            realmid = mid;
        }
    }
    printf("%d",realmid);
    return 0;
}
