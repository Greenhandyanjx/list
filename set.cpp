#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
class Person {
public:
	int age;
	string name;
	Person(int age, string name)
	{
		this->name = name;
		this->age = age;
	}
};
//修改set容器的排列顺序
class m_compare {
public://************
	bool operator()(int a,int b) const{
		return a > b;
	}
};
class m_cp {
public:
	bool operator()(const Person& p1,const Person& p2)const {
		return p1.age > p2.age;
	}
};
int main()
{
	set<int, m_compare>s;
	//set没有push_back的接口
	s.insert(10);
	s.insert(20);
	s.insert(50);
	s.insert(30);
	s.insert(40);
	set<Person, m_cp>s1;
	Person p1(111, "aaa");
	Person p5(121, "bbb");
	Person p3(122, "acc");
	Person p4(333, "dsa");
	Person p2(1231, "asd");
	s1.insert(p4);
	s1.insert(p1);
	s1.insert(p3);
	s1.insert(p2);
	s1.insert(p5);
	for (set<int, m_compare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (set<Person, m_cp>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << it->age << " " << it->name << endl;
	}
	return 0;
}