#include<iostream>
#include<string>
#include<math.h>
using namespace std;
#define PI 3.1415

#pragma region 
/*1.��ѧ���ṹ�����ͽ��ж���д����*/
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
/* 2.��ѧ���ṹ�����ͽ��ж���д����
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
	cin >> stu1.math;//�������ֳɼ�
	cin >> stu1.eng;
	cin >> stu1.comp;
	cout <<"���IDΪ��"<< stu1.id << endl;
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
 * 3. ��ָ�뷽����д
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
	 cout << "ѧ����ݺ�Ϊ��" << stu1->ID<<endl;
	 for (int i = 0; i < 4; i++)
		 cout << stu1->name[i];
	 cout << "Ӣ��ɼ�Ϊ��  " << stu1->eng << endl;
	 cout << "��ѧ�ɼ�Ϊ��  " << stu1->math << endl;
	 cout << "���Գɼ�Ϊ��  " << stu1->comp << endl;
 }
 */
#pragma endregion

#pragma region
 /*
  * 4.����һ�������ж��Ƿ�Ϊ����
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
		  cout << "��������" << endl;
  }
  */
#pragma endregion

#pragma region
  /*5.���һ��ѧ���࣬�����е�˽�г�Ա�ǣ�ѧ�š���������ѧ��Ӣ��ͼ�����ɼ���
   *���еĹ�����Ա�����ǣ�����ѧ����Ϣ�������ſε��ܳɼ�����ƽ���ɼ�����ʾѧ����Ϣ��*/
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
	   cout << "�ܳɼ�Ϊ��" << sum << endl;
   }
   void student::average() {
	   float ave;
	   ave = (math + eng + comp) / 3;
	   cout << "ƽ���ɼ�Ϊ��" << ave<< endl;
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
   /*6.����һ���������飬�ڷ�5��ѧ�������ݣ�ѧ�š��ɼ�������ָ��ָ��������Ԫ�أ������1,3,5ѧ�������ݡ�*/
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
		   cout << "ѧ��Ϊ��" << number << endl;
		   cout << "�ɼ�Ϊ��" << grade << endl;

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
	* 7.���һ��������complex,ʵ�ָ����ӡ����ͳ˵Ĺ��ܡ�
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
		cout << "��ֱ���������������ʵ���鲿��" << endl;
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

	//8.����һ���࣬ʵ������10�����������ܹ����������
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

//9.���һ���࣬����x��y˽�����ݳ�Ա����Ʒ���ʵ�ֶ���֮��Ŀ���
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

//10.����һ����cla������x��y�������ݳ�Ա���������������ܣ����������У��������ɸ����󣬶���һ������ָ������ ��ָ�����ǣ����ö���ָ��������ʵ�����ж����������ܡ�
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
//11.this ָ�� Ӧ�þ���
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
//12. ����thisָ�룬�ж����������Ƿ�ָ��ͬһ�ڴ�ռ䡣
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
//13.���ʵ�ֵ�����꣬�ܹ��ƶ�������λ�ã�������ά������Ķ������Tpoint.h�С�
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
//14.���һ�����й��캯��������������ѧ���ࣨѧ�ź���������ʵ���������
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
//15.�������һ���������࣬ʵ���������ڣ��жϸ�����Ƿ�Ϊ���꣬��������ڣ���ʽΪ��yyyy-mm-dd����Ҫ������д���캯��������������

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
			{cout << "������" << endl;}
		else
			{cout << "��������" << endl;}
		cout<<year<<"-"<<month<<"-"<<day<<endl;

	}
};
int main() {
	date d(2008, 8, 8);
	d.print(d.isLeapyear());
}
*/

