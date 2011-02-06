#include "Controller.h"
#include <unistd.h>
#include <stdio.h>
main()
{
printf ("Helicopter Controller Demo by chinlin 2010@Taipei,Taiwan,R.O.C\r\n");

Controller *rc=new Controller();
rc->connect();
int a=150;

while(1){
sleep(1);
printf("PWM signal settting:%d",a);
rc->transmit(a, 150, 150, 150, 150,150, 150, 150, 150);
fflush(stdout);
a+=14;
if (a>250) a=50;

}

}

