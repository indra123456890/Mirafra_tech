#define RCC_AHB1_ENR *((int *)0x40023830)
#define GPIOB_MODE *((int *)0x40020400)
#define GPIOB_ODR *((int *)0x40020414)

void RED_LED(void)
{
/*int a;
a=(*(int *)0x40023830);
a=a|0x1<<1;
*((int *)0x40023830)=a;
*(int a)0x40023830=*(int a)0x40023830|(0x1<<1);
*(int *)0x40023830 |=(0x1<<1);*/
RCC_AHB1_ENR |=(0x1<<1);//GPIO
GPIOB_MODE &= 0XF3FFFFFF;
GPIOB_MODE |= 0X04000000;//load 01 into 27 and 26 to set mode to o/p direction.
}

void Delay(void)
{
int i=0;
for(i=0;i<180000;i++);
}

int main()
{
RED_LED();
while(1)
{
GPIOB_ODR &=~(0X1<<13);//clear 13 bit pos to RED LED IS ON
Delay();//10msec delay
GPIOB_ODR |=(0x1<<13);//set 13 bit pos to RED led is off
Delay();//10msec delay
}
}
