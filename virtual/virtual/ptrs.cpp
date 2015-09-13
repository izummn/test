#include <iostream>
using namespace std;

//template <typename T>
double* mem(double* m, unsigned int p)
{
	m = new double[p];
	return m;
}

double* fill(double* m, unsigned int p)
{
	for (int i(0); i < p; i++)
		*(m+i) = i;
	return m;
}

void print(const double* m, const unsigned int p) 
{
	for (int i(0); i < p; i++)
		cout << *(m + i) << "; ";
	cout << endl;
}

double* free(double* m)
{
	delete[] m;
	m = 0;
	return m;
}



/*int main()
{
	unsigned int s;
	double* m = 0;
	cout << "Enter size: " << endl;
	cin >> s;
	m = mem(m, s);
	m = fill(m, s);
	print(m, s);
	m = free(m);


	return 0;
};*/