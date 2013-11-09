/*
 * delay.c
 *
 Used SysCtlDelay
 */


void delay( unsigned int x)
{
	SysCtlDelay( (x/3) + 1);
}
