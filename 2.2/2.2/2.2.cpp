#include <iostream>
using namespace std;
class Gcd
{
public:
	int num1, num2;
	Gcd(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	int calc()
	{
		while (num2 != 0) {
			int temp = num2;
			num2 = num1 % num2;
			num1 = temp;
		}
		return num1;
	}

};
int main() {
	int num1, num2;
	cin >> num1 >> num2;
	Gcd gcd(num1, num2);
	cout << gcd.calc() << endl;
}