#ifndef __ARRAYCONTAINER_H__
#define __ARRAYCONTAINER_H__
#include<iostream>;
#define DEFAULT_SIZE 50

template<class T> class ArrayContainer:public Container<T>
{
public:

	int Array[];
	int size = 5;


		ArrayContainer(){ //int size=DEFAULT_SIZE
			Array = new int[size];

	}

	~ArrayContainer(){
		delete[] Array;

	}
	void Clear(){

	}

        int Size(){
        	int counter = 0;
        	int i;
        	int b = sizeof(Array)/sizeof(Array[0]);
        	for(i = 0; i < b; i++)
        		counter+= 1;
        	return counter;
        	}





        bool Empty(){
        	int b = sizeof(Array)/sizeof(Array[0]);
        	if ( b == 0)
        			return true;
        }
        int MaxSize(){

        }
        void Insert(const T& item){


        }
        bool Contains(const T&  item){
        	int b = sizeof(Array)/sizeof(Array[0]);
        	int i;
        	for(i = 0; i<b;i++)
        		if(Array[i] == item)
        			return true;


        };
        T* Find(const T& item){return NULL;}
	void Remove(const T& item){}
};








#endif
