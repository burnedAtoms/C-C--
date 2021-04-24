#include<iostream>
#include<cmath>

using namespace std;

class Point{
    private:
        float x,y;
    public:
        Point():x(0),y(0){}
        Point(float a,float b):x(a),y(b){}
        void printPoint(){
            cout << "(" << x << ", " << y << ")";
        }
        int getX(){return x;}
        int getY(){return y;}
        void setX(float a){ x = a;}
        void setY(float b){y = b;}
        float getDistance(Point p){
            float dis = 0;
            dis = pow((p.getX() - getX()),2) + pow((p.getY() - getY()),2);
            return sqrt(dis);
        }
};

class Segment{
    private:
        Point point1;
        Point point2;
    public:
        Segment(){
            point1.setX(0);
            point1.setY(0);
            point2.setX(0);
            point2.setY(0);
        }
        Segment(Point p1,Point p2){
            point1.setX(p1.getX());
            point1.setY(p1.getY());
            point2.setX(p2.getX());
            point2.setY(p2.getY());
        }
        float getLength(){
            return point1.getDistance(point2);
        }
        Point *getIntersect(Segment s){
            float t = -1 * (this->point1.getX() - s.point1.getX())/(this->point2.getX() - this->point1.getX()) - (s.point2.getX() - s.point1.getX());
            float x = this->point1.getX() + (this->point2.getX() - this->point1.getX());
            float y = this->point1.getY() + (this->point2.getY() - this->point1.getY());

            if(((this->point1.getX() == s.point2.getX()) && this->point1.getX() == s.point2.getX()) || ((this->point1.getY() == s.point1.getY()) && (this->point1.getY() == s.point2.getY()))){
                x = this->point1.getX();
                y =this->point1.getY();
                return new Point(x,y);
            }
            if(((this->point2.getX() == s.point2.getX()) && this->point2.getX() == s.point2.getX()) || ((this->point2.getY() == s.point1.getY()) && (this->point2.getY() == s.point2.getY()))){
                x = this->point2.getX();
                y =this->point2.getY();
                return new Point(x,y);
            }

            Point *newP = new Point(x,y);
            return (t>=0 && t<=1)?newP:NULL;
        }
};