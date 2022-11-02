#include <iostream>
using namespace std;
 //Generic programming is a technique where
 //generic types are used as parameters in algorithms so that they can work for a variety of data types.

template <typename T> T Max(T x, T y)
{
	return (x > y) ? x : y;
}
template <class R>  R Min(R x, R y)
{
	return (x < y) ? x : y;
}

int main()
{
	cout << Max<int>(3, 7) << '\n';
	cout << Max<double>(3.0, 7.0)<< '\n';
	cout << Max<char>('g', 'e')<< '\n';
  std::cout << "-----------------------------------------------------" << '\n';
  cout << Min<int>(3, 7) << '\n';
  cout << Min<double>(3.0, 7.0)<< '\n';
  cout << Min<char>('g', 'e')<< '\n';
	return 0;
}
