#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::cin;
using std::cout;
using std::vector;
//using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
	// write your code here
	//950 400 4 ==>200 375 550 750  //500 200 4 100 200 300 400
	int count = 0;
	int last = 0;
	sort(stops.begin(), stops.end());
	for (int i = 0; i < stops.size() ; i++)
	{
		if (i != stops.size() - 1)
		{
			if (stops[i] - last <= tank && stops[i + 1] - last > tank)
			{
				last = stops[i];
				//cout << last <<"\n";
				count++;
			}
			else if (stops[i] - last > tank)
			{
				return -1;
			}
		}
		else
		{
			if (dist - last > tank && stops[i] - last <= tank && dist -stops[i] <= tank)
			{
				last = stops[i];
				//cout << last <<"\n";
				count++;
			}
			if (dist - stops[i] > tank)
			{
				return -1;
			}
		}
	}
	return count;
}


int main() {
	int d = 0; //the distance between your home city and the other city
	cin >> d;
	int m = 0; //the distance that car kan travel by a full tank
	cin >> m;
	int n = 0; //number of stops
	cin >> n;

	vector<int> stops(n);
	for (size_t i = 0; i < n; ++i)
		cin >> stops.at(i);

	cout << compute_min_refills(d, m, stops) << "\n";
	return 0;
}
