#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double max(double A,double B){
	if(A>B){
		return A;
	}else
		return B; 
}

double min(double A,double B){
	if(A<B){
		return A;
	}else
		return B;
}

double overlap(Rect *R1,Rect *R2){
	double  L1 = min(R1->x+R1->w,R2->x+R2->w)-max(R1->x,R2->x);
	double  L2 = min(R1->y,R2->y)-max(R1->y-R1->h,R2->y-R2->h);
	if(L1 > 0&&L2>0){
		return L2*L1; 
	}else
	{ 
	return 0;
	}
}
