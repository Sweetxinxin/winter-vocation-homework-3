#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"零","一","二","三","四","五","六","七","八","九","十"};
int transform(char z[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(z,num[i])==0) return i;
    }
} 
char str1[20],str2[20];
int change(char d[]){
    if(strlen(d)==2) return transform(d);
    if(strlen(d)==4){
	        str1[0]=d[2];str1[1]=d[3];str1[2]='\0';     
            if(transform(str1)!=10) return transform(str1)+10;  
            else{
			    str1[0]=d[0];str1[1]=d[1];str1[2]='\0';
                return 10*transform(str1);
            }}
    if(strlen(d)==6){
	    str1[0]=d[0];str1[1]=d[1];str1[2]='\0';str2[0]=d[4];str2[1]=d[5];str2[2]='\0';
        return transform(str1)*10+transform(str2);
    }} 
int main(){
	int i;
	char m[100];
	for(i=0;i<10;i++){
		scanf("%s",m);
		printf("%d",change(m));
	}
	return 0;
} 
