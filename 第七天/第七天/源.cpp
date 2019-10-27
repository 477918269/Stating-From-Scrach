#include<iostream>

using namespace std;

class Hungry
{
public:
	static Hungry* get_one()
	{
		return &_one;
	}
private:
	Hungry(){};
	Hungry(const Hungry&) = delete;
	Hungry& operator= (const Hungry&) = delete;
	static Hungry _one;
};

Hungry Hungry::_one;

int main()
{

}