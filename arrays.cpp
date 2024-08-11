#include<iostream>
using namespace std;

class shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(){
        counter=0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void){
    cout<<"Enter the id of your item number"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter the price for your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of itemid "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}

int main(){
    shop dukkan; //dukkan is an object(name of the variable) and shop is the class(created data type)
    dukkan.initcounter();
    int n;
    cout<<"Enter the number of timesyou need to enter price for Items";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        dukkan.setprice();
    }
    dukkan.displayprice();
       
    return 0;
}