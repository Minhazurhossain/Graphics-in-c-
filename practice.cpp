#include <iostream>
using namespace std;

int main()
{
  int msg[2][2]={11,12,13,24};
  int det= ((msg[0][0] * msg[1][1]) -(msg[0][1] * msg[1][0]));
  cout<<det<<endl;
  int x=1;
  while(108*x % 26!=1)
  {
      x=x+1;

  }
  cout<<x<<endl;




	return 0;
}
