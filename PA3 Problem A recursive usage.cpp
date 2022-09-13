/*
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std; 

int combine(vector<int> temp, int AllCandies, int sum);

int main() {

  int CandyBag = 0; 
  int Numcandy = 0;
  int AllCandies = 0;
  int sum = 0;

  cin >> CandyBag;

  vector<int> candies;

  for (int i = 0; i < CandyBag; ++i) 
  {
    cin >> Numcandy;
    candies.push_back(Numcandy);
  }
  
  sort(candies.begin(), candies.end(), greater<int>()); // sorts in descending order

  cout << combine(candies, AllCandies, sum) << endl;

  return 0;

}

int combine(vector<int> temp, int AllCandies, int sum) 
{
  if (temp.size() == 1)
  {
    return AllCandies;
  }

  else
  {
    sum = temp.at(temp.size()-1) + temp.at(temp.size()-2); //gets the last two because the last two are always the least numbers
    AllCandies += 2*(sum); 

    temp.pop_back();
    temp.pop_back();
    temp.push_back(sum); //remakes the vector with the new (x+y) value while taking out x and y
    sort(temp.begin(), temp.end(), greater<int>()); // sorts in descending order

    return combine(temp, AllCandies, sum);

  }

}


*/