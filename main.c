#include "student.h"

int main(){
	pstu_t phead = NULL;
	char name[] = "asd";

	showMain(__DISPALY__MANGEROP__);

	//phead = stuInitSort();

	//stuShow(phead);

//	stuDelete(&phead,3);

	//stuShow(phead);

	stuInserSort(&phead);
		
	stuShow(phead);

//	stuSearchById(phead , 3);



	stuSearchByName(phead ,name);
	
	stuDestory(&phead);


	system("pasue");
	return 0;
}