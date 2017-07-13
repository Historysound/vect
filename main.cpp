#include<iostream>
#include<stdarg.h>
#include<list>
#include"vect.h"
//using namespace std;
//
//
//
//template<typename T,int n_dimention>
//class Vect {
//	T coef[4];
//	T *p_coe;
//	int n_dimen;
//public:
//	Vect(){
//		n_dimen=n_dimention;
//		coef[0]=coef[1]=coef[2]=coef[3]=1;
//		p_coe=coef;
//	}
//	Vect(int a)
//	{
//		n_dimen=n_dimention;
//		p_coe=coef;
//	}
//	Vect<T,n_dimention> operator+(Vect<T,n_dimention> v1)
//	{
//		for (int i=0;i<n_dimention;i++)
//		{
//			v1.coef[i]=v1.coef[i]
//			+coef[i];
//		}
//		return v1;
//	}
//	template<typename T,int n_diment>
//	friend ostream &operator<<(ostream &out,Vect<T,n_diment> V3);
//};
//template<typename T,int n_diment>
//ostream &operator<<(ostream &out,Vect<T,n_diment> V3)
//{
//	for (int i=0;i<n_diment;i++)
//	{
//		out<<V3.coef[i]<<endl;
//	}
//
//	return out;
//}
//
//typedef Vect<double,3> Vect3;
//typedef Vect<double,4> Quat;

int main()
{
	//A a(1);
	Vect3 a,b,c;
	Quat q1,q2;
	q2<<1,3,3,3;
	q1<<1,2,2,2;
	c=a+b;
	a<<1,2,3;
	b<<2,3,4;
	a<<2,3,4;
	q1=q1+q2;
	cout<<c<<q1<<a*b;
	return 0;
}