#include "dates.h"

int isvaliddate(int d,int m,int y)
{
	int l;
	l=isleapyear(y);
	if(d>0&&d<=31&&m>0&&m<=12&&y>0)
	{
		switch(m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(d<=31)
					return (1);
				else
					return(0);
			case 4:
			case 6:
			case 9:
			case 11:
				if(d<=30)
					return (1);
				else
					return (0);
			case 2:
				if(l==1)
				{
					if(d<=29)
						return (1);
					else
						return (0);
				}
				else if(l==0)
				{
					if(d<=28)
						return (1);
					else
						return (0);
				}
			//	else
			//		return (0);
		}
	}
	else
		return (0);
return 0;
}



int isleapyear(int y)
{
	if((y%4==0&&y%100!=0)||y%400==0)
		return (1);
	else
		return(0);
}

