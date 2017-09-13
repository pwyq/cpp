/*solving
In a 6 * 6 grid, construct all triangles whose vertices are nodes
,one of them is at 

something to improve
1. The algorithm will calculate one triangle twice even if it only swap 
the coordinate of two vertices.

2. Can I find a more efficient way to find the vertices of a triangle?
*/
#include <iostream>
#include <cmath>	//pow()

struct coordinate
{
	int x;
	int y;
};

double lengthcal(const coordinate c1, const coordinate c2);
bool operator==(const coordinate &c1, const coordinate &c2);

const int row = 7;
const int col = 7;

int main()
{	
	using std::cout;
	using std::endl;

	double target = pow(34, 0.5);
	coordinate ptA, ptB, ptC;
	ptA.x = 6; ptA.y = 0;
	
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			ptB.x = i; ptB.y = j;
			
			for (int m = 0; m < row; ++m)
			{
				for (int n = 0; n < col; ++n)
				{
					ptC.x = m; ptC.y = n;

					bool is_triangle = !((ptA == ptB) || (ptB == ptC) || (ptA == ptC));
					if (is_triangle)
					{
						double sideA, sideB, sideC;
						sideA = lengthcal(ptB, ptC);
						sideB = lengthcal(ptA, ptC);
						sideC = lengthcal(ptA, ptB);
						
						bool is_isosceles = ((sideA == sideB) || (sideB == sideC) || (sideA == sideC));
						
						if (is_isosceles)
						{
							bool match = ((sideA == target) || (sideB == target) || sideC == target);
							if (match)
							{
								cout << "AB = " << sideC << " AC = " << sideB << " BC = " << sideA << endl;
								cout << "ptA = " << "(" << ptA.x << ", " << ptA.y << ") ";
								cout << "ptB = " << "(" << ptB.x << ", " << ptB.y << ") ";	
								cout << "ptC = " << "(" << ptC.x << ", " << ptC.y << ") " << endl;
								cout << "--------------------" << endl;								
							}
						}
					}
				}
			}
		}
		
	}
	
	return 0;
}

double lengthcal(coordinate c1, coordinate c2)
{
	return pow(pow((c1.x - c2.x), 2) + pow((c1.y - c2.y), 2), 0.5);
}

bool operator==(const coordinate &c1, const coordinate &c2)
{
	return (c1.x == c2.x) && (c1.y == c2.y);
}