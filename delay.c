/*
 * delay.c
 *
 *  Created on: Nov 8, 2013
 *      Author: cmcain
 */


void delay( unsigned int x)
{
	SysCtlDelay( (x/3) + 1);
}
