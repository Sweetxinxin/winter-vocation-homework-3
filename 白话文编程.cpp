#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};//�����б� 
int transform(char z[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(z,num[i])==0) return i;//ת���㵽ʮ 
    }
} 

char str1[20],str2[20];
int change(char d[]){
    if (strlen(d)==2)   return transform(d);//ʮ���� 
    if (strlen(d)==4){
	        str1[0]=d[2];str1[1]=d[3];str1[2]='\0'; //ʮ�� 
            if (transform(str1)!=10)   return transform(str1)+10;  
            else{
			    str1[0]=d[0];str1[1]=d[1];str1[2]='\0';//��ʮ 
                return 10*transform(str1);
            }
		}
    if (strlen(d)==6){
	    str1[0]=d[0];str1[1]=d[1];str1[2]='\0';str2[0]=d[4];str2[1]=d[5];str2[2]='\0';//��ʮ�� 
        return  transform(str1)*10+transform(str2);
    }
} 

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
    char a[20],b[20],c[20],d[20];
    scanf("%s %s %s %s",a,b,c,d);
    char m[20],n[20],s[20],t[20],com[5],s1[20];
    int p=0,k;
    sum=change(d);
	getchar();
    for(;;){
        scanf("%s",m);
        if (strcmp("����",m)==0) break;
        scanf("%s",n);
        scanf("%s",s);
        com[0]=s[0]; com[1]=s[1]; com[2]='\0';
        if (strcmp("��",com)==0){
        	for(k=2;s[k]!='\0';k++){
        		s1[p++]=s[k];
			}
            if (strcmp("����",n)==0) sum-=change(s1);
            if (strcmp("����",n)==0) sum+=change(s1);
		}
		else{
			if (strcmp("����",n)==0) sum+=change(s);
            if (strcmp("����",n)==0) sum-=change(s);
		}
    } 
    scanf("%s",t);
    output(sum);
    return 0;
}
