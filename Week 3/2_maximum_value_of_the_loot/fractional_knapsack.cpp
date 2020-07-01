#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
using namespace std;
using std::vector;


//the cost of sorting is O(log(n))
//in the worst case, the cost of (sort + knapsack) is O(nlog(n))
double get_optimal_value(int capacity, vector<int> weights, vector<int> values) 
{
  double value = 0.0;

  vector <pair<double,int> >trial;
      for (int i=0; i< weights.size(); i++) 
      {
        trial.push_back( make_pair((double)values[i]/weights[i],weights[i]) );
      }
      sort (trial.begin(),trial.end());

      for (int i=0; i< weights.size(); i++) 
        trial[i].first = trial[i].first * trial[i].second;


 
	int j = trial.size() - 1;
    while(j!=-1 || capacity !=0)
    {

      if(capacity >= trial[j].second) //capacity > weight ==> take the whole weight with its value
      {
        capacity -= trial[j].second;
        value += trial[j].first;

      }
      else
      {
        value += trial[j].first*((double)capacity/trial[j].second);
        capacity=0;
		break;
      }
	  j--;
    }

  return value;
}

int main() {
  int n; //number of items
  int capacity; //capacity of knapsack
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }
//Output the maximal value of fractions of items that fit into the knapsack
  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
