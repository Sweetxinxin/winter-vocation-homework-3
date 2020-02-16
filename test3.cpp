#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"零","一","二","三","四","五","六","七","八","九","十"};//汉字列表 
int output(int sum){
	if(sum>=0&&sum<=10) printf("%s",num[sum]);
    if(sum>10&&sum<100){
        int a;
		a=sum/10;
        if(a==1) printf("十");
        else{
            printf("%s",num[a]);
            printf("十");
        }
        int b; 
        b=sum%10;   
        if(b!=0) printf("%s",num[b]); 
    }
    if(sum%100==0) printf("%d百",sum/100);
	if(sum>100&&sum<1000){
		int c=sum/100;
		if((sum%100)>19&&(sum%100)<=99){
            printf("%s百",num[c]); 
		    output(sum-c*100);
		}
		if((sum%100)>=10&&(sum%100)<=19){
		    printf("%d百一",c);
		    output(sum%100);
		}
		if((sum%100)>0&&(sum%100)<=9) 
		printf("%d百零%s",c,num[sum%100]);
	}
	if(sum<0){
		printf("负");
		output(-sum);
	}
} 
int main(){
	int i;
	for(i=0;i<10;i++){
		scanf("%d",sum);
		output(sum);
	}
	return 0;
} 
