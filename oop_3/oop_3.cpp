#include <iostream>
#include "Triangle.h"

#define MAX 4

using namespace std;

void sort_ascending(Triangle*);
void PrintTriangle(Triangle);

int main() 
{
    setlocale(LC_CTYPE, "ukr");
    Triangle pr[MAX];
    cin >> pr[0];
    cin >> pr[1];
    cin >> pr[2];
    cin >> pr[3];
    sort_ascending(pr);
    for (int i = 0; i < MAX;i++) 
    { 
        cout << pr[i] << "Area = " << pr[i].Area() << endl;
    }  
    pr[0] += 2;
    pr[1] += 2;
    pr[2] += 2;
    pr[3] += 2;
    for (int i = 0; i < MAX;i++) 
    { 
        cout << pr[i] << "Area = " << pr[i].Area() << endl;
    } 
}

void sort_ascending(Triangle* pr)
{ 
    for (int i = 0; i < MAX - 1; ++i) 
    { 
        int min = i; 
        for (int j = i + 1; j < MAX; ++j) 
        { 
            if (pr[j] < pr[min])
                min = j; 
        } 
        swap(pr[i], pr[min]); 
    } 
}

void PrintTriangle(Triangle obj)
{
    cout << "1st side: " << obj.GetA() << " 2nd side: " << obj.GetB()<<"3rd side:"<<obj.GetC();
    cout << " Perimeter: " << obj.Perimeter() << " Area: " << obj.Area() << endl; 
}
