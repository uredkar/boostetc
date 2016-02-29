// BoostEtc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void TypeConversion()
{
	double d1 = 2.3;
	double d2 = { 2.3 };
	complex<double> z = 1;
	complex<double> z2 = { d1, d2 };
	complex<double> z3 = { 1,2 };
	vector<int> v = { 1, 2, 3, 4, 5, 6 };
	int sum = boost::accumulate(v, 0);
	for (auto x : v)
		cout << x;

	cout << "\n   Next ";
	for (auto x : v)
		cout << x;

	cout << "\n   Next ";
	for (auto& x : v)
	{
		x++;
	}

	cout << "\n   Next ";
	for (auto x : v)
		cout << x;

	cout << "\n   Next ";
	for (auto y : { 3,4,5, 5 })
		cout << y;

	//	int i1 = 7.2;
	//	int i2 = { 7.2 };
	//	int i3 = { 7.2 };

	auto b = true;
	auto ch = 'x';
	auto i = 123;
	auto d = 1.2;
	auto y = 212;
	auto zs = sqrt(y);

	const int dmv = 17;
	int var = 17;
	double max1 = 1.4*pow(dmv, 2);

	//auto s = sum(v);
	//cout << s;
}
void DoubleIsJustADouble()
{

	std::cout << std::setprecision(16); // show 16 digits
										// Define an accumulator set for calculating the mean and the
										// 2nd moment ...
	accumulator_set<double, stats<tag::mean, tag::moment<2> > > acc;

	// push in some data ...
	acc(1.2);
	acc(2.3);
	acc(3.4);
	acc(4.5);

	// Display the results ...
	std::cout << "Mean:   " << mean(acc) << std::endl;
	std::cout << "Moment: " << moment<2>(acc) << std::endl;
	double d1 = 0.1 + 0.1 + 0.1;
	double d2 = 0.3;
	bool t = d1 != d2;
	bool t2 = abs(d1 - d2) < DBL_EPSILON;
	std::cout << "This is true " << d1 << " really " << d2 << " compare " << t << " t2 " << t2;
	float pi = boost::math::constants::pi<float>();
	float e = boost::math::constants::e<float>();

	std::cout << "Pi " << pi;
	std::cout << "e " << e;

}

int main()
{
	DoubleIsJustADouble();
	getchar();
    return 0;
}

