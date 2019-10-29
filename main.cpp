#include"stdafx.h"
#include <iostream>

using namespace std; 

template <typename t >
class Array
{
	//data members 
private : 

	size_t size; 
	t*p; 

	//public members  

public : 

	Array(size_t s) : size(s)
	{
		p = new t[size]; 
	}
	Array(size_t s, t* element):size(s)
	{
		p = new t[size];
		p = element; 
	}
	

	void push(int ele,size_t index)
	{
		p[idex] = ele;

	}
	//------------------------------------------
	//operators

	t& operator [](int n)
	{
		if (n<0 || n>size)
			size += 5;

		return p[n]; 
	}

	friend	ostream& operator <<(ostream& out,const Array<t> a1);

	//----------------------------------------
	void sort()
	{
		for(int i = 0 ; i<size ; i++)
			for (int j = i + 1; j < size; j++)
			{
				if (p[i] > p[j])
				{
					t temp = p[j]; 
					p[j] = p[i]; 
					p[i] = temp; 

				}
			}
		cout << "after sorting :" << endl; 

	}


	

	void Display()
	{
		for (int i = 0; i < size; i++)
		{
			cout << p[i]; 
		}
	}



};
template<typename t>

ostream& operator <<(ostream& out, const Array<t> a1 )
{
	out << a1.p; 

}




int main()
{
	int arr[] = { 5,4,3,2,1};
	Array<int> a1( 5 ,arr );


	//a1[0] = 5; 
//	a1.sort(); 

	//a1.Display();

	a1[6] = 6; 

	cout << a1[6]; 


	return 0; 
}