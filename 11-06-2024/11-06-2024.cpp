#include <iostream>
#include <string>
#include <ostream>
#include <iomanip>
#include <sstream>

using namespace std;

void doubleToString(double number, string& str) {
	stringstream stream;
	stream << fixed << setprecision(2) << number;
	str = stream.str();
	cout << str << endl;

}


int main()
{
	double number;
	string str;
	cout << "Enter a number( works as double ) : ";
	cin >> number;
	doubleToString(number, str);
	//Below cout function is to test that the string value "str" has been saved globally.
	cout << str;
	return 0;
}
