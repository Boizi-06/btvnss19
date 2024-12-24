#include<stdio.h>
#include<string.h>
int n=5;
struct Students{
	int id;
	char name[30];
	int age;
	char phone[20];
};   
struct Students students[30];               
void xoaphantu(int iddelete,struct Students students[]){
	int index = -1;
	int i;
    for (i = 0; i < n; i++) {
        if (students[i].id == iddelete) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Không tìm thay sinh vien có ID: %d\n", iddelete);
        return;
	}
	for(i=index;i<n;i++){
		students[i]=students[i+1];
	}
	n--;
	printf("mang sau khi xoa la\n");
	for(i=0;i<n;i++){
		printf("thong tin sinh vien thu %d\n",i+1);
		printf("ho va ten:%s\n",students[i].name);
		printf("tuoi:%d\n",students[i].age);
		printf("so dien thoai:%s\n",students[i].phone);
	}
	
	
}

int main(){
	int i;
	printf("moi ban khai bao mang sinh vien\n");
	for(i=0;i<n;i++){
		students[i].id=i+1;
		printf("ho va ten\n");
		fgets(students[i].name,sizeof(students[i].name),stdin);
		students[i].name[strcspn(students[i].name,"\n")]=0;
		printf("nhap tuoi\n");
		scanf("%d",&students[i].age);
		getchar();
		printf("so dien thoai\n");
		fgets(students[i].phone,sizeof(students[i].phone),stdin);
		students[i].phone[strcspn(students[i].phone,"\n")]=0;
	}
	
		int id;
		printf("moi ban nhap vao stt sinh vien can xoa"); 
		scanf("%d",&id);
		getchar();
	
	xoaphantu(id,students);
	
	return 0;
}
