#include<reg52.h>

sbit in1_w=P2^3;	//sensor1
sbit in2_w=P2^4;	//sensor2

sbit in1_s=P2^2;	//sensor3
sbit in2_s=P2^1;	//sensor4
sbit in3_s=P2^0;	//sensor5

sbit out1_e=P0^3;	
sbit out2_e=P0^4;	
sbit out3_e=P0^5;	

sbit out1_s=P0^2;	
sbit out2_s=P0^1;	
sbit out3_s=P0^0;

sbit out1_w=P1^2;	
sbit out2_w=P1^1;	
sbit out3_w=P1^0;

sbit out1_n=P1^3;	
sbit out2_n=P1^4;	
sbit out3_n=P1^5;

sbit out1_w=P1^2;	
sbit out2_w=P1^1;	
sbit out3_w=P1^0;

unsigned int i,j,k=0,x1=0,y1=0,z1=0,t1=0;

void delay_2sec();
void delay_5sec();

void main()
{

	while(1)
	{
		x1=0;	//clear x1
		y1=0;	//clear y1

		if(in1_w==1)	//if sensor 1 is blocked
		{
			x1=1;
		}
		if9(in1_w==1)&&(in2_w==1))	//if sensor 1 & 2  are blocked
		{
			x1=2;
		}
		
		if(in1_s==1)		//if sensor 3 is blocked
		{
			y1=1;
		}
		if((in1_s==1)&&(in2_s==1)&&(in3_s==1))	//if sensor 3 and sensor 4 is blocked
		{
			y1=2;
		}
		if((in1_s==1)&&(in2_s==1))	//if sensor 1,sensor2, and sensor 3 are blocked

		{
			y1=3;
		}
		
		out1_w=1;		//led off
		out2_w=1;		//led off
		out3_w=0;		//led on

		out1_s=0;		//led on
		out2_s=1;		//led off
		out3_s=1;		//led off

		out1_e=1;		//led off
		out2_e=1;		//led off
		out3_e=0;		//led on

		out1_n=0;		//led on
		out2_n=1;		//led off
		out3_n=1;		//led off

	for(k=0;k<=y1;k++)
	{
		delay_5sec();	//delay for 5 sec
	}

		out2_w=1;		//led off
		out3_w=0;		//led on
		out2_e=0;		//led on
		out3_e=1;		//led off
		
		delay_2sec();	//delay for 2 sec

		out1_n=1;		//led off
		out2_n=1;		//led off
		out3_n=0;		//led on

		out1_e=0;		//led on
		out2_e=1;		//led off
		out3_e=0;		//led on

		out1_s=1;		//led 0ff
		out2_s=0;		//led on
		out3_s=1;		//led off
		
		out1_w=0;		//led on
		out2_w=1;		//led off
		out3_w=1;		//led off

	for(k=0;k<=x1;k++)
	{
		delay_5sec();	//delay for 5 sec
	}
		out2_n=0;		//led on
		out3_n=1;		//led off
		out2_s=0;		//led on
		out3_s=1;		//led off
		
		delay_2sec();

		out1_e=1;		//led off
		out2_e=1;		//led off
		out3_e=0;		//led on

		out1_s=0;		//led 0n
		out2_s=1;		//led off
		out3_s=1;		//led off

		out1_n=0;		//led on
		out2_n=1;		//led off
		out3_n=1;		//led off

		out1_w=1;		//led off
		out2_w=1;		//led off
		out3_w=0;		//led on
	}
}

/**********************5s delay*******************/


		
		
		

		