//16. ��ƾ����࣬���ݳ�ʼ���ù��캯����ʵ���������������� 
/*
class rectangle {
private:
	double longedge;
	double shortedge;
public:
	rectangle(double l, double s) :longedge(l), shortedge(s){}
	void area() {
		cout << "�������Ϊ��" << longedge * shortedge << endl;
	}
};
int main() {
	rectangle r(5.0, 6.0);
	r.area();
}
*/
//17.��Ƴ�������࣬��һ�����������Ĺ��캯������һ�������������Ĺ��캯��������������
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
		cout << "���Ϊ��" << x * y * z << endl;
	}
};
int main() {
	rectangle r1(1, 2, 3);
	r1.volume();
	rectangle r2;
	r2.volume();
}
*/
//18.���԰���
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
//19.���԰���
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
//19.���ƹ��캯��
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
//20.���ƹ��캯����Ӧ��
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
//21. ���ƹ��캯����Ӧ��
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
//22.���һ����cla����������˽�����ݳ�Ա�����һ������ֵ�Ĺ��캯����һ�����ƹ��캯������ʵ��������ܡ�
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
//23.���캯������Ӧ�ã��Ĵ�
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
	name n2 = n1;           ///Ĭ�Ϲ��캯��ʹ�ö���obj1�Ͷ���obj2�����ڴ�ռ䣬�⵼�¸��������ݲ��ܶ�����
							 ���ң�����������ʱϵͳ����obj2��obj1��˳����������
							 ����������obj1ʱ��ָ����ָ�ڴ����ͷţ��������ͷſ�ָ�롱�Ĵ���///

}
*/
//24.���캯������Ӧ��(������д���)
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
//25.����C1�ж����Ա����add,ʵ�����ʼ�����ݼӷ�����������Ϊ�ӷ����ַ�����Ϊ����Ϊ�ַ���
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
//26.�����������A������һ��ָ��pc  ָ�����ݳ�Աc������һ��ָ��pfָ���Ա����fun,�������ǣ�ʵ�ָ��ԵĹ��ܡ�  
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
//27.�����cla������һ�����е�����ָ�����i������һ��ָ��pfָ���Ա����fun,�����, ����pfָ��ʵ���书�ܡ�
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
//28.ָ���Ա��ָ����ϰ
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
//29.������ д���
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
//30.�����ݳ�Ա��ϰ
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
//31.����࣬����һ�������ݳ�Աi�����ݳ�Աj������һ��������������i��j������һ������jֵ�ĺ�����
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
//32.����һ����B,������˽�е����ݳ�Ա������һ������Ա������ʵ�ִ�ӡ����˽�е����ݳ�Ա��(������һ������Ϊ��������ó�����ֻ�ܵ��ó���Ա����)
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
//33.����һ����c1, ��������˽�е����ݳ�Աx��y,����һ����ֵ����,һ����������,��x��y��ֵ���н���������ʾ������
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
//34.����circle��,˽�����ݳ�ԱΪ�뾶r,Ҫ���ṩ���캯��,����Բ��������ܳ����к���������ָ���Ա������ָ��pc(ָ���ܳ�), ps(ָ�������������ʵ����
/*
class circle {
private:
	double radius;
public:
	circle(double r):radius(r){}
	void area() {
		cout<<"���Ϊ��"<<PI * radius * radius<<endl;
	}
	void perimeter() {
		cout<<"�ܳ�Ϊ��"<<PI * 2 * radius<<endl;
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
//35.  ��д����ʵ��һ����ѧҪͳ�ƿ�ѧ������ѧ�������������ж�����һ��ѧ���࣬���ж�����һ����̬������Ա���������ټ�¼������ѧ���������Ա���ʱ���ձ�����Ϣ��
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
//36.���һ����M ����˽�����ݳ�Ա a,��̬˽�����ݳ�Ա b(��ʼ����ֵΪ10��,���캯������̬������Աfun,ʵ��a,b���������������Ϊ:   M p(6), q(8)
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
//37.������д��� ����̬���ݳ�Ա������
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
//38. ���һ����Ԫ������һ�����ࣨcp����λ�÷���ƫ�ơ�
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
//39.����Ԫ������������֮��ľ��롣
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
//40.��Ԫ�� ������д���
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
//41.������ĳ����У��޸���B��ʹ��B���еĺ���ͨ��������ʽȡ��A�����Ĳ������ﵽ����A���Ա��Ŀ�ġ� 
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
//42.ĳ�̵꾭��һ�ֻ�����ﹺ��������ʱ����Ϊ��λ�������������һ������ˣ��̵���Ҫ��¼Ŀǰ������������ģ���̵���ﹺ���������������
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





































