#include "point.h"

Point::Point()
    :x(0),y(0),cross_size(0)
{
}

Point::Point(int x, int y,int cross_size)
    :x(x),y(y),cross_size(cross_size)
{
}

int Point::getX() const
{
    return x;
}

void Point::setX(int newX)
{
    x = newX;
}

int Point::getY() const
{
    return y;
}

void Point::setY(int newY)
{
    y = newY;
}

int Point::getW() const
{
    return w;
}

void Point::setW(int value)
{
    w = value;
}

int Point::getCross_size() const
{
    return cross_size;
}

void Point::setCross_size(int value)
{
    cross_size = value;
}



void Point::draw(QPainter *painter)
{
    QPen pen;
    pen.setWidth(w);
    painter ->setPen(pen);
    painter->drawLine(x-cross_size,y,x+cross_size,y);
    painter->drawLine(x,y-cross_size,x,y+cross_size);
}

void Point::Increase()
{
    newSize +=1;
    setCross_size(newSize);
}



