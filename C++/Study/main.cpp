#include <iostream>

using namespace std;

int i,j,r,c;

int main()
{
  cout<<"Enter row and column: ";
  cin>>r>>c;
  int mat1[r][c],mat2[r][c],mat3[r][c];

  cout<<"Enter values for Matrix1 : \n";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>mat1[i][j];
    }
  }

  cout<<"Enter values for Matrix2 : \n";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>mat2[i][j];
    }
  }
  
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
  }

  cout<<"The New Matrix is ==> "<<endl;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cout<<" "<<mat3[i][j]<<" ";
    }
    cout<<endl;
  }
}