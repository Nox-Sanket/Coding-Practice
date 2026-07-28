/*
for finding one iteam
*/
#include <iostream>
using namespace std;

class linear
 {
    public:
    display(arr1[],arr2[],string s)
    {
        for (int i= 0;i<4;i++)
        {
            if (s == arr1[i])
            {
                cout << "Price of item is :"<<arr2[i];
            }
        }
    }
 };

 int main()
 {
    string ch[]= {'milk','bread','orange','vegtable'};
    int bill[] = {12,23,43,54};
    linear l;
    cout << "Enter the name to find the price :";
    string name;
    cin >> name;
    l.display(ch[],bill[],name);
 }
