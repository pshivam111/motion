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
{
    return 960+a; 
}
inline double cy(int a)
{
    return 508-a;
}
double mod(double x, double y)
{
    return sqrt(x*x+y*y);
}
double angle(double x,double y)
{
    if(x==0&&y==0)
        return 0;
    else
    {    
        if(x>=0&&y>=0)
            return (57.32*atan(abs(y)/abs(x)));
        else if(x<=0&&y>=0)
            return 180-(57.32*atan(abs(y)/abs(x)));
        else if(x<=0&&y<=0)
            return 180+(57.32*atan(abs(y)/abs(x)));
        else if(x>=0&&y<=0)
            return -(57.32*atan(abs(y)/abs(x)));
        else
        return 0;
    
    }
}

double getRad(double x,double y)
{
    return 3.14*angle(x,y)/180;
}
double rad(double x)
{
    return 3.14*(x)/180;
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
    void printCoor()
    {
        cout<<"\n X : "<<x__<<"   Y : "<<y__;
    }
    void imprint()
    {
        kk.imprint();
    }
    void translate(int aa,int ba)
    {
        printCoor();
        x__+=aa;
        y__+=ba;
        printCoor();
        kk.moveTo(cx(x__),cy(y__));
    }
    void rotateO(double ang)
    {
        printCoor();
        cout<<"\n angle : "<<angle(x__,y__) <<" ang : "<<ang<<" mod : "<<mod(x__,y__);
        double tx=x__,ty=y__;
        x__=mod(tx,ty)*cos(rad(angle(tx,ty)+ang));
        cout<<"\n x :: "<<x__;
        y__=mod(tx,ty)*sin(rad(angle(tx,ty)+ang));
        kk.moveTo(cx(x__),cy(y__));
    }

};

class circle: public Circle
{
    private:
        int xc,yc;
        int r;
        int filled;
        Circle c;
    public:
        circle(int a,int b,int cr)
        {
            xc=a; yc=b; r=cr;
            c={cx(xc),cy(yc),r};
        }
    
     void translate(int x,int y)
     {
         xc+=x; yc+=y;
         c.moveTo(cx(xc),cy(yc));
     }

     void rotateO(double ang)
    { 
        double tx=xc,ty=yc;
        xc=mod(tx,ty)*cos(rad(angle(tx,ty)+ang));
        yc=mod(tx,ty)*sin(rad(angle(tx,ty)+ang));
        c.moveTo(cx(xc),cy(yc));
    } 
 
};
int main()
{
drawCanvas();
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

}