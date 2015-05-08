#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <math.h>

#ifndef __STUDENTC__
#define __STUDENTC__

#define __DISPALY__MANGEROP__ 3
#define __DISPALY__STUOP__ 2
#define __DISPALY__LOGIN__ 1
#define __DISPALY__REGISTER__ 4
#define __DISPALY__RESULT__ 5


typedef struct student{
	int st_id;
	char st_name[20];
	double st_score;
	struct student* st_next;

}stu_t,*pstu_t;

pstu_t studIiitTail( );
pstu_t stuInitHead( );
pstu_t stuInitSort( );

void stuShow(pstu_t phead);

void stuDestory(pstu_t* pphead);


void stuDelete(pstu_t * pphead, int id);
//void stuDelete(pstu_t * pphead, double score);


void showMain(int show_type);

void stuInserSort(pstu_t *pphead);

pstu_t stuSearchById(pstu_t phead,int id);

pstu_t stuSearchByName(pstu_t phead,char name[]);

#endif