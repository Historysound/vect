#include<iostream>
using namespace std;

template<typename T,int n_dimention>
class Vect;

typedef Vect<double,3> Vect3;
typedef Vect<double,4> Quat;

template<typename T,int n_dimention>
class Vect {
	T coef[4];
	int n_dimen;
public:
	Vect(){
		n_dimen=n_dimention;
		coef[0]=coef[1]=coef[2]=coef[3]=0;
	}
	Vect<T,n_dimention> operator+(Vect<T,n_dimention> v1)
	{
		for (int i=0;i<n_dimention;i++)
		{
			v1.coef[i]=v1.coef[i]
			+coef[i];
		}
		return v1;
	}
	Vect3 operator*(Vect3 v1);
	template<typename T,int n_diment>
	friend ostream &operator<<(ostream &out,Vect<T,n_diment> V3);
	Vect<T,n_dimention> & operator<<(T coe)
	{
		coef[0]=coe;
		n_dimen=1;
		return *this;
	}
	Vect<T,n_dimention> & operator,(T coe)
	{
		switch (n_dimen)
		{
		case 1:coef[n_dimen++]=coe;break;
		case 2:coef[n_dimen++]=coe;break;
		case 3:coef[n_dimen]=coe;break;
		}
		return *this;
	}
};
template<typename T,int n_diment>
Vect3 Vect<T,n_diment>::operator*(Vect3 v2)
{
	Vect3 tem;
	tem.coef[0]=coef[1]*v2.coef[2]-coef[2]*v2.coef[1];
	tem.coef[1]=coef[2]*v2.coef[0]-coef[0]*v2.coef[2];
	tem.coef[2]=coef[0]*v2.coef[1]-coef[1]*v2.coef[0];
	return tem;
}
template<typename T,int n_diment>
ostream &operator<<(ostream &out,Vect<T,n_diment> V3)
{
	for (int i=0;i<n_diment;i++)
	{
		out<<V3.coef[i]<<endl;
	}

	return out;
}