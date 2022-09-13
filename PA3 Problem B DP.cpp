/*
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std; 

vector<vector<int>> item;

vector<int> minusone;

vector<int> weight;

vector<int> value;

int knapsack(int i, int j);

int main() {

  int maxWeight = 0;
  int numItems = 0;
  int input = 0;
  int answer = 0;

  cin >> maxWeight >> numItems;

  for (int j = 0; j < maxWeight; j++)
  {
      minusone.push_back(-1);
  
  }

  for (int i = 0; i < numItems; i++)
  {
    item.push_back(minusone);
  }

  for (int i = 0; i < numItems; i++)
  {
    cin >> input;

    weight.push_back(input);

    cin >> input;

    value.push_back(input);

  }

  answer = knapsack(numItems, maxWeight);

  cout<< answer << endl;


  return 0;

}

int knapsack(int i, int j) 
{
  if(i == 0 || j == 0)
  {
    return 0;
  }

  if(item[i-1][j-1] != -1)
  {
    return item[i-1][j-1];
  }

  int best = knapsack(i-1,j);

  if (j >= weight[i-1])
  {
    best = max(best, knapsack(i-1, j-weight[i-1]) + value[i-1]);
  }

  
  return item[i-1][j-1] = best;

}

*/
