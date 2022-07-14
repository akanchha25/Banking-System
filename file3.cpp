#include<iostream>
const int MAX_NUMBER_SCORE = 10;
using namespace std;
void fill_array(int a[],int size,int &used_numbers)
{
    cout<<"enter the lists of score up to "<<size<<" non negative whole  number"<<endl;
    cout<<"mark the end of the lists of score with negative numbers ."<<endl;
    int next, index=0;
    cin>>next;
    while(next>=0 && index<=size)
    {
        a[index]=next;
        index++;
        cin>>next;
    }
    used_numbers=index;

}
double compute_avg(const int a[],int used_numbers)
{
    int sum=0;
    for(int i=0; i<used_numbers; i++)
    {
        sum=sum+a[i];
    }
    if(used_numbers>0)
    {
          return (sum/used_numbers);
    }
    else
    {
        cout<<"ERROR "<<endl;
        return 0;

    }

}
void show_difference(const int a[], int used_numbers)
{
    double average=compute_avg( a, used_numbers);

    cout<<"average of "<<used_numbers<<" scores = : "<<average<<endl;
    cout<<" the scores are : "<<endl;
    for(int i=0; i<used_numbers; i++)
    {
        cout<<a[i]<<"differs from average by "<<(a[i]-average)<<endl;
    }
    
}
int main()
{
    int score[MAX_NUMBER_SCORE], used_numbers;
    cout<<"This program will read the lists of score and will shows how much each score differsfrom average score"<<endl;
    cout<<" Now enter the scores "<<endl;
    fill_array(score, MAX_NUMBER_SCORE ,used_numbers);
    show_difference(score, used_numbers);
    return 0;
}