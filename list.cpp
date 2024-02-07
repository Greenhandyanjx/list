#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;
class Person {
public:
	int age;
	string name;
	Person(int age, string name)
	{
		this->age = age;
		this->name = name;
	}
};
bool m_compare(Person& p1, Person& p2)
{
	if (p1.age == p2.age)
	{
		return p1.name > p2.name;
	}
	return p1.age > p2.age;
}
void PrintL(list<Person>& l)
{
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "name :" << (*it).name << "age :" << (*it).age <<  endl;
	}

}
//int main()
//{
//	Person p1(50, "aaa");
//	Person p2(30, "bbb");
//	Person p3(40, "ccc");
//	Person p4(50, "ksdj");
//	Person p5(50, "kaioo");
//	list<Person>l;
//	l.push_front(p1);
//	l.push_front(p2);
//	l.push_front(p3);
//	l.push_front(p4);
//	l.push_front(p5);
//	l.sort(m_compare);//当传入的数据类型是自定义类型时,需要自行传入排序或者仿函数
//	PrintL(l);
//	return 0;
//}