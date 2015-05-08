#include "student.h"

pstu_t studIiitTail(){
	char line[128];
	pstu_t pnew = NULL;
	pstu_t ptail = pnew;
	pstu_t head = pnew;
	
	printf("请输入要添加的学生信息：id ，name ，score: \n");

	while(memset(line, 0, sizeof(line)), fgets(line ,sizeof(line) , stdin) != NULL){
		pnew = (pstu_t)calloc(1,sizeof(stu_t));
		system("cls");
		printf("请输入要添加的学生信息：id ，name ，score:\n");
		sscanf(line , "%d%s%1f", &pnew->st_id, pnew->st_name, &pnew->st_score);

		if(head == NULL){
			head = pnew;
			ptail = head;
		}else if(pnew){
			ptail->st_next = pnew;	
			ptail = pnew;
		}
		
	}
	
	return head;
}

pstu_t stuInitHead (){
	char line[128];
	pstu_t pnew = NULL;
	pstu_t head = pnew;
	
	printf("请输入要添加的学生信息：id ，name ，score: \n");

	while(memset(line, 0, sizeof(line)), fgets(line ,sizeof(line) , stdin) != NULL){
		pnew = (pstu_t)calloc(1,sizeof(stu_t));
		system("cls");
		printf("请输入要添加的学生信息：id ，name ，score:\n");
		sscanf(line , "%d%s%1f", &pnew->st_id, pnew->st_name, &pnew->st_score);

		if(head == NULL){
			head = pnew;
		}else if(pnew){
			pnew->st_next = head;
			head = pnew;
		}
		
	}
	
	return head;
}

pstu_t stuInitSort (){
	char line[128];
	pstu_t pnew = NULL;
	pstu_t head = pnew;
	pstu_t ppre = pnew;
	pstu_t pcur = pnew;

	printf("请输入要添加的学生信息：id ，name ，score: \n");

	while(memset(line, 0, sizeof(line)), fgets(line ,sizeof(line) , stdin) != NULL){
		pnew = (pstu_t)calloc(1,sizeof(stu_t));
//		system("cls");
		printf("请输入要添加的学生信息：id ，name ，score:\n");
		sscanf(line , "%d%s%lf", &pnew->st_id, pnew->st_name, &pnew->st_score);

		pcur = head;
		ppre =NULL;

		while(pcur != NULL && pcur->st_id < pnew->st_id){
			ppre = pcur;
			pcur = pcur->st_next;
		}

		if( ppre== NULL){
			//head = pnew;
			pnew ->st_next = head;//ppre==NULL时不一定为第一次，可能此时head已经有next
			head = pnew;

		}else{
			ppre->st_next = pnew;
			pnew->st_next = pcur;
		}
	
	}
	
	return head;

}

void stuShow(pstu_t phead){
	pstu_t pcur;

	pcur = phead;
	while(pcur != NULL){
		printf("%-5d%10s%8.2f\n",pcur->st_id , pcur->st_name ,pcur->st_score);
		pcur = pcur ->st_next;
	}
	
}

void stuDestory(pstu_t* pphead)
{
	pstu_t pcur, ptemp;

	pcur = *pphead;

	while(pcur != NULL){
		ptemp = pcur->st_next;
		free(pcur);

		pcur = ptemp;
	}

	*pphead = NULL;

}

void stuDelete(pstu_t * pphead, int id){
	pstu_t pcur = *pphead;
	pstu_t ppre = *pphead;

	while(pcur){
		if(pcur->st_id == id){
			if(pcur == *pphead){
				pcur = pcur->st_next;
				free(pcur);
				pcur=NULL;
			}else{
				ppre->st_next = pcur->st_next;
				free(pcur);
				pcur=NULL;
			}
		}else{
			ppre = pcur;
			pcur = pcur->st_next;
		}
	}
}

void stuInserSort(pstu_t *pphead){
	pstu_t pcur = *pphead;
	pstu_t ppre = NULL;
	pstu_t pnew = NULL;
	char line[128];

	memset(line,0,sizeof(char));
	printf("请输入要添加的学生信息：id ，name ，score:\n");
	fgets(line, sizeof(line), stdin);
	pnew = (pstu_t)calloc(1,sizeof(stu_t));//calloc != alloc
	sscanf(line , "%d%s%lf", &pnew->st_id, pnew->st_name, &pnew->st_score);
	
	while(pcur &&( pcur->st_id < pnew->st_id)){
		ppre = pcur;
		pcur = pcur->st_next;
	}

	if(ppre == NULL){//头插
		pnew->st_next = *pphead;
		*pphead = pnew;
	}else{//尾插
		ppre->st_next = pnew;
		pnew->st_next = pcur;
	}
}

pstu_t stuSearchById(pstu_t phead,int id){
	pstu_t pcur = phead;
	
	while(pcur){
		if(pcur->st_id == id){
			printf("%-5d%10s%8.2f\n",pcur->st_id , pcur->st_name ,pcur->st_score);	
			return pcur;
		}else{
			pcur = pcur->st_next;
		}
	}
	
	return NULL;
}


pstu_t stuSearchByName(pstu_t phead,char name[]){
	pstu_t pcur = phead;
	
	while(pcur){
		if(strcmp(name,pcur->st_name) == 0){
			printf("%-5d%10s%8.2f\n",pcur->st_id , pcur->st_name ,pcur->st_score);	
			return pcur;
		}else{
			pcur = pcur->st_next;
		}
	}
	return NULL;
}

