#include<iostream>
using namespace std;
const int m=50;
class item
{
    int itemcode[m];
    float itemprice[m];
    int Count;
public:
    void cnt(){Count = 0;}
    void getitem();
    void displayitem();
    void removeitem();
};
void item :: getitem()
{
    cout<<"enter item code:";
    cin>>itemcode[Count];
    cout<<"enter item cost:";
    cin>>itemprice[Count];
    Count++;
}

void item :: displayitem()
{
    cout<<"code    price\n";
    for(int i;i<Count;i++)
    {
        cout<<itemcode[i]<<"    "<<itemprice[i]<<endl;
    }
}
void item :: removeitem()
{
    int a;
    cout<<"enter item code :";
    cin>>a;
    for(int i;i<Count;i++)
    {
        if(itemcode[i]==a)
            itemprice[i]=0;
    }
}
int main()
{
    item order;
    order.cnt();
    int x;
    do{
            cout<<"enter appropriate number "<<endl;
            cout<<"1.add an item\n"
            "2.delete an item\n"
            "3.display all item\n"
            "4.exit\n";
            cout<<"what is your option?";
            cin>>x;
            switch(x)
            {
                case 1:order.getitem();break;
                case 2:order.removeitem();break;
                case 3:order.displayitem();break;
                case 4:break;
            }
    }while(x!=4);

    return 0;
}
