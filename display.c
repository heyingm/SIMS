#include <string.h>
#include "student.h"

const char manager_main_option[] = 
	{
"			 1. search student information;\n"	
" 			 2. add student information;\n"	
"			 3. delete student information;\n"
"			 4. updata student information;\n"
"			 5. add user account;\n"
"			 6. updata user account;\n"
"			 7. delete user account;\n"
"			 8. search user account;\n"
"			 0. exit;\n"			  
	};

const char stu_main_option[] = 
	{
"			 1. search student information;\n"	
"			 8. search user account;\n"
"			 0. exit;\n"			  
	};

const char login_option[] = 
	{
"			 1. administrator login;\n"	
"			 2. student login;\n"
"			 0. exit;\n"			  
	};

const char reslu_option[] = 
	{
"			 1. administrator login;\n"	
"			 2. student login;\n"
"			 0. exit;\n"			  
	};







void showMain(int show_type){
	int op=-1;
	printf("***************************SIMSv1.0 2015.05.07 **************************\n");
	switch(show_type){
		case 3:
		printf("%s",manager_main_option);
		break;
	}
	printf("*****************************AUTHOR:Ktry*******************************\n");
	printf( "请选择一项操作:\n");
	//scanf("%d",&op);
}

