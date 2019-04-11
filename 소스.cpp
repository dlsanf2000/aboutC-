#include <iostream>
using namespace std;

//���� 3-1
/*
class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

	system("pause");

}
*/

//���� 3-2
/*
class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������" << rect.getArea() << endl;

	system("pause");
}
*/

//2-16

/*
#include <cstring>

int main() {
	char text[10000];		//10000���� ���ڿ� �迭
	int histo[26];			//������ 26������ ������ ����, �ʱⰪ�� ��� 0

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ;�Դϴ�. 10000������ �����մϴ�." << endl;

	cin.getline(text, 10000, ';');

	int len = strlen(text);
	for (int i = 0; i < len; i++) {
		if (isalpha(text[i])) {
			char c = tolower(text[i]);
			histo[c - 'a']++;
		}
	}
	int n = 0;
	for (int i = 0; i < 26; i++) {		//��ü ���ĺ� �� ���ϱ�
		cout << char('a' + i) << "(" << histo[i] << ")" << "\t" << ";";
		for (int j = 0; j < histo[i]; j++)
			cout << '*';
		cout << endl;
	}
}
*/


//���� 3-3

/*
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};
Circle::Circle() {
	radius = 1;
	cout << "������" << radius << "�� ����" << endl;

}

Circle::Circle(int r) {
	radius = r;
	cout << "������" << radius << "�� ����" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������" << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������" << area << endl;

	system("pause");
}
*/

//���� 3-4

/*
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r) {
	radius = r;
	cout << " ������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������" << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

	system("pause");
}
*/


//���� 3-5

/*
class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x <<"," << y << ")" << endl; }
};

Point::Point() :Point(0, 0) { }

Point::Point(int a, int b)
	: x(a), y(b) { }
int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();

	system("pause");
}
*/

//���� 3-6

/*
class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() {
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

Rectangle::Rectangle(int length) {
	width = height = length;
}

bool Rectangle::isSquare(){
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare())cout << "rect3�� ���簢���̴�." << endl;

	system("pause");

}
*/

//���� 3-7
/*
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������" << radius << "  �� ����" << endl;
}

Circle::~Circle() {
	cout << "������" << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	return 0;

}

*/

//���� 3-8

/*
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int n);
	~Circle();
	double getArea();

};

Circle::Circle() {
	radius = 1;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::~Circle() {
	cout << "������" << radius << "�� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}
*/
