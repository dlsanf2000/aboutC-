#include <iostream>
using namespace std;


//예제 6-1
/*
int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int res = a[0];
	for (int i = 1; i < size; i++)
		if (res < a[i]) res = a[i];
	return res;
}

int main() {
	int array[5] = { 1,9, -2, 8, 6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}
*/


//예제 6-2
/*
int sum(int a, int b) {
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}

int sum(int a) {
	int s = 0;
	for (int i = 0; i <= a; i++)
		s += i;
	return s;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}
*/


//예제 6-3
/*
#include <string>

//원형 선언
void star(int a = 5);
void msg(int id, string text = "");

//함수 구현
void star(int a) {
	for (int i = 0; i < a; i++) cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	star();
	star(10);

	msg(10);
	msg(10, "Hello");
}
*/


//예제 6-4
/*
//원형 선언
void f(char c = ' ', int line = 1);

//함수 구현
void f(char c, int line) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++)
			cout << c;
		cout << endl;
	}
}

int main() {
	f();
	f('%');
	f('@', 5);
}
*/

//예제 6-5

/*
void fillLine(int n = 25, char c = '*') {
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}
int main() {
	fillLine();
	fillLine(10, '%');
}
*/

//예제 6-6

/*
class MyVector {
	int *p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete[] p; }
};
int main() {
	MyVector *v1, *v2;
	v1 = new MyVector();
	v2 = new MyVector(1024);

	delete v1;
	delete v2;
}
*/

//예제 6-7
/*

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}
int main() {
	cout << square(3.0);
	cout << square(3);
}
*/

//예제 6-8
/*
int add(int a, int b) {
	return a + b;
}

int add(int a, int &b) {
	b = b + a;
	return b;
}

int main() {
	int s = 10, t = 20;
	cout << add(s, t);	//오버로드된 함수 add의 인스턴스 중 두 개 이상이 인수목록과 일치함 , 함수 중복의 모호성
}
*/

//예제 6-9
/*
#include <string>

void msg(int id) {
	cout << id << endl;
}
void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}

int main() {
	msg(5, "Good Morning");
	msg(6);	//함수 호출 모호해서 컴파일이 오류남
}
*/

//예제 6-10
/*
class Math {
public:
	static int abs(int a) {
		return a > 0 ? a : -a;
	}
	static int max(int a, int b) {
		return (a > b) ? a : b;
	}
	static int min(int a, int b) {
		return (a > b) ? b : a;
	}
};

int main() {
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}

*/

//예제 6-11
/*
class Circle {
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1);
	~Circle() {
		numOfCircles--;
	}
	double getArea() {
		return 3.14*radius*radius;
	}
	static int getNumOfCircles() {
		return numOfCircles;
	}
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}

int Circle::numOfCircles = 0;

int main() {
	Circle *p = new Circle[10];
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	delete[] p;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "생존하고 있는 원의 개수 =" << Circle::getNumOfCircles() << endl;

	Circle b;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

}
*/

//그림 6-11, static 멤버의 선언과 활용, 객체 이름으로 접근

/*
class Person {
public:
	double money;
	void addMoney(int money) {
		this->money += money;
	}
	static int shareMoney;
	static void addShared(int n) {
		shareMoney += n;
	}
};

//static 변수 생성, 전역공간에 생성
int Person::shareMoney = 10;

//main 함수
int main() {
	Person han;
	han.money = 100;
	han.shareMoney = 200;

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	lee.addShared(200);

	cout << han.money << ' ' << lee.money << endl;
	cout << han.shareMoney << ' ' << lee.shareMoney << endl;
}
*/



//클래스 명으로 static 멤버를 접근하는 사례
/*
class Person {
public:
	double money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};

//static 변수 생성. 전역 공간에 생성
int Person::sharedMoney = 10;	//10으로 초기화

//main() 함수
int main() {
	Person::addShared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 300;
	Person::addShared(100);

	cout << han.money << ' ' << Person::sharedMoney << endl;
}
*/

