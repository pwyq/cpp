/*solving
In a 6 * 6 grid, construct all triangles whose vertices are nodes
ont of them is at (3,0). and with the sides of length root5,root29,root32

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

	double target1 = pow(5, 0.5);
	double target2 = pow(29, 0.5);
	double target3 = pow(32, 0.5);
	coordinate ptA, ptB, ptC;
	ptA.x = 3; ptA.y = 0;
	
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
						
						
						bool match = ((sideA == target1) && (sideB == target2) && (sideC == target3)) ||
									 ((sideA == target1) && (sideB == target3) && (sideC == target2)) ||
									 ((sideA == target2) && (sideB == target1) && (sideC == target3)) ||
									 ((sideA == target2) && (sideB == target3) && (sideC == target1)) ||
									 ((sideA == target3) && (sideB == target1) && (sideC == target2)) ||
									 ((sideA == target3) && (sideB == target2) && (sideC == target1));
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