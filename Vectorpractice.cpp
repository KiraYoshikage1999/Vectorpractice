
#include <iostream>
#include <string.h>

using namespace std;

class Vector {
	int x;
	int y;
	int z;
public:

	Vector() {
		x = 5;
		y = 9;
		z = 4;

	}

	Vector(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}



	Vector operator+(const Vector& other) {
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;

		return *this;
	}

	Vector operator-(const Vector& other) {
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;

		return *this;
	}

	Vector operator++() {
		++this->x;
		++this->y;
		++this->z;

		return *this;
	}

	Vector operator--() {
		--this->x;
		--this->y;
		--this->z;

		return *this;
	}

	Vector operator++(int) {
		Vector temp = *this;
		++this->x;
		++this->y;
		++this->z;

		return temp;
	}

	Vector operator--(int) {
		Vector temp = *this;
		--this->x;
		--this->y;
		--this->z;

		return temp;
	}

	bool operator>>(const Vector& other) {
		if (this->x > other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	bool operator>=(const Vector& other) {
		if (this->x >= other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	bool operator<<(const Vector& other) {
		if (this->x < other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	bool operator<=(const Vector& other) {
		if (this->x <= other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	bool operator==(const Vector& other) {
		if (this->x == other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	Vector operator=(const Vector& other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;

		return *this;

	}

	void PrintInfo() {
		cout << "Vector3: " << x << " " << y << " " << z << " " << endl;
	}
};

int main()
{
	Vector obj;
	Vector obj2 = Vector(4, 5, 9);

	Vector obj3 = obj + obj2;
	obj3.PrintInfo();

	obj3 = obj - obj2;
	obj3.PrintInfo();

	++obj;
	obj.PrintInfo();
	--obj;
	obj.PrintInfo();
	obj++;
	obj.PrintInfo();
	--obj;
	obj.PrintInfo();

	if (obj >> obj2) {
		cout << "obj >> obj2" << endl;
	}
	else {
		cout << "obj2 >> obj" << endl;
	}

	if (obj >= obj2) {
		cout << "obj >= obj2" << endl;
	}
	else {
		cout << "obj2 >= obj" << endl;
	}

	if (obj == obj2) {
		cout << "obj == obj2" << endl;
	}
	else {
		cout << "obj2 == obj" << endl;
	}

	if (obj <= obj2) {
		cout << "obj <= obj2" << endl;
	}
	else {
		cout << "obj2 <= obj" << endl;
	}

	if (obj << obj2) {
		cout << "obj << obj2" << endl;
	}
	else {
		cout << "obj2 << obj" << endl;
	}

	obj = obj2;

	obj.PrintInfo();


}


