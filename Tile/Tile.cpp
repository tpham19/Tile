#include <iostream>;
using namespace std;

/**
 * Calculates the total cost it would take to cover a tile
 * floor plan of width and height, using a cost entered by the user.
 */

double tilingCost(int width, int height, double tileCost) {
	return width * height * tileCost;
};

int main() {
	int width, height;
	double tileCost;
	cout << "Enter the width and height of the floor separated by a space: ";
	cin >> width;
	cin >> height;
	cout << "Enter the cost of a tile: ";
	cin >> tileCost;
	cout << "Cost for tiling a " << width << " x " << height << " floor is " << tilingCost(width, height, tileCost) << " dollars." << endl;
	return 0;
};

