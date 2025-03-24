// EXP-12: HEXAECIMAL TO DECIMAL
// @Author K. S. MAHAMMAD LIYAZ,192212149
# include <reg51.h>
void main (void)
	{
		unsigned char hexa=0xFF;
		unsigned char hundreds, tens, units;
		
		hexa=hexa/10;
		P0=B;
		units=B;
		hexa = hexa/10;
		hundreds=ACC;
		tens=B;
		P1=B;
		P2=ACC;
		while(1);
 }