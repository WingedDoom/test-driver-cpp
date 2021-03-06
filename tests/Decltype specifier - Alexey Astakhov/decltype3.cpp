// Author : Astakhov Alexey
// correct work with lambdas

#include <iostream>

using namespace std;

int main()
{
	auto f = [](int a, int b) -> int
	{
		return a * b;
	};

	decltype(f) g = f;
	auto i = f(2, 2);
	auto j = g(3, 3);

	if(typeid(f) == typeid(g))
	{
		return 0;
	}else{
		return 1;
	}
}
