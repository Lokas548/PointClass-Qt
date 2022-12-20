#ifndef POINT_H
#define POINT_H
#include <QPainter>


class Point
{
public:
    Point();
    Point(int x,int y, int cross_size);

    int getX() const;
    void setX(int newX);

    int getY() const;
    void setY(int newY);

    void draw(QPainter *painter);

    void Increase();

    int getW() const;
    void setW(int value);

    int getCross_size() const;
    void setCross_size(int value);

private:
    int newSize = 1;
    int cross_size = 3;
    int x,y;
    int w = 1;
};

#endif // POINT_H
