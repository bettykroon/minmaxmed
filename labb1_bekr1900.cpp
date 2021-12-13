/*
Betty Kroon
2020-02-05
Introduktion till programmering
Laboration 1
*/

#include <iostream>

using namespace std;

int main()
{
    int min = 0;
    int max = 0;
    int i = 0;
    int medel;
    double sum;
    int input;

    while(cin >> input)
    {
        i ++;
        sum += input;

        if(i == 1)
        {
            max = input;
            min = input;
        }
        if(input > max)
        {
            max = input;
        }
        if(input < min)
        {
            min = input;
        }
    }
    cout<<"maxvärdet är: "<< max << endl;
    cout<<"minvärdet är: "<< min << endl;
    cout<<"medelvärdet är: "<< sum / i << endl;
    cout<< "antal inmatningar: " << i << endl;
    
    return 0;
}