/*
#include <iostream>
#include <vector>
#include <climits>   
using namespace std; 

int Dijsktra(vector<vector<int>> Matrix, int size);
int minDist(vector<int> length, vector<bool> visited, int size);

int main() {
 
  ios_base::sync_with_stdio(false); //speeds up execution time
  int input1;
  int input2;
  int start;
  int destination;
  int value;
  int vertex1;
  int vertex2;

  cin >> input1 >> input2; 

  vector<vector<int>> Matrix(input1, vector<int> (input1, 0)); // initialize a input1 x input1 matrix with 0's
  
  for (int i = 0; i < input2; i++)
  {
    cin >> vertex1 >> vertex2 >> value;
    Matrix[vertex1][vertex2] = value;
    Matrix[vertex2][vertex1] = value;
  }
  
  cout << Dijsktra(Matrix, input1) << endl;
 
  return 0;
 
}

int Dijsktra(vector<vector<int>> Matrix, int size)
{
  int sum = 0;
  vector<int> length(size, INT_MAX); // vector to hold the path lengths
  vector<bool> visited(size, false); // is vector visisted?
  vector<int> MST(size);

  length[0] = 0; // length from start to start is 0
  MST[0] = -1;

  for(int i = 0; i<size; i++)                           
	{
		int m = minDist(length, visited, size);  
		visited[m]=true; 
		for(int i = 0; i<size; i++)                  
		{
			if (Matrix[m][i] && visited[i] == false && Matrix[m][i] < length[i])
                MST[i] = m, length[i] = Matrix[m][i];
		}
	}

  //^ taken from https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/
  for( int i = 0; i < size; i++)
  {
    sum += length[i];

  }

  return sum;
}

int minDist(vector<int> length, vector<bool> visited, int size)
{
  int min=INT_MAX,index;

  for(int i=0;i<size;i++) 
	{
		if(visited[i]==false && length[i]<=min)      
		{
			min=length[i];
			index=i;
		}
	}
	return index;
}
*/