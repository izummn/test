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

	A(int v_a)
	{
		a = v_a;
		cout << " constructor a = " << a << endl;
	};

	virtual void show()
	{
		cout << " Show A " << a <<  endl;

	};
	virtual ~A(){
		cout << " Destructor A " <<  endl;
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

	B(int v_b)
	{
		b = v_b;
		cout << " constructor b = " << b << endl;
	};


	virtual void show()
	{
		cout << " Show B " << b << endl;

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

	C(int v_c)
	{
		c = v_c;
		cout << " constructor c = " << c << endl;
	};


	virtual void show()
	{
		//A a;
		//B::show();
		//a.show();
		cout << " Show C " << c << endl;

	};
	virtual ~C(){
		cout << " Destructor C " << endl;
	};
};






int main()
{
	// ******* task 1 ***************

	int d = 9;
	int* p = &d;
	int& s = *p;
	cout << "Clear:      s = " << s << "; d =  " << d << "; *p = " << *p << endl;

	s = 4;
	cout << "Change s:   s = " << s << "; d =  " << d << "; *p = " << *p << endl;

	*p = 5;
	cout << "Change *p:  s = " << s << "; d =  " << d << "; *p = " << *p << endl;

	d = 7;
	cout << "Change d:   s = " << s << "; d =  " << d << "; *p = " << *p << endl;



	// ******* task 2 ***************
	//double a = 2.8;
	//cout << static_cast<int>(a) << endl;




	// ******* task 3 ***************
	/*C* c = new C[3];

	C c2(50);
	c[0] = c2;
	c[1] = c2;
	c[2] = c2;

	c[0].show();
	c[1].show();
	c[2].show();*/



	//delete[] c;
	return 0;

};