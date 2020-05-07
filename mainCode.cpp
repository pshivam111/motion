#include<simplecpp>
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
inline double cx(int a)
{return 960+a; }
inline double cy(int a)
{return 508-a; }

float angle(float x,float y)
{
    if(x==0&&y==0)
        return 0;
    else
    {    
    if(x>=0&&y>=0)
        return (57.32*atan(abs(y)/abs(x)));
    if(x<=0&&y>=0)
        return 180-(57.32*atan(abs(y)/abs(x)));
    if(x<=0&&y<=0)
        return 180+(57.32*atan(abs(y)/abs(x)));
    if(x>=0&&y<=0)
        return -(57.32*atan(abs(y)/abs(x)));
    }
}
class Point 
{
private:
    double x__,y__,l__,b__;
    Rectangle kk;
public:
    Point(int a,int b)
    {
        x__=a;
        y__=b;
        l__=4;
        b__=4;
        kk={cx(x__),cy(y__),l__,b__};
        kk.setFill();
    }
    void imprint()
    {
        kk.imprint();
    }
    void translate(int a,int b)
    {
        x__+=a;
        y__+=b;
        kk.moveTo(cx(x__),cy(y__));
    }
    void rotateO(float ang)
    {
        x__=angle(x__,y__)+ang
    }
   
};



int main()
{
drawCanvas();
Line w(50,50,51,50);
Point p(60,60);
w.imprint();
wait(2);
p.translate(50,50);
wait(2);

}