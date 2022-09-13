#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main() {
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int e = 0;
  int f = 0;
  int g = 0;
  int h = 0;
  string Entries;

  vector<vector<string>> perfectTrios;
  vector<string> boosting;
  
  int How_many_perfect_trios = 0;

  cin >> How_many_perfect_trios;
  
  for (int i = 0; i < How_many_perfect_trios; i++)
  {
        for (int j = 0; j < How_many_perfect_trios; j++)
        {
          cin >> Entries;
          perfectTrios[i][j].push_back(Entries);
        }    
  }
  
  for (int i = 0; i < perfectTrios.size(); i++)
    {
        for (int j = 0; j < perfectTrios[i].size(); j++)
        {
            cout << perfectTrios[i][j] << " ";
        }    
        cout << endl;
    }
  
  
  return 0;
}