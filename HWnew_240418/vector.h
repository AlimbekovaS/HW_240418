#pragma once
class Vector
{
private:
	size_t cur_size;
	size_t buf_size;
	int *els;
	int count;
public:
	Vector();
	int & push_back(int el);
	
	Vector & operator+(const Vector &obj);
	void print();
	Vector & operator-(const Vector&obj);
	Vector deleteEl(int index);
	int & operator[](int index);
	int operator<<(int index);
	int operator>>(int el);

	bool  operator==(const Vector &obj);

	bool  operator!=(const Vector &obj);
	~Vector() { delete[]els; }
};
