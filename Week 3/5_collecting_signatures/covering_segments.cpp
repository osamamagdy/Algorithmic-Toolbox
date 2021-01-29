/*
#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>
#include <queue>
using namespace std;
using std::vector;

struct Segment {
	int start, end;
};


// We use this bool function to sort our vector according to specific number in the struct
// This works like operator overloading with sort() function in <algorithm>
// It means that the sorting between two numbers will happen if the first parameter a applies the condition we give it to
// if b.end < a.end this will give us false which means that b should be before a
bool Comparebyendings(const Segment& a, const Segment& b)
{
	return a.end < b.end;
}


/////////////// To fully understand this solution try first to solve this puzzle
/////////////// URL : http://dm.compsciclub.ru/app/quiz-touch-all-segments 
/////////////// press : sort by left (this is the same algorithm i use)


vector<int> optimal_points(vector<Segment>& segments) {
	vector<int> points;
	//Sort segments according to their endings points
	sort(segments.begin(), segments.end(), Comparebyendings);

	//Start with the first ending point
	int i = 0;

	//The current ending point
	int last;
	while (i < segments.size())
	{
		//Update the current ending point we reached 
		last = segments[i].end;

		//As long as the segment starting point is less the the current ending point 
		//Move to the next segment
		//There is no chance of finding a segment starts before the ending point after this loop
		//As this algorithm works on the first ending (and they're all sorted) , so if there is any segment that starts before this ending
		// It must end after the current segment, which means you'll find it in segments[i+1]
		while ((i < segments.size()) && (segments[i].start <= last))
		{
			i++;
		}
		points.push_back(last);

	}
	return points;
}

int main() {
	int n;
	std::cin >> n;
	vector<Segment> segments(n);
	for (size_t i = 0; i < segments.size(); ++i) {
		std::cin >> segments[i].start >> segments[i].end;
	}
	vector<int> points = optimal_points(segments);
	std::cout << points.size() << "\n";
	for (size_t i = 0; i < points.size(); ++i) {
		std::cout << points[i] << " ";
	}
}
*/