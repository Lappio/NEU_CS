#include<iostream>
#include<cmath>
using namespace std;
//根据点的定义，写出线段和三角形的定义，并通过主程序进行验证
//mypoint.h
class myPoint
{
public:
    myPoint(){
        mX=0;
        mY=0;
    };
    myPoint(double x, double y){
        mX = x;
        mY = y;
    };
    double getX(){
        return mX;
    };
    double getY(){
        return mY;
    };
private:
    double mX,mY;
};
class Line{
public:
Line(){
    mp1 = myPoint();
    mp2 = myPoint();
};
Line(myPoint p1,myPoint p2){
mp1 = p1;
mp2 = p2;
};
double GetDistance(){
    double x = mp1.getX()-mp2.getX();
    double y = mp1.getY()-mp2.getY();
    return sqrt(x*x+y*y);
}
private:
myPoint mp1,mp2;
};

class Triangle{
public:
Triangle(){
    ml1=Line();
    ml2=Line();
    ml3=Line();
};
Triangle(myPoint p1,myPoint p2,myPoint p3){
    ml1 = Line(p1,p2);
    ml2 = Line(p2,p3);
    ml3 = Line(p1,p3);
};
    
double getGirth(){
return ml1.GetDistance()+ml2.GetDistance()+ml3.GetDistance();


}
double getArea(){
double a,b,c;
a = ml1.GetDistance();
b = ml2.GetDistance();
c = ml3.GetDistance();
double p = (a+b+c)/2;
return sqrt(p*(p-a)*(p-b)*(p-c));
}
private:
Line ml1,ml2,ml3;
};
int main()
{
    double x1, x2, x3, y1, y2, y3;
    cout << "请输入点1的x的值：";
    cin >> x1;
    cout << "请输入点1的y的值：";
    cin >> y1;
    cout << "请输入点2的x的值：";
    cin >> x2;
    cout << "请输入点2的y的值：";
    cin >> y2;
    cout << "请输入点3的x的值：";
    cin >> x3;
    cout << "请输入点3的y的值：";
    cin >> y3;
    cout << "点1的坐标为：(" << x1 << "," << y1 << ")" << endl;
    cout << "点2的坐标为：(" << x2 << "," << y2 << ")" << endl;
    cout << "点3的坐标为：(" << x3 << "," << y3 << ")" << endl;
    myPoint p1(x1, y1), p2(x2, y2), p3(x3, y3);
    Line  line1(p1,p2);
    cout<<"线长度:"<<line1.GetDistance()<<endl;
    Triangle t(p1, p2, p3);
    cout << "该三角形的周长为：" << t.getGirth() << endl;
    cout << "该三角形的面积为：" << t.getArea() << endl;
    return 0;
}