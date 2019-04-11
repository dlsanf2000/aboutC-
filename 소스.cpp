#include <iostream>
using namespace std;


//예제 4-1
/*
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	//객체 이름으로 멤버 접근
	cout << donut.getArea() << endl;

	//객체 포인터로 멤버 접근
	Circle *p;
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
}
*/

//예제 4-2
/*
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();

};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle circleArray[3];

//배열의 각 원소 객체의 멤버 접근
circleArray[0].setRadius(10);
circleArray[1].setRadius(20);
circleArray[2].setRadius(30);

for (int i = 0; i < 3; i++)
	cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl;

Circle *p;
p = circleArray;
for (int i = 0; i < 3; i++) {
	cout << "CIrcle" << i << "의 면적은" << p->getArea() << endl;
	p++;
}
}
*/


//예제 4-3
/*
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

	for (int i = 0; i < 3; i++)
		cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl;
}
*/

//예제 4-4

/*
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle circles[2][3];

	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(4);
	circles[1][1].setRadius(5);
	circles[1][2].setRadius(6);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++) {
			cout << "Circle [" << i << "," << j << "}의 면적은";
			cout << circles[i][j].getArea() << endl;
		}
}
*/


//예제 4-5
/*
int main() {
	int *p;

	p = new int;
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	*p = 5;
	int n = *p;
	cout << "*p =" << *p << endl;
	cout << "n = "<< n << endl;

	delete p;
}
*/

//예제 4-6

/*
int main() {
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int *p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1<< "번째 정수: ";
		cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "평균 = " << sum / n << endl;

	delete[] p;
}
*/

//예제 4-7
/*
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14*radius*radius; }
};

Circle::Circle(){
radius = 1;
cout << "생성자 실행 radius = " << radius << endl;

}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	Circle *p, *q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;
}
*/


//예제 4-8
/*
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() {
		return 3.14*radius*radius;
	}

};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius =" << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료)>>";
		cin >> radius;
		if (radius < 0) break;
		Circle *p = new Circle(radius);
		cout << "원의 면적은" << p->getArea() << endl;
		delete p;
	}
}
*/


//예제 4-9
/*
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14*radius*radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius="<< radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	Circle *pArray = new Circle[3];
	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << endl;
	}
	Circle *p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++;
	}
	delete[] pArray;
}
*/

//예제 4-10

class Circle {
	int radius;
public:
	Circle();
	~Circle() { }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14*radius*radius; }

};
Circle::Circle() {
	radius = 1;
}
int main() {
	cout << "생성하고자 하는 원의 개수?";
	int n, radius;
	cin >> n;
	if (n <= 0) return 0;
	Circle *pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << ":";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		cout << p->getArea() << " ";
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "면적이 100에서 200 사이인 원의 개수는" << count << endl;
	delete[] pArray;
	
}
