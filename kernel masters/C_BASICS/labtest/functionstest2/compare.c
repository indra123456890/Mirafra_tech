#include"dates.h"
int compare(int d,int m,int y,int d1,int m1,int y1)
{
if(y<y1)
return (1);
else if(y1<y)
return (0);
else if(m<m1)
return (1);
else if(m1<m)
return (0);
else if(d<d1)
return (1);
else if(d1<d)
return (0);
else if(d==d1&&y1==y&&m==m1)
return (2);
else
return(3);
}
