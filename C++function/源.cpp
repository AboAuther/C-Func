#include<iostream>
#include<string>
#include<math.h>
using namespace std;
#define PI 3.1415

#pragma region 
/*1.对学生结构体类型进行读和写操作*/
/*
struct students {
	int ID;
	char* name;
	float e, c, m;

};

void main()
{
	struct students stu;
	cin >> stu.ID;
	stu.name = new char[30];
	cin >> stu.name;
	cout << stu.ID << "   " << stu.name;

}

*/
#pragma endregion

#pragma region
/* 2.对学生结构体类型进行读和写操作
*/
/*
void main()
{
	struct student
	{
		int id;
		char name[4];
		float math, eng, comp;
	};
	struct student stu1;
	stu1.id = 1001;
	for (int i = 0; i < 4; i++)
	cin >> stu1.name[i];
	cin >> stu1.math;//输入数字成绩
	cin >> stu1.eng;
	cin >> stu1.comp;
	cout <<"身份ID为："<< stu1.id << endl;
	for (int i = 0; i < 4; i++)
	cout << stu1.name[i];
	cout << endl;
	cout << "math" << "  "<<stu1.math << endl;
	cout << "English" << "  " << stu1.eng << endl;
	cout << "compute" << "  " << stu1.comp << endl;

}
*/
#pragma endregion

#pragma region
/*
 * 3. 用指针方法改写
 */
 /*
 int main() {
	 struct students {
		 int ID;
		 char name[4];
		 float eng, math, comp;

	 };
	 struct students stu;
	 struct students *stu1;
	 stu1 = &stu;
	 stu1->ID = 1001;
	 for (int i = 0; i < 4; i++)
		 cin >> stu1->name[i];
	 cin >> stu1->eng;
	 cin >> stu1->comp;
	 cin >> stu1->math;
	 cout << endl;
	 cout << "学生身份号为：" << stu1->ID<<endl;
	 for (int i = 0; i < 4; i++)
		 cout << stu1->name[i];
	 cout << "英语成绩为：  " << stu1->eng << endl;
	 cout << "数学成绩为：  " << stu1->math << endl;
	 cout << "电脑成绩为：  " << stu1->comp << endl;
 }
 */
#pragma endregion

#pragma region
 /*
  * 4.输入一个日期判断是否为闰年
  */
  /*struct Date {
  int year;
  int month;
  int day;
  };
  bool isLeapYear(Date y) {
	  return ((y.year % 400 == 0) || ((y.year % 4 == 0) && (y.year % 400 != 0)));
  }
  void print(Date y) {
	  cout << y.year << "-" << y.month << "-" << y.day<<endl;
  }
  int main() {
	  struct Date d;
	  cin >> d.year;
	  cin >> d.month;
	  cin >> d.day;

	  if (isLeapYear(d))
		  print(d);
	  else
		  cout << "不是闰年" << endl;
  }
  */
#pragma endregion

#pragma region
  /*5.设计一个学生类，他具有的私有成员是：学号、姓名、数学、英语和计算机成绩；
   *具有的公共成员函数是：输入学生信息，求三门课的总成绩，求平均成绩，显示学生信息。*/
   /*
   class student {
   private:
	   int num;
	   char name[10];
	   float comp, eng, math;
   public:
	   void input(int no, char *n, float c, float e, float m);
	   void average();
	   void sum();
	   void print();
   };
   void student::input(int no, char *n, float c, float e, float m) {
	   num = no;
	   strcpy(name,n);
	   comp = c;
	   eng = e;
	   math = m;

   }
   void student::print() {
	   cout << num << endl;
	   cout << name << endl;
	   cout << eng << endl;
	   cout << math << endl;
	   cout << comp << endl;

   }
   void student::sum() {
	   float sum ;
	   sum = comp + eng + math;
	   cout << "总成绩为：" << sum << endl;
   }
   void student::average() {
	   float ave;
	   ave = (math + eng + comp) / 3;
	   cout << "平均成绩为：" << ave<< endl;
   }
   int main() {
	   student s;
	   s.input(1001, "li", 80, 90, 100);

	   s.sum();
	   s.average();
	   s.print();
   }

   */
