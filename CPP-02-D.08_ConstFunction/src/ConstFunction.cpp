///////////////////////////////////////////////////////////////////////////////
// Demo: CPP-02.08D - ConstFunction                                          //
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;


///////////////////////////////////////////////////////////////////////////////
// class declaration and implementation of class point
///////////////////////////////////////////////////////////////////////////////
class CPoint
///////////////////////////////////////////////////////////////////////////////
{
public:
   int X;
   int Y;

   CPoint(int x=0, int y=0) : X(x), Y(y) {};
};


///////////////////////////////////////////////////////////////////////////////
// class declaration and implementation of class line
///////////////////////////////////////////////////////////////////////////////
class CLine
///////////////////////////////////////////////////////////////////////////////
{
public:
    CPoint P1, P2;

public:
	CLine(int x1=1, int y1=1, int x2=2, int y2=2)
		{ P1.X = x1; P1.Y = y1; P2.X = x2; P2.Y = y2; };

	void set(int x1=0, int y1=0, int x2=0, int y2=0) // const
		{ P1.X = x1; P1.Y = y1; P2.X = x2; P2.Y = y2; };

    void list() const;
    void getLength();
};


///////////////////////////////////////////////////////////////////////////////
void CLine::list() const
///////////////////////////////////////////////////////////////////////////////
{
	cout << " Line P1:  x = "  << P1.X << ", y = "  << P1.Y <<endl;
	cout << " Line P2:  x = "  << P2.X << ", y = "  << P2.Y <<endl;
}


///////////////////////////////////////////////////////////////////////////////
void CLine::getLength()
///////////////////////////////////////////////////////////////////////////////
{
	double len=  sqrt(pow((P2.X - P1.X), 2.0) + pow((P2.Y - P1.Y), 2.0));
	cout << " Line Length = "  << len << endl << endl;
}


///////////////////////////////////////////////////////////////////////////////
int main()
///////////////////////////////////////////////////////////////////////////////
{
	CLine L1;

	L1.list();
	L1.getLength();

	L1.set(10,10,20,20);
	L1.list();
	L1.getLength();

	return 0;
}