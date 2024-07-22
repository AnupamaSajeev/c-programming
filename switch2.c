#include<lpc214x.h>
int main()
{
	while(1)
	{
		IODIR1&=(~(0X01<<16));
		IODIR0|=(1<<7);
		IODIR0|=(1<<8);
	}
		else
		{
		    IOSET0|=(1<<7);
		}
   /* IODIR1&=(~(0X01<<17));
		IODIR0|=(1<<6);
		if((1<<17)&IOPIN1)
		{
			IOCLR0|=(1<<6);
		}
		else
		{
			IOSET0|=(1<<6);
		}*/
}
}