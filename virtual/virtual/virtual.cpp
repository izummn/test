#include <iostream>
using namespace std;



class A
{
private:
	int a;
public:
	A()
	{
		cout << " constructor A " << endl;
	};
	virtual void show()
	{
		cout << " Show A " << endl;

	};
	virtual ~A(){
		cout << " Destructor A " << endl;
	};
};


class B : public A
{
private:
	int b;
public:
	B()
	{
		cout << " constructor B " << endl;
	};


	virtual void show()
	{
		cout << " Show B " << endl;

	};
	virtual ~B(){
		cout << " Destructor B " << endl;
	};
};

class C : public B
{
private:
	int c;
public:
	C()
	{
		cout << " constructor C " << endl;
		//B b;
		//b.show();
		///A::show();
	};


	virtual void show()
	{
		//A a;
		//B::show();
		//a.show();
		cout << " Show C " << endl;

	};
	virtual ~C(){
		cout << " Destructor C " << endl;
	};
};






int main()
{
	A* c = new C[3];
	c->show();
	//c[1]->show();



	c+2;
	c->show();



	delete[] c;
	return 0;

};