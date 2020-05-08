#include"tools.h"
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

class line
{
private:
   int x1,y1,x2,y2;
   Line L;
public:
    line(int a,int b, int c, int d)
    {
        x1=a;   y1=b;   x2=c;   y2=d;
        L={cx(x1),cy(y1),cx(x2),cy(y2)};
    }

    void translate(int a,int b)
    {
        x1+=a;  y1+=b;      x2+=a;  y2+=b; 
        L={cx(x1),cy(y1),cx(x2),cy(y2)};
    }

     void rotateO(double ang)
    { 
        double tx=x1,ty=y1;
        x1=mod(tx,ty)*cos(rad(angle(tx,ty)+ang));
        y1=mod(tx,ty)*sin(rad(angle(tx,ty)+ang));

        tx=x2,ty=y2;
        x2=mod(tx,ty)*cos(rad(angle(tx,ty)+ang));
        y2=mod(tx,ty)*sin(rad(angle(tx,ty)+ang));
        L={cx(x1),cy(y1),cx(x2),cy(y2)};
    } 




};