#pragma endregion

#pragma region
   /*6.建立一个对象数组，内放5个学生的数据（学号、成绩），用指针指向数组首元素，输出第1,3,5学生的数据。*/
   /*
   class student {
   private:
	   int number;
	   double grade;
   public:
	   void input(int n,double g) {
		   number = n;
		   grade = g;
	   }
	   void print() {
		   cout << "学号为：" << number << endl;
		   cout << "成绩为：" << grade << endl;

	   }
   };
   int main() {
	   student stu[5];
	   stu[0].input(1001, 91);
	   stu[1].input(1002, 90);
	   stu[2].input(1003, 92);
	   stu[3].input(1004, 95);
	   stu[4].input(1005, 96);
	   student* s;
	   s = stu;
	   for (int i = 0; i < 5; i = i + 2)
		   stu[i].print();


   }
   */
#pragma endregion

#pragma region
   /*
	* 7.设计一个复数类complex,实现复数加、减和乘的功能。
	*/
	/*
	class complex {
	public:
		float imag;
		float real;
		complex(float r, float i) {
			imag = i;
			real = r;
		}
		complex(){
			imag = real = 0;

		}
	};
	void addcomplex(complex &c, complex c1, complex c2) {
		c.imag = c1.imag + c2.imag;
		c.real = c1.real + c2.real;

	}
	void subcomplex(complex &c, complex c1, complex c2) {
		c.imag = c1.imag - c2.imag;
		c.real = c1.real - c2.real;
	}
	void mulcomplex(complex &c, complex c1, complex c2) {
		c.imag = c1.real * c2.imag + c1.imag * c2.real;
		c.real = c1.imag * c2.real - c1.real * c2.imag;
	}
	void print(complex c) {
		if (c.imag > 0)
			cout << c.real << "+" << c.imag <<"i"<< endl;
		if (c.imag < 0)
			cout << c.real << c.imag << "i" << endl;
		if (c.imag == 0)
			cout << c.real << endl;
	}
	int main() {
		complex  mul, add, sub;
		float a, b, c, d;
		cout << "请分别输入两个复数的实部虚部：" << endl;
		cin >> a >> b >> c >> d;
		complex c1(a, b);
		print(c1);
		complex c2(c, d);
		print(c2);
		addcomplex(add, c1, c2);
		print(add);
		subcomplex(sub, c1, c2);
		print(sub);
		mulcomplex(mul, c1, c2);
		print(mul);
	}
	*/
#pragma endregion

	//8.定义一个类，实现输入10个整数，并能够反序输出。
/*
class inverse {
private:
	int a[10];
public:
	void input() {
		for (int i = 0; i < 10; i++)
			cin >> a[i];
	}
	void print() {
		for (int i = 9; i >= 0; i--)
		cout << a[i]<<" ";
	}
};
int main() {
	inverse exp;
	exp.input();
	exp.print();
}

*/

//9.设计一个类，具有x，y私有数据成员，设计方法实现对象之间的拷贝
/*
class ccopy {
private:
	int x;
	int y;
public:
	void input() {
		cin >> x >> y;

	}
	void copy(ccopy *c) {
		x = c->x;
		y = c->y;
	}
	void print() {
		cout << x << "  " << y;
	}
};
int main() {
	ccopy c,c1;
	c.input();
	c1.copy(&c);
	c1.print();
}
*/

