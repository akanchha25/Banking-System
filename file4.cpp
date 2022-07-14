#include<iostream>

using namespace std;

void fill_array(int a[],int size, int &used_num)
{
    int next, index =0;
    cin>>next;
    while((next>=0) &&  (index<size)) 
    {
        a[index]= next;
        index++;
        cin>>next;
    }
    used_num=index;

    
}



int index_of_smallest(const int a[],int startIndex,int used_num)
{
    int min=a[startIndex];
    int index_of_min;
    for(int i=startIndex+1;i<used_num;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            index_of_min=i;
        }
    }
    return index_of_min;
}
void swapValues(int &v1 , int &v2)
{
    int temp;
    temp=v1;
    v1=v2;
    v2=temp;
}
void sort(int a[], int used_num)
{
    int indexOfNextSmallest;
    for(int index=0; index<used_num - 1; index++ )
  {
      indexOfNextSmallest=index_of_smallest(a,index,used_num);
      swapValues(a[index],a[indexOfNextSmallest]);


  }
}
int main()
{
    int sample_array[10], numberused;
    cout<<"This program is for sorting the numbers "<<endl;
    cout<<" enters the lists of numbers you want to sort "<<endl;
    fill_array(sample_array,10,numberused);
    sort(sample_array,numberused);
    cout<<" Here is your sorted lists :"<<endl;
    for(int i=0;i<numberused;i++)
    {
        cout<<sample_array[i]<<"  ";
    }
    return 0;
}