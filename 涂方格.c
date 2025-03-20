#include<stdio.h>

int main(){
    int n;
    int mapp[105][105]={0};
    int x1,y1,x2,y2;
    int countsquare = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                mapp[i][j]=1;
            }
        }
    }
    for(int i=0;i<=101;i++){
        for(int j=0;j<=101;j++){
            if(mapp[i][j]==1){
                countsquare++;
            }
        }
    }
    printf("%d\n",countsquare);
    
    
    /*for(int i=0;i<=105;i++){
        for(int j=0;j<=105;j++){
            printf("%d",mapp[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}
  