//10.定义一个类cla，具有x，y两个数据成员，有输入和输出功能，在主函数中，定义若干个对象，定义一个对象指针数组 ，指向它们，利用对象指针数组来实现所有对象的输出功能。
/*
class cla {
private:
	int x, y;
public:
	void input() {
		cin >> x >> y;
	}
	void print() {
		cout << x << "   " << y << endl;
	}
};
int main() {
	cla ex1, ex2, ex3;
	ex1.input();
	ex2.input();
	ex3.input();
	cla* ex[3] = { &ex1,&ex2,&ex3 };
	for (int i = 0; i < 3; i++)
		ex[i]->print();
}
*/
//11.this 指针 应用举例
/*
class example_this {
private:
	int a, b;
public:
	void setdate() {
		a = 0; b = 0;
	}
	void setdate1(int x,int y) {
		a = x;
		b = y;
	}
	int returna() {
		return a;
	}
	int returnb() {
		return b;
	}
	void copy(example_this ex);
};
void example_this::copy(example_this ex) {
	if (this == &ex) {
		return;
	}
	*this = ex;
}
int main() {
	example_this ex1, ex2;
	ex1.setdate();
	ex2.setdate1(3, 4);
	ex1.copy(ex2);
	cout << ex1.returna() - ex2.returna() << endl;
	cout << ex1.returnb() + ex2.returnb() << endl;
}
*/
//12. 利用this指针，判断两个对象是否指针同一内存空间。
/*
class example {
public:
	void function(example& ex) {
		if (this == &ex)
			cout << "TURE" << endl;
		else
			cout << "FLASE" << endl;
	}
};
int main() {
	example ex1, ex2;
	ex1.function(ex2);
}
*/
//13.编程实现点的坐标，能够移动坐标点的位置，并将二维点坐标的定义放在Tpoint.h中。
/*
class Tpoint {
private:
	float x, y;
public:
	void setpoint(float x0, float y0) {
		x = x0;
		y = y0;
	}
	void printpoint() {
		cout << x << "  " << y << endl;
	}
	void movepoint(float x1, float y1) {
		x = x + x1;
		y = y + y1;
	}
};
int main() {
	Tpoint p1, p2, * pp;
	pp = new Tpoint;
	p1.setpoint(1, 2);
	p2.setpoint(3, 4);
	pp->setpoint(5, 6);
	p1.movepoint(1, 1);
	p2.movepoint(2, 2);
	pp->movepoint(3, 3);
	p1.printpoint();
	p2.printpoint();
	(*pp).printpoint();
}
*/
//14.设计一个具有构造函数和析构函数的学生类（学号和姓名），实现输出功能
/*
class student {
private:
	int number;
	char name[10];
public:
	student(int id,char *n) {
		number = id;
		strcpy(name, n);
		cout << "This is constructor" << endl;
	}
	~student() {
		cout << "This is distructor" << endl;
	}
	void print() {
		cout << number << "   " << name << endl;
	}
};
int main() {
	student s(1001, "wang");
	s.print();
}
*/
//15.重新设计一个日期型类，实现输入日期，判断该年份是否为闰年，并输出日期，格式为”yyyy-mm-dd”，要求有书写构造函数和析构函数。

/*
class date {
private:
	int year, month, day;
public:
	date(int y,int m,int d) {
		day = d;
		month = m;
		year = y;
	}
	~date(){}
	int isLeapyear(){
		if ((year % 400 == 0) || (year % 400 != 0) && (year % 4 == 0))
			return 1;
		else
			return 0;
	}
	void print(int n) {
		if (n == 1)
			{cout << "是闰年" << endl;}
		else
			{cout << "不是闰年" << endl;}
		cout<<year<<"-"<<month<<"-"<<day<<endl;

	}
};
int main() {
	date d(2008, 8, 8);
	d.print(d.isLeapyear());
}
*/

