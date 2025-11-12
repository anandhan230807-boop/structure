#include<stdio.h>
 struct student{
 	char rollno[10];
 	char name[20];
 	int m1,m2,m3;
 	float avg;
 };
  int main(){
  	int n;
  	scanf("%d",&n);
  	struct student s[n];
  	for(int i=0;i<n;i++){
  	    printf("Enter your roll number:");
  	    scanf("%s",s[i].rollno);
        printf("Enter your name:");
        scanf("%s",s[i].name);
        printf("Enter M1:");
        scanf("%d",&s[i].m1);
        printf("Enter M2:");
        scanf("%d",&s[i].m2);
        printf("Enter M3:");
        scanf("%d",&s[i].m3);
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;
        printf("Enter another member details:\n");
  }
   printf("The members above 50 avg is\n");
     	for(int i=0;i<n;i++){
		  if(s[i].avg>50){
		        printf("Roll no:%s\n",s[i].rollno);
		        printf("Name:%s\n",s[i].name);
		        printf("M1,M2,M3:%d %d %d\n",s[i].m1,s[i].m2,s[i].m3);
		        printf("avg:%f\n",s[i].avg);
		    }
		}
		 printf("The members blow 50 avg is\n");
	    for(int i=0;i<n;i++){
		  if(s[i].avg<50){
		        printf("Roll no:%s\n",s[i].rollno);
		        printf("Name:%s\n",s[i].name);
		        printf("M1,M2,M3:%d %d %d\n",s[i].m1,s[i].m2,s[i].m3);
		        printf("avg:%f\n",s[i].avg);
		    }
		}
		return 0;
	}
		        
		        
		        
		        