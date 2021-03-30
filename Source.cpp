#include "Number.h"
#include "Real.h"
#include <iostream>

using namespace std;
int main()
{
	Number k;
	cin >> k;
	cout << k;
	k.Sum();
	k.Div_x1_x2();
	k.Div_x2_x1();
	Real g;
	cin >> g;
	cout << g;
	g.set_l(k);
	g.Step1();
	g.Step2();
	g.Log1();
	g.Log2();
	return 0;
}
