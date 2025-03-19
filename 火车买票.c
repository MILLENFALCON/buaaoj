#include<stdio.h>
#include<string.h>
    
int main(){
    int n;
    int buy[1000];
    int a[101]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&buy[i]);
    }
    for(int i=0;i<n;i++){
        if(buy[i]==1){
            for(int j=1;j<101;j++){
                if(a[j]==0){
                    a[j]=1;
                    printf("%d\n",j);
                    break;
                }
            }
        }
        if(buy[i]==2){
            for(int j=1;j<101;j++){
                if(a[j]==0&&a[j+1]==0&&j/5==(j+1)/5){
                    a[j]=1;
                    a[j+1]=1;
                    printf("%d %d\n",j,j+1);
                    break;
                }
            
            }
        }
        if(buy[i]==3){
            for(int j=1;j<101;j++){
                if(a[j]==0&&a[j+1]==0&a[j+2]==0&&j/5==(j+2)/5){
                    a[j]=1;
                    a[j+1]=1;
                    a[j+2]=1;
                    printf("%d %d %d\n",j,j+1,j+2);
                    break;
                }
            
            }
        }
        if(buy[i]==4){
            for(int j=1;j<101;j++){
                if(a[j]==0&&a[j+1]==0&a[j+2]==0&&a[j+3]==0&&j/5==(j+3)/5){
                    a[j]=1;
                    a[j+1]=1;
                    a[j+2]=1;
                    a[j+3]=1;
                    printf("%d %d %d %d\n",j,j+1,j+2,j+3);
                    break;
                }
            
            }
        }
        if(buy[i]==5){
            for(int j=1;j<101;j++){
                if(a[j]==0&&a[j+1]==0&a[j+2]==0&&a[j+3]==0&a[j+4]==0&&j%5==1){
                    a[j]=1;
                    a[j+1]=1;
                    a[j+2]=1;
                    a[j+3]=1;
                    a[j+4]=1;
                    printf("%d %d %d %d %d\n",j,j+1,j+2,j+3,j+4);
                    break;
                }
            }
            
        }
    }
}  
