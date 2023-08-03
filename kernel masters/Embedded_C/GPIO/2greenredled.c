#define RCC_AHB1ENR (*(int *) 0x40023830)
#define GPIOB_MODE (*(int *) 0x40020400)
#define GPIOB_ODR (*(int *) 0x40020414)

void GREEN_LED_Init(void)
{
RCC_AHB1ENR |=(0x1 <<1) ; // Enable GPIO Port B Clock
GPIOB_MODE &=0xCFFFFFFF; //set mode to o/p direction
GPIOB_MODE |=0x10000000; //PB14 set as output direction  
}
void RED_LED_Init(void)
{
//int *ptr;
//ptr = (int *)0x40023830;
 //*ptr = *ptr | (0x1 << 1) ;

//((int *) 0x40023830) = ((int *)0x40023830) | (0x1 <8<1) ;

//RCC_AHB1ENR = RCC_AHB1ENR | (0x1 <<1) ;
RCC_AHB1ENR |= (0x1 <<1) ; // Enable GPIO Port B Clock
GPIOB_MODE &=0xF3FFFFFF; //set mode to o/p direction
GPIOB_MODE |=0x04000000; //PB13 set as output direction  
}
void Delay(int x)
{
int i;
for(i=0;i<(x*83500);i++)
{

}
}
int main()
{
GREEN_LED_Init();
RED_LED_Init();

while(1) // Infinite loop
{
GPIOB_ODR &= ~(0x1<<14); // GREEN LED is ON
Delay(1); // 50msec
 GPIOB_ODR |= (0x1<<14); // GREEN LED is OFF
Delay(1); // 50msec
GPIOB_ODR &= ~(0x1<<14); // GREEN LED is ON
Delay(1); // 50msec
 GPIOB_ODR |= (0x1<<14); // GREEN LED is OFF
Delay(3); // 150msec

GPIOB_ODR &= ~(0x1<<13); // RED LED is ON
Delay(1); // 50msec
 GPIOB_ODR |= (0x1<<13); // RED LED is OFF
Delay(5); // 250msec
GPIOB_ODR &= ~(0x1<<13); // RED LED is ON
Delay(1); // 50msec
 GPIOB_ODR |= (0x1<<13); // RED LED is OFF
Delay(10); // 500msec
}
return 0;
}



