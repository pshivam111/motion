#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{

int gd,gm=VGAMAX; gd=DETECT;
initgraph(&gd,&gm,NULL);

//char s[2]={'s','p'};
line(50,50,80,80);
delay(5000);
return 0;
}
