#include"layer.h"
void value (struct student s)
{
printf("ID:%d\n name:%s\n per:%f\n",s.id,s.name,s.per);
}

void reference(struct student *s)
{
printf("ID:%d\n name:%s\n per:%f\n",s->id,s->name,s->per);
}

