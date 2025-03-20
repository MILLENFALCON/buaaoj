#include<stdio.h>
#include<string.h>


int q[1010];
int n,m;
void change(int goal,int pos){
    int j=1;
    for(j=1;j<n+1;j++){
        if(q[j]==goal){
        break;
        }
    }
    if(pos>0){
    for(int k=j+1;k<=j+pos;k++)    
    {
            int temp = q[k-1];
            q[k-1]=q[k];
            q[k]=temp;
    }
    }
    else{
                for(int k=j-1;k>=j+pos;k--)
                {
                int temp= q[k+1];
                q[k+1]=q[k];
                q[k]=temp;
                }
    }
}
int main(){
    
    scanf("%d %d",&n,&m);
    for(int i=1;i<n+1;i++){
        q[i] = i;
    }
    while(m--){
        int a,b;
        scanf("%d %d",&a,&b);
        change(a,b);
    }
    for(int i=1;i<=n;i++){
        printf("%d ",q[i]);        
    }
    return 0;
}