//16. 设计矩形类，数据初始化用构造函数，实现求面积并输出功能 
/*
class rectangle {
private:
	double longedge;
	double shortedge;
public:
	rectangle(double l, double s) :longedge(l), shortedge(s){}
	void area() {
		cout << "矩形面积为：" << longedge * shortedge << endl;
	}
};
int main() {
	rectangle r(5.0, 6.0);
	r.area();
}
*/
//17.设计长方体的类，有一个不带参数的构造函数，另一个有三个参数的构造函数，输出它的体积
/*
class rectangle {
private:
	double x;
	double y;
	double z;
public:
	rectangle(){
		x=10;y=10;z=10;
	}
	rectangle(double a,double b,double c):x(a),y(b),z(c){}
	void volume() {
		cout << "体积为：" << x * y * z << endl;
	}
};
int main() {
	rectangle r1(1, 2, 3);
	r1.volume();
	rectangle r2;
	r2.volume();
}
*/
//18.测试案例
/*
class sample {
private:
	int n;
public:
	sample() {};
	sample(int m) { n = m; }
	void addvalue(int m) {
		sample s;
		s.n = n + m;
		*this = s;
	}
	void print() {
		cout << "n=" << n << endl;
	}
};
int main() {
	sample s(10);
	s.addvalue(5);
	s.print();
}
*/
//19.测试案例
/*
class test {
private:
	int a, b;
public:
	test(int x, int y) {
		a = x;
		b = y;
		cout << a << " " << b << endl;
	}
	test(test& t) {
		cout << t.a << "  " << t.b << endl;

	}
	~test() {}
	int add(int x, int y)
	{
		return x + y;
	}

};
int main() {
	test t1(4, 8);
	test t2(t1);
	cout << t2.add(2, 3) << endl;
}
*/
//19.复制构造函数
/*
class location {
private:
	int x, y;
public:
	location(int xx = 0, int yy = 0) {
		cout << "constructor is called" << endl;
		x = xx;
		y = yy;
	}
	location(const location& p);
	int getx() const { return x; }
	int gety() const { return y; }
};
location::location(const location& p) {
	x = p.x;
	y = p.y;
	cout << "copy constructor is called" << endl;
}
int main() {
	location a(1, 2);
	location b(a);
	cout << "b" << b.getx() << b.gety() << endl;
}
*/
//20.复制构造函数的应用
/*
class location {
	int x, y;
public:
	location(int xx = 0, int yy = 0) {
		cout << "constructor is called" << endl;
		x = xx;
		y = yy;
	}
	location(const location& l);
	int getx() const {
		return x;
	}
	int gety() const { return y; }
	~location() {
		cout << "distructor is called" << endl;
	}
};
location::location(const location& l) {
	x = l.x;
	y = l.y;
	cout << "copy contructor is called" << endl;
}
void function(location l) {
	cout << "function:" << l.getx() << l.gety() << endl;
}
int main() {
	location l(2, 3);
	function(l);
}
*/
//21. 复制构造函数的应用
/*
class location {
	int x, y;
public:
	location(int xx = 0, int yy = 0) {
		cout << "contructor is called" << endl;
		x = xx;
		y = yy;
	}
	location(const location& l);
	int getx() const { return x; }
	int gety() const { return y; }
	~location() { cout << "distructor is called" << endl; }
};
location::location(const location& l) {
	cout << "copy constructor is called" << endl;
	x = l.x;
	y = l.y;
}
location function() {
	location a(1, 2);
	return a;
}
int main() {
	location b;
	b = function();
}
*/
//22.设计一个类cla。具有两个私有数据成员，设计一个赋初值的构造函数和一个复制构造函数，并实现输出功能。
/*
class cla {
private:
	int x, y;
public:
	cla(int a, int b) :x(a), y(b){}
	cla(cla& c) {
		x = c.x;
		y = c.y;
	}
	void print() {
		cout << x << "  " << y << endl;
	}
};
int main() {
	cla c1(2, 3);
	cla c2(c1);
	cla c3 = c2;
	c3.print();
}
*/
//23.构造函数程序应用（改错）
/*
class name {
protected:
	char* pname;
	int size;
public:
	name(char* pn);
	~name();
};
name::name(char* pn) {
	cout << "constuction" << pn << endl;
	pname = new char[strlen(pn) + 1];
	if (pname != 0)
		strcpy(pname, pn);
	size = strlen(pn);
}
name::~name() {
	cout << "distructing" << pname << endl;
	pname[0] = '\0';
	delete[]pname;
	pname = NULL;
	size = 0;
}
int main() {
	name n1("lrg");
	name n2 = n1;           ///默认构造函数使用对象obj1和对象obj2共享内存空间，这导致各对象数据不能独立，
							 而且，主函数结束时系统按照obj2、obj1的顺序析构对象，
							 当析构对象obj1时，指针所指内存已释放，产生“释放空指针”的错误。///

}
*/
//24.构造函数程序应用(看程序写结果)
/*
class sample {
	int n;
public:
	sample(){}
	sample(int m) {
		n = m;
		cout << "sample'n=" << n << endl;
	}
	void add(int m) {
		sample s(m);
		cout << "m=" << m << endl;
		n++;
		s.n = s.n + n;
		cout << "n=" << n << endl;
		*this = s;
		cout << "m=" << m << endl;
	}
	void print() {
		cout << "n=" << n << endl;
	}
};
int main() {
	sample s(12);
	s.add(18);
	s.print();
}
*/
//25.在类C1中定义成员函数add,实现类初始化数据加法、整数类型为加法，字符类型为连接为字符串
/*
class c1 {
private:
	int x, y;
public:
	c1(int a, int b) {
		x = a;
		y = b;
	}
	void add();
	void add(int i1, int i2);
	void add(char c1, char c2);
};
void c1::add() {
	cout << x + y << endl;
}
void c1::add(int i1, int i2) {
	int c;
	c = i1 + i2;
	cout << c << endl;
}
void c1::add(char c1, char c2) {
	char s[2];
	s[0] = c1;
	s[1] = c2;
	cout << s[0] << s[1] << endl;
}
int main() {
	c1 x(1, 2);
	x.add();
	x.add(3, 4);
	x.add('5', '6');
}
*/
//26.利用上面的类A，定义一个指针pc  指向数据成员c，定义一个指针pf指向成员函数fun,调用他们，实现各自的功能。  
/*
class A {
private:
	int a;
public:
	int c;
	A(int i) {
		a = i;
	}
	int fun(int b) {
		return a*c + b;
	}
};
int main() {
	A x(18);
	int A::* pc;
	pc = &A::c;
	x.*pc = 5;
	int(A:: * pf)(int);
	pf = &A::fun;
	A* p = &x;
	cout << (p->*pf)(10) << endl;
}
*/
//27.设计类cla，具有一个公有的整型指针变量i，定义一个指针pf指向成员函数fun,输出它, 利用pf指针实现其功能。
/*
class cla {
public:
	int* i;
	cla(int j) {
		i = new int;
		*i = j;
	}
	void print() {
		cout << *i << endl;
	}
};
int main() {
	cla c1(10);
	c1.print();
	void (cla:: * pf)();
	pf = &cla::print;
	(c1.*pf)();
	cla* p = &c1;
	(*p.*pf)();
	(p->*pf)();
}
*/
//28.指向成员的指针练习
/*
class A {
	int x;
public:
	A(int i) { x = i; }
	void fun1(int i) {
		x += i;
		cout << "function1:" << x << endl;
	}
	void func2(int i) {
		x += i;
		cout << "function2:" << x << endl;
	}
};
int main(){
	A c1(2), c2(5);
	void(A:: * pf)(int) = &A::fun1;
	(c1.*pf)(5);
	pf = &A::func2;
	(c2.*pf)(10);
}

*/
//29.看程序 写结果
/*
class one;
class two {
private:
	int x;
	char* strx;
public:
	two(int a, char* str) {
		x = a;
		strx = new char[strlen(str) + 1];
		strcpy(strx, str);
	}
	void show(one& ob);
};
class one {
private:
	int y;
	char* stry;
public:
	one(int b, char* str) {
		y = b;
		stry = new char[strlen(str) + 1];
		strcpy(stry, str);
	}
	friend void two::show(one& ob);
};
void two::show(one& ob) {
	cout << strx << " ";
	cout << ob.stry << endl;
}
int main() {
	two a(20, "Good");
	one b(30, "Student");
	a.show(b);
}
*/
//30.常数据成员练习
/*
class A {
private:
	const int a;
	static const int b;
public:
	A(int i);
	void print();
	const int& r;                                                               ///50 15 50
																				   30 15 30///
};
const int A::b = 15;
A::A(int i):a(i),r(a){}
void A::print() {
	cout << a << "," << b << "," << r << endl;
}
int main() {
	A a1(50), a2(30);
	a1.print();
	a2.print();
}
*/
//31.设计类，定义一个常数据成员i和数据成员j，定义一个常输出函数输出i和j，定义一个更改j值的函数。
/*
class cla {
private:
	const int i;
	int j;
public:
	cla(int x,int y):i(x),j(y){}
	void setj(int y) {
		j = y;
	}
	void print() const {
		cout << i << " " << j << endl;
	}
};
int main() {
	cla c1(1, 2);
	c1.print();
	c1.setj(3);
	c1.print();
}
*/
//32.定义一个类B,有两个私有的数据成员，定义一个常成员函数，实现打印两个私有的数据成员。(若声明一个对象为常对象，则该常对象只能调用常成员函数)
/*
class B {
private:
	int x, y;
public:
	B(int a, int b) {
		x = a;
		y = b;
	}
	void print() const{
		cout << x << " " << y << endl;
	}
};
int main() {
	B x1(1, 2);
	x1.print();
}
*/
//33.定义一个类c1, 它有两个私有的数据成员x、y,定义一个赋值函数,一个交换函数,对x、y的值进行交换。并显示出来。
/*
class cla {
private:
	int x, y;
public:
	cla(int a, int b):x(a),y(b){}
	void swap() {
		int i;
		i = x; x = y; y = i;
	}
	void print() {
		cout << x << "  " << y << endl;
	}
};
int main() {
	cla c(1, 2);
	c.swap();
	c.print();
}
*/
//34.定义circle类,私有数据成员为半径r,要求提供构造函数,计算圆的面积、周长公有函数。利用指向成员函数的指针pc(指向周长), ps(指向面积在主函数实现它
/*
class circle {
private:
	double radius;
public:
	circle(double r):radius(r){}
	void area() {
		cout<<"面积为："<<PI * radius * radius<<endl;
	}
	void perimeter() {
		cout<<"周长为："<<PI * 2 * radius<<endl;
	}
};
int main() {
	circle c(3.0);
	c.area();
	c.perimeter();
	void (circle:: * pc)() = &circle::perimeter;
	(c.*pc)();
	void (circle:: * pr)() = &circle::area;
	(c.*pr)();
}
*/
//35.  编写程序实现一所大学要统计开学报到的学生人数。程序中定义了一个学生类，其中定义了一个静态变量成员，用来跟踪记录报到的学生人数，以便随时掌握报到信息。
/*
class student {
public:
	static int c;
	int stu(){
		c++;
		return c;
	}
};
int student::c = 0;
int main() {
	student a1;
	cout << a1.stu() << endl;
	student a2;
	cout << a1.stu() << endl;
	cout << student::c << endl;
}
*/
//36.设计一个类M ，有私有数据成员 a,静态私有数据成员 b(初始化的值为10）,构造函数，静态函数成员fun,实现a,b的输出。调试数据为:   M p(6), q(8)
/*
class M {
private:
	int a;
	static int b;
public:
	M(int x) {
		a = x;
		b = b + a;
	}
	static void fun(M m) {
		cout << "a=" << m.a << endl;
		cout << "b=" << b << endl;
	}
};
int M::b = 10;
int main() {
	M p(6);
	M q(8);
	M::fun(p);
	M::fun(q);
}
*/
//37.看程序写结果 （静态数据成员函数）
/*
class Student {
private:
	char number[5];
	char name[18];
	float score;
	static int counte;
public:
	Student(char* num, char* name, float s) {
		strcpy(number, num);
		strcpy(this->name, name);
		score = s;
		counte++;
	}
	void get_counte() {
		cout << counte << endl;
	}
};
int Student::counte = 0;
int main() {
	Student s1("2012", "lirugixin", 90), s2("2013", "lrg", 99);
	s1.get_counte();
	s2.get_counte();
}
*/
//38. 设计一个友元函数是一个点类（cp）的位置发生偏移。
/*
class point {
private:
	int x, y;
	friend point move(point& c, int n);
public:
	point(int x1, int y1) {
		x = x1;
		y = y1;
	}
	void print() {
		cout << "x=  " << x << "  y=  " << y << endl;
	}
};
point move(point& c, int n) {
	c.x += n;
	c.y += n;
	return c;
}
int main() {
	point c(10, 20);
	c.print();
	move(c, 5);
	c.print();
}
*/
//39.用友元函数计算两点之间的距离。
/*
class point {
private:
	double x, y;
	friend double distance(point &p,point &q);
public:
	point(double a,double b):x(a),y(b){}
};
double distance(point &p,point &q){
	return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
}
int main() {
	point p1(10, 20), p2(15, 30);
	cout<<distance(p1, p2)<<endl;
}
*/
//40.友元类 看程序，写结果
/*
class A {
private:
	int x;
public:
	friend class B;
	void print() {
		cout << x << endl;
	}
};
class B {
private:
	A a;
public:
	void setx(int i){
		a.x = i;
	}
	void print() {
		a.print();
	}
};
int main() {
	B b;
	b.setx(100);
	b.print();
}
*/
//41.在上面的程序中，修改类B，使得B类中的函数通过参数形式取得A类对象的参数，达到访问A类成员的目的。 
/*
class A {
private:
	int x;
public:
	friend class B;
	void print() {
		cout << x << endl;
	}
};
class B {
public:
	void setx(A &a, int i) {
		a.x = i;
	}
	void print(A &a) {
		a.print();
	}
};
int main() {
	B b;
	A a;
	b.setx(a, 100);
	b.print(a);
}
*/
//42.某商店经销一种货物。货物购进和卖出时以箱为单位，各箱的重量不一样，因此，商店需要记录目前库存的总重量。模拟商店货物购进和卖出的情况。
class Goods {
private:
	int weight;
public:
	static int total_weight;
	Goods(int w) {
		weight = w;
		total_weight += w;
	}
	~Goods() {
		total_weight -= weight;
	}
	static int totalweight() {
		return total_weight;
	}
	Goods* next;
};
int Goods::total_weight = 0;
void purchase(Goods*& f, Goods*& r, int w) {
	Goods* p = new Goods(w);
	p->next = NULL;
	if (f == NULL) {
		f = p; r = p;
	}
	else {
		r->next = p;
		r = r->next;
	}
}
void sale(Goods*& f, Goods*& r) {
	if (f == NULL) {
		cout << "no any goods!" << endl;
		return;
	}
	Goods* q = f;
	f = f->next;
	delete q;
	q = NULL;
	cout << "sale" << endl;
}
int main() {
	Goods* f1 = NULL, * r1 = NULL;
	int w;
	int choice;
	do {
		cout << "please choice\n";
		cout << "1--purchase    2--sale    0--over" << endl;
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "input weight" << endl;
			cin >> w;
			purchase(f1, r1, w);
			break;
		}
		case 2: {
			sale(f1, r1);
			break;
		}
		case 0: {
			break;
		}
		}
		cout << "Now total weight is:" << Goods::total_weight << endl;
	} while (choice);
}





































