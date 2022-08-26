// C++ Implementation of Quad Tree
#include "quad.hpp"
#include <iostream>
using namespace std;
using namespace quad_tree;

// Driver program
int main()
{
	Quad center(Point(0, 0), Point(8, 8));
	Node a(Point(1, 1), 1);
	Node b(Point(2, 5), 2);
	Node c(Point(7, 6), 3);
	center.insert(&a);
	center.insert(&b);
	center.insert(&c);
	cout << "Node a: " << center.search(Point(1, 1))->data
		<< "\n";
	cout << "Node b: " << center.search(Point(2, 5))->data
		<< "\n";
	cout << "Node c: " << center.search(Point(7, 6))->data
		<< "\n";
	cout << "Non-existing node: "
		<< center.search(Point(5, 5));
	return 0;
}
