#include<iostream>
#include <string>
#include <cmath>

using namespace std;

//circle: int[3] {x, y, r}
//rect: int[4] = {x, y, x, y}

bool isInCircle(int* circle, int x0, int y0)
{
	int x = circle[0], y = circle[1], r = circle[2];
	x -= x0;
	y -= y0;
	return x*x + y*y <= r*r;
}

bool isInRect(int* rect, int x0, int y0)
{
	return rect[0] <= x0 && x0 <= rect[2] && rect[1] <= y0 && y0 <= rect[3];
}

bool isInShape(int* shape, int x, int y)
{
	if (shape[0] == 1) //rect
	{
		return isInRect(shape+1, x, y);
	}
	return isInCircle(shape+1, x, y);
}

int main()
{
	int m;
	string rc;
	
	cin >> m;
	int* shapes [m];
	for (int j = 0; j < m; j++)
	{
		cin >> rc;
		int* shape;
		if (rc[0] == 'r')
		{
			shape = new int[5];
			shape[0] = 1;
			for (int i = 1; i < 5; i++)
				cin >> shape[i];
		}
		else
		{
			shape = new int [4];
			shape[0] = 0;
			for (int i = 1; i < 4; i++)
				cin >> shape[i];
		}
		shapes[j] = shape;
	}
	
	int n, x, y;
	int nTargs;
	cin >> n;
	while (n-- > 0)
	{
		nTargs = 0;
		cin >> x >> y;
		for (int i = 0; i < m; i++)
		{
			if (isInShape(shapes[i], x, y))
				nTargs++;
		}
		cout << nTargs << '\n';
	}
		
			
	return 0;
}