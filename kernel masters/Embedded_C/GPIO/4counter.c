#define RCC_AHB1ENR *((int *)0x40023830)
#define GPIOC_MODE *((int *)0x40020800)	
#define GPIOC_IDR *((int *)0x40020810)
#define GPIOC_PUPDR *((int *)0x4002080c)

int counter=0;	

void SWITCH_INIT()
{
RCC_AHB1ENR|=(0X01<<2); //CLK ENABLE FOR PORT C
GPIOC_PUPDR&=0XFFCFFFF; //PC8 & PC9 PINS BITS CLEAR
GPIOC_PUPDR|=0X00100000;	// PC8&PC9 PINS SET TO PULL UP 
}

void delay()
{
int i;
	for(i=0;i<909090;i++)
	{
	;
	}
}
int main()
{
SWITCH_INIT();
while(1)
{
	if((GPIOC_IDR & (0X01<<10))==0) //CHECK THE SWITCH UP IS ON OR OFFt===[[
	{
	counter++;
	delay();
	GPIOC_IDR|=(0X01<<10);	
	}	
}

}
