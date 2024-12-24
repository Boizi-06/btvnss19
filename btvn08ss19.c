#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct Students{
	int id;    
	char name[30];
  	int age;
  	char phone[15];
}st;
void printfstudents(st students[],int n);

int main(){
	st students[5];
	int i;
	for(i=0;i<5;i++){
		students[i].id=i+1;
		printf("moi ban nhap ten cua sinh vien thu %d:\n",i+1);
		fgets(students[i].name,sizeof(students[i].name),stdin);
		students[i].name[strcspn(students[i].name,"\n")]=0;
		printf("moi ban nhap so tuoi\n");
		scanf("%d",&students[i].age);
		getchar();
		printf("moi ban nhap so dien thoai\n");
		fgets(students[i].phone,sizeof(students[i].phone),stdin);
		students[i].phone[strcspn(students[i].phone,"\n")]=0;
	}
	printf("truoc khi xap xep\n");
	for(i=0;i<5;i++){
		printf("thong tin sinh vien thu %d\n",i+1);
		printf("id:%d\n",students[i].id);
		printf("ten:%s\n",students[i].name);
		printf("tuoi:%d\n",students[i].age);
		printf("so dien thoai:%s\n",students[i].phone);
	}
	printf("sau khi xap xep\n");
	printfstudents(students,5);
	return 0;
}
void printfstudents(st students[],int n){
	int j,i;
	st temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(students[i].name,students[j].name)>0){
				temp=students[i];
				students[i]=students[j];
				students[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("thong tin sinh vien thu %d\n",i+1);
		printf("id:%d\n",students[i].id);
		printf("ten:%s\n",students[i].name);
		printf("tuoi:%d\n",students[i].age);
		printf("so dien thoai:%s\n",students[i].phone);
	}
}
