#include<iostream>
int stonetolb(int sts)
{
	return 14 * sts;
}

int main()
{
	using namespace std;

	int stone = 1, sin = 33;
	cout << "Enter the weight in stone:";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << "stone=";
	cout << pounds << "pounds." << endl;
	return 0;

}

