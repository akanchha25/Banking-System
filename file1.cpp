#include <iostream>
const int plant_number= 5;
using namespace std;

int main()
{
  int production [plant_number], last_plant = plant_number;
for(int plant_num=1; plant_num<=last_plant; plant_num ++)
{
  int depart;
  cout<<"enter the different no. of department in plant number "<<plant_num<<endl;
  cin>>depart;
  int plant[depart];
  cout<<" enter the diffrent no, of production number in different department of plant number "<<plant_num<<endl;
   for(int i=0; i<depart; i++)
   {
     cout<<" for department "<<(1+i)<<" : ";
     cin>>plant[i];
   }
   {
     int sum = 0;
     for(int i=0;i<depart; i++)
     {
       sum= plant[i]+sum;
     }
     production[plant_num - 1]=sum;
   }
}

for(int i=0; i<last_plant; i++)
{
  cout<<" "<<endl;
  cout<<production[i] <<endl;
}



return 0;
}
