#include<iostream>
using namespace std;

class Shape
{
protected:
	int x, y;
public:
	void setorgin(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	virtual void draw() { cout << "Draw!" << endl; }
};

class Rectangle : public Shape
{
private:
	int width, height;
public:
	void setwidth(int w) { width = w; }
	void setheight(int h) { height = h; }
	void draw() { cout << "Rectangle Draw" << endl; }
};

class Circle : public Shape
{
private:
	int radius;
public:
	void setradius(int r) { radius = r; }
	void draw() { cout << "Circle Draw" << endl; }
};

class Triangle : public Shape
{
private:
	int base, height;
public:
	void draw() { cout << "Triangle Draw" << endl; }
};

int main()
{
	/*Shape *ps=new Rectangle();  //���� ����ȯ, �θ�Ŭ������ �Լ� ���
	ps->setorgin(10, 10);
	ps->draw();
	((Rectangle *)ps)->setwidth(100);  //���� ����ȯ, �ڽ�Ŭ������ �Լ� ���

	delete ps;

	Circle c;
	Shape &s = c;
	s.setorgin(10,10);
	s.draw();
	((Circle *)ps)->setradius(5);*/

	Shape *arrayofshape[3]; //�������ε�
	arrayofshape[0] = new Rectangle();
	arrayofshape[1] = new Triangle();
	arrayofshape[2] = new Circle();
	for (int i = 0; i < 3; i++)
		arrayofshape[i]->draw();

	return 0;
}