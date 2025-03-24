// EXP-8: COUNTING NUMBER OF 1'S & 0'S
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include<reg51.h>
void main()
{
	unsigned char array[]={0x57, 0xfc};
	unsigned char i, ones, zeros;
	CY=0;
	
	for(i=0; i<8; i++)
	{
		array[0]>>=1;
		if(CY==1)ones++;
		else zeros++;
	}
	for(i=0; i<8; i++)
	{
		array[1]>>=1;
		if(CY==1)ones++;
		else zeros++;
	}
	P0=zeros;
	P1=ones;
	while(1);
	}