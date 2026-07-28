#include <bits/stdc++.h>
using namespace std;

class ecommerce
{
    private:
     int id;
     string name;
     string manufacturer;
     int price;
     int rating;
    public:
     void getdata()
     {
        cout << "Name of product :";
        cin >> name;
        cout << "ID of product :";
        cin >> id;
        cout << "Price of product :";
        cin >> price;
        cout << "Manufacturer of product :";
        cin >> manufacturer;
        cout << "Rating of product :";
        cin >> rating;
     }

     void display(ecommerce shop[],int n)
     {
        cout << "\tProduct detail\n";
        cout<< "ID\tName\tPrice\tManufacturer\tRating\n";
        cout<<"---------------------------------------------\n";
       
        for (int i=0;i<n;i++)
        {
            cout<< shop[i].id<<"\t"<<shop[i].name<<"\t"<<shop[i].price<<"\t"<<shop[i].manufacturer<<"\t\t"<<shop[i].rating<<endl;
        }
     }

     void Bubblesort(ecommerce shop[],int n)
     {
        for(int i=0;i<n-1;i++)
        {
         for(int j=0;j<n-i-1;j++)
          {
            if(shop[j].id > shop[j+1].id)
            {
                swap(shop[j],shop[j+1]);
            }
          }
        }
     }

     void Insertionsort(ecommerce shop[],int n)
     {
        for(int i=1;i < n;i++)
        {
            ecommerce temp = shop[i];
            int j=i-1;
            while(j>=0 && shop[j].rating > temp.rating)
            {
                shop[j+1] = shop[j];
                j--;
            }
            shop[j+1] = temp;
        }
     }

     void Selectionsort(ecommerce shop[],int n)
     {
        for (int i=0;i<n-1;i++)
        {
            ecommerce min=shop[i];
            for(int j = i+1;j<n;j++)
            {
                if(min.price > shop[j].price)
                {
                    swap(shop[i],shop[j]);
                }
            }

        }
     }

};

int main()
{
    int n,k,t;
    cout << "Enter the number of product:";
    cin >> n;
    ecommerce shop[n];
    cout << "Enter the product detail:"<<endl;
    for(int i=0;i<n;i++)
     {
        shop[i].getdata();
     }
    shop[0].display(shop,n);
    do
     {
        cout << "1.Bubble sort\n2.Insertion sort\n3.Selection sort\nEnter the choice code:";
        cin >> k;
        switch(k)
        {
            case 1:
            {
                shop[0].Bubblesort(shop,n);
                cout << "After bubble sort:\n";
                shop[0].display(shop,n);
                break;
            }

            case 2:
            {
                shop[0].Insertionsort(shop,n);
                cout << "After Insertion sort:\n";
                shop[0].display(shop,n);
                break;
            }

            case 3:
            {
                shop[0].Selectionsort(shop,n);
                shop[0].display(shop,n);
                break;
            }

            default:
            {
                cout << "Invalide Choice !!";
                break;
            }
        }
        cout << "Press 1 to perform again :";
        cin >> t;
    }while(t ==1 );
    
  
   
}