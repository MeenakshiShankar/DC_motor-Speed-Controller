#include<reg51.h>
sbit motor=P2^0;
sbit sw1=P1^0;
sbit sw2=P1^1;
sbit sw3=P1^2;
sbit sw4=P1^3;

void delay(unsigned int);
void main()

{
unsigned int v1;
motor=0;
while(1)
{  if(sw1==0)
    {
	  for(v1=0;v1<200;v1++)
	  {
      motor=1;
	  delay(10);
	  motor=0;
	  delay(10);
	  }
	}
	
	if(sw2==0)
    {
	  for(v1=0;v1<200;v1++)
	  {
      motor=1;
	  delay(20);
	  motor=0;
	  delay(5);
	  }
	}
	
	if(sw3==0)
    {
      motor=1;
	}
	
	if(sw4==0)
    {
      motor=0;
	}
}

}

void delay(unsigned int val)
{
 unsigned int v2,v3;
 for(v2=0;v2<val;v2++)
 for(v3=0;v3<400;v3++);
}