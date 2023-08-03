/*7.create a student structure dynamically and read and print the data of the student. (student template same as used previously)*/
#include"student.h"
#include<stdlib.h>
int main()
{

struct student *s=(struct student *)malloc(sizeof(struct student));


scanf("%d%s%d%d%d%d%d%d%s%d-%d-%d%d-%d-%d%f",&s->id,s->name,&s->marks[0],&s->marks[1],&s->marks[2],&s->marks[3],&s->marks[4],&s->marks[5],s->fathername,&s->db,&s->mb,&s->yb,&s->dj,&s->mj,&s->yj,&s->per);


printf("ID = %d\nNAME = %s\nSUB 1 = %d\n SUB 2 = %d\nSUB 3 = %d\nSUB 4 =%d\nSUN 5 = %d\nSUB 6 = %d\nFATHER NAME = %s\nDATE OF BIRTH = %d\nDATE OF MONTH = %d\nDATE OF YEAR = %d\nDATE OF JOIN = %d\nMONTH OF JOIN = %d\nYEAR OF JOIN = %d\nPERCENTAGE = %f\n",s->id,s->name,s->marks[0],s->marks[1],s->marks[2],s->marks[3],s->marks[3],s->marks[5],s->fathername,s->db,s->mb,s->yb,s->dj,s->mj,s->yj,s->per);
	printf("\n");

}

