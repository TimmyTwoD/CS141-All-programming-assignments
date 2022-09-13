/*
#include <iostream>
#include <vector>
#include <algorithm> 
 
using namespace std; 
 
int EditDistance(int i, int j, vector<vector<int>> &table);
 
vector<int> a;
vector<int> b;
int cost = 0;
 
int main() {
 
  int NumEntries = 0;
  int NumEntries2 = 0;
  int input = 0;
  
 
  cin >> NumEntries >> NumEntries2;
 
  for (int i = 0; i < NumEntries; ++i) 
  {
    cin >> input;
    a.push_back(input);
  }
 
  for (int i = 0; i < NumEntries2; ++i) 
  {
    cin >> input;
    b.push_back(input);
  }
 
  int i = a.size() -1;
  int j = b.size() -1;
  
  vector<int> store (b.size()+1, -1);
  vector<vector<int>> table (a.size()+1, store);

  cout << EditDistance(i, j, table) << endl;
 
  return 0;
 
}
 
int EditDistance(int i,int j, vector<vector<int>> &table)
{
  
  if(i == -1 || j == -1)
  {
    
    if (j > -1)
    {
      return (EditDistance(i, j-1, table) + b[j]);
    }
 
    if (i > -1)
    {
      return EditDistance(i-1, j, table) + a[i];
    }
    
    return 0;
 
  }
  
  if(table[i][j] != -1)
  {
    return table[i][j];
  }
  
 
  if (a[i] == b[j]) 
  {
    table[i][j] = EditDistance(i-1, j-1, table);
  }
 
  else
  {
    
    table[i][j] = min
    ( 
      (EditDistance(i-1, j-1,table) + abs(a[i]-b[j])), 
      min((EditDistance(i-1, j, table) + a[i])  , (EditDistance(i, j-1,table) + b[j]))
    );
 
  }
 
  return table[i][j];
 
}
*/