#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};//�����б� 
int output(int sum){
	if(sum>=0&&sum<=10) printf("%s",num[sum]);
    if(sum>10&&sum<100){
        int a;
		a=sum/10;
        if(a==1) printf("ʮ");
        else{
            printf("%s",num[a]);
            printf("ʮ");
        }
        int b; 
        b=sum%10;   
        if(b!=0) printf("%s",num[b]); 
    }
    if(sum%100==0) printf("%d��",sum/100);
	if(sum>100&&sum<1000){
		int c=sum/100;
		if((sum%100)>19&&(sum%100)<=99){
            printf("%s��",num[c]); 
		    output(sum-c*100);
		}
		if((sum%100)>=10&&(sum%100)<=19){
		    printf("%d��һ",c);
		    output(sum%100);
		}
		if((sum%100)>0&&(sum%100)<=9) 
		printf("%d����%s",c,num[sum%100]);
	}
	if(sum<0){
		printf("��");
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
