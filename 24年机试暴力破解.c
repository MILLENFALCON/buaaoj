#include<stdio.h>
#include<string.h>

void walk(char n[]){
    char m[10000];
    if(n[0]=='N'){m[0]='F';}
    if(n[0]=='S'){m[0]='B';}
    if(n[0]=='W'){m[0]='L';}
    if(n[0]=='E'){m[0]='R';}
    int len = strlen(n);
    for(int i=1;i<len;i++){
        if(n[i-1]=='N'&&n[i]=='N'){m[i]='F';}    
        if(n[i-1]=='N'&&n[i]=='S'){m[i]='B';}
        if(n[i-1]=='N'&&n[i]=='W'){m[i]='L';}
        if(n[i-1]=='N'&&n[i]=='E'){m[i]='R';}
        if(n[i-1]=='S'&&n[i]=='S'){m[i]='F';}
        if(n[i-1]=='S'&&n[i]=='N'){m[i]='B';}
        if(n[i-1]=='S'&&n[i]=='W'){m[i]='R';}
        if(n[i-1]=='S'&&n[i]=='E'){m[i]='l';}
        if(n[i-1]=='W'&&n[i]=='W'){m[i]='F';}
        if(n[i-1]=='W'&&n[i]=='E'){m[i]='B';}
        if(n[i-1]=='W'&&n[i]=='N'){m[i]='R';}
        if(n[i-1]=='W'&&n[i]=='S'){m[i]='L';}
        if(n[i-1]=='E'&&n[i]=='E'){m[i]='F';}
        if(n[i-1]=='E'&&n[i]=='W'){m[i]='B';}
        if(n[i-1]=='E'&&n[i]=='S'){m[i]='R';}
        if(n[i-1]=='E'&&n[i]=='N'){m[i]='L';}
    }
    m[len]='\0';
    printf("%s",m);
}
int main(){
    char n[10000];
    scanf("%s",n);
    walk(n);
    return 0;
}    
