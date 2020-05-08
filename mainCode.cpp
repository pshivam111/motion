#include<simplecpp>
#include"shape.h"
#include<math.h>
using namespace std;

void drawCanvas()
{
    initCanvas(" Two Dimentional Plane",1920,1016);
    Line X(0,508,1920,508);
    Line Y(960,0,960,1016);
    X.imprint();
    Y.imprint();
}

int main()
{
drawCanvas();
/*
Point p(100,0);
p.translate(50,0);
p.rotateO(45);
wait(2);
p.printCoor();
circle c(70,70,40);
wait(2);
c.translate(50,50);
wait(2);
c.rotateO(50);
wait(2);
*/
line l(40,40,80,80);
wait(2);
l.translate(50,0);
wait(2);
l.rotateO(45);
wait(2);    
}