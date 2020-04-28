#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int ny = 100;
	int nx = 200;
	ofstream fOut("outPutImage.ppm");
	fOut << "P3\n" << nx << " " << ny << "\n255\n";
	for (int j = ny - 1; j >= 0; j--)
	{
		for (int i = 0; i < nx; i++)
		{
			float r = float(i) / float(nx);
			float g = float(j) / float(ny);
			float b = 0.2;
			int ir = int(255.99 * r);
			int ig = int(255.99 * g);
			int ib = int(255.99 * b);
			fOut << ir << " " << ig << " " << ib << "\n";
		}
	}
	fOut.close();
	return 0;
}
