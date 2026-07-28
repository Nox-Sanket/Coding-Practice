#include <iostream>
using namespace std;

class Grociries
{
    private:
    static const int  max = 100;
    string name;
    string item[max];
    int price[max];
    int size;

    public:
    void getdata()
    {
        cout << "Enter the name of customer:";
        cin >> name;
        cout << "Enter the number of items:";
        cin >> size;
        cout << "Enter the details of items:";
        for(int j=0;j<size;j++)
        {
            cout <<"Name of item"<<j+1<<":";
            cin >> item[j];
            cout <<"Name of item"<<j+1<<":";
            cin >> price[j];
        }
    }

};

int main()
{
    int num;
    cout << "Enter the number of customer :";
    cin >> num;
    Grociries obj[num];
    for(int i=0;i<num;i++)
     {
        Grociries obj[i];
     }

}