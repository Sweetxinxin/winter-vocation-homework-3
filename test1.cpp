#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};//�����б� 
int transform(char z[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(z,num[i])==0) return i;
    }
} 
int main(){
	int i;
	char num2[15][5]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
	for(i=0;i<11;i++){
		printf("%d\n",transform(num2[i]));
	}
	return 0;
}
