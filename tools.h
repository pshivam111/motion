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
