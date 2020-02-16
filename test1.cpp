#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"零","一","二","三","四","五","六","七","八","九","十"};//数字列表 
int transform(char z[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(z,num[i])==0) return i;
    }
} 
int main(){
	int i;
	char num2[15][5]={"零","一","二","三","四","五","六","七","八","九","十"};
	for(i=0;i<11;i++){
		printf("%d\n",transform(num2[i]));
	}
	return 0;
}
