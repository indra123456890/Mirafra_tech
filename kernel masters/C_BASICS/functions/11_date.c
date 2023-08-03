   #include<stdio.h>
   int date(int d,int m,int y)
   {
           int k;
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
                                  k=1;
                          else
                                  k=0;
                          break;
                  case 4:
                  case 6:
                  case 9:
                  case 11:
                          if(d<=30)
                                  k=1;
                          else
                                  k=0;
                          break;
                  case 2:
                          if(y%100&&y%4==0||y%400==0)
                                  if(d<=29)
                                          k=1;
                                  else if(d<=28)
                                          k=1;
                                  else
                                          k=0;
                          break;
          }
          return k;
  }
  int main()
  {
          int d,m,y,x;
          char e,f;
          printf("enter date-month-year:");
          scanf("%d%c%d%c%d",&d,&e,&m,&f,&y);
          x=date(d,m,y);
          if(x==1)
          {
                  printf("valid date\n");
          }
          else
          {
                  printf("invalid date\n");
          }
  }
