//Basic 2D computational geometry problems
#include <vector>

//Common data structures which could be used in problems
typedef double coord_t;

///2D point;
struct Point
{
  coord_t x;
  coord_t y;
};

/// Edge is a non-directional segment of line
struct Edge
{
  Point p1;
  Point p2;
};

///Vector2D is a directional segment of line. 
struct Vector2D
{
  Point start;
  Point end;
};

///Polygon is represented by a vector of vertices. 
///Assuming we are using "close" polygon representation i.e. the last point is guaranted to be the same as the first
struct Polygon
{
  std::vector<Point> vertices;
};

//Problem 1:
//Implement a function which tests if two edges intersect

//Problem 2:
//Implement a function which determines a position of point p relative to vector v.
//Possible answers: to the left, on the right, belongs...

//Problem 3:
//Implement a function which tests is point p is inside of polygon p

//Problem 4:
//Implement a function which calculate an polygon area;
