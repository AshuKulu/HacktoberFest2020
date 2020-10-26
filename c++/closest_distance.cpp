//make struct Point to be able to input the x and y co-ordinates together
//make an array of Point to input the details
//make two more arrays of same size
//qsort them by x and y coordinate respectively
//send these two array to a func.
//recursively divide these points on the basis of mid (x)
//find the closest distance in each half
//base case: n<=3 here, calculate using distance formula (can make a func for this)
//find d= min of both halves
//now call a diff func to calculate min dist in the mid strip of 2d
//for this, make an array strip by checking if abs(x-mid)<d and add it in a sorted on y manner
//now after passing this array, for ys at dist<d find the points actual disance using formula
//use it in a min loop by updating the this min dist found.
//return min


#include<bits/stdc++.h>
using namespace std;

struct Point
{
	int x;
	int y;
};

int compareX(const void* a, const void* b)
{
	Point* p1=(Point *)a;
	Point* p2=(Point *)b;

	return p1->x-p2->x;
}

int compareY(const void* a, const void* b)
{
	Point* p1=(Point *)a;
	Point* p2=(Point *)b;

	return p1->y-p2->y;
}
float distance(Point X, Point Y)
{
	float d=sqrt((X.x-Y.x)*(X.x-Y.x) +(X.y-Y.y)*(X.y-Y.y));
			
	return d;
}

float BruteForceDist(Point Px[],int n)
{
	float dist=FLT_MAX;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			float d=distance(Px[i],Px[j]);
			if(d<dist)
			{
				dist=d;
			}
		}
	}
	return dist;
}

float closestStripDist(Point strip[], int n,float d)
{
	float min=d;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n && (strip[j].y-strip[i].y)<min;j++)
		{
			if(distance(strip[j],strip[i])<min)
			{
				min=distance(strip[j],strip[i]);
			}
		}
	}
	return min;
}

float recurseMinDist(Point Px[],Point Py[],int n)
{
	if(n<=3)
	{
		return BruteForceDist(Px,n);
	}

	int mid=n/2;
	Point midp=Px[mid];

	Point Pyl[mid];
	Point Pyr[n-mid];

	int li=0,ri=0;
	for(int i=0;i<n;i++)
	{
		if(Py[i].x<=midp.x &&li<mid)
		{
			Pyl[li++]=Py[i];
		}
		else
			Pyr[ri++]=Py[i];
	}

	float dmin_l=recurseMinDist(Px,Pyl,mid);
	float dmin_r=recurseMinDist(Px+mid,Pyr,n-mid);
	float d=min(dmin_l, dmin_r);

	Point strip[n];
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(abs(Py[i].x-midp.x)<d)
		{
			strip[j++]=Py[i];
		}
	}

	return closestStripDist(strip,j,d);


}



int main()
{
	Point P[]={{2,3},{12,30},{40,50},{5,1},{12,10},{3,4}};
	int n=sizeof(P)/sizeof(P[0]);
	Point Px[n],Py[n];
	for(int i=0;i<n;i++)
	{
		Px[i]=P[i];
		Py[i]=P[i];
	}
	qsort(Px,n,sizeof(Px[0]),compareX);
	qsort(Py,n,sizeof(Py[0]),compareY);
	float min_dist=recurseMinDist(Px,Py,n);
	cout<<min_dist<<endl;
}
