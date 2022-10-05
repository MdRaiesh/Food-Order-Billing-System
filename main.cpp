#include <iostream>
using namespace std;
int main()
{
    int return_total_bill(void);
    int total_bill=return_total_bill();
    cout<<"Your total bill amount is Rs. "<<total_bill<<endl;
    cout<<"Your order will be delivered in 40 minutes. "<<endl;
    cout<<"Thank you for ordering from MD Fast Food ! "<<endl;
}
int return_total_bill()
{
    char c;
    char item;
    char veg_item;
    char non_veg_item;
    int bill_amount=0;
    char select_again;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to MD Fast Food~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~Please follow the instructions to order your food~~~~~~~~~~~~~~~~"<<endl;
    cout<<"1 : Please press 's' to start your order"<<endl;
    cout<<"2 : You can select both Veg & NonVeg items according to your choice"<<endl;
    cout<<"3 : Please press 'a' to select Veg items"<<endl;
    cout<<"4 : Please press 'b' to select NonVeg items"<<endl;
    cout<<"5 : After placing order, you can see your final Bill Report"<<endl;
    start:
    cin>>c;
    if(c=='s'||c=='S')
    {
        items:
        cout<<"Please select your choice"<<endl;
        cout<<"(a) Veg Items              (b) Non Veg Items"<<endl;
        cin>>item;
        if(item=='a'||item=='A')
        {
            veg_item_list:
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;
            cout<<"(1) Paneer : Price - Rs. 100"<<endl;
            cout<<"(2) Burger : Price - Rs. 40"<<endl;
            cout<<"(3) Pizza : Price - Rs. 45"<<endl;
            cout<<"(4) Maggie : Price - Rs. 35"<<endl;
            cout<<"(5) Chowmein : Price - Rs. 50"<<endl;
            cin>>veg_item;
            if(veg_item == '1')
            {
                bill_amount=bill_amount+100;
            }
            else if(veg_item == '2')
            {
                bill_amount=bill_amount+40;
            }
            else if(veg_item == '3')
            {
                bill_amount=bill_amount+45;
            }
            else if(veg_item == '4')
            {
                bill_amount=bill_amount+35;
            }
            else if(veg_item == '5')
            {
                bill_amount=bill_amount+50;
            }
            else
            {
                cout<<"You have entered wrong value, please try again"<<endl;
                goto veg_item_list;
            }
            cout<<"Do you want to add more items ? press 'y' for Yes and 'n' for 'No'"<<endl;
            cin>>select_again;
            if(select_again=='y')
            {
                goto items;
            }
            else
            {
                return bill_amount;
            }
        }
        else if(item=='b'||item=='B')
        {
            non_veg_item_list:
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;
            cout<<"(1) Chicken Curry : Price - Rs. 60"<<endl;
            cout<<"(2) Egg Roll : Price - Rs. 45"<<endl;
            cout<<"(3) Chicken Biryani : Price - Rs. 50"<<endl;
            cout<<"(4) Mutton Curry : Price - Rs. 80"<<endl;
            cout<<"(5) Chicken Kabab : Price - Rs. 30"<<endl;
            cin>>non_veg_item;
            if(non_veg_item == '1')
            {
                bill_amount=bill_amount+60;
            }
            else if(non_veg_item == '2')
            {
                bill_amount=bill_amount+45;
            }
            else if(non_veg_item == '3')
            {
                bill_amount=bill_amount+50;
            }
            else if(non_veg_item == '4')
            {
                bill_amount=bill_amount+80;
            }
            else if(non_veg_item == '5')
            {
                bill_amount=bill_amount+30;
            }
            else
            {
                cout<<"You have entered wrong value, please try again"<<endl;
                goto non_veg_item_list;
            }
            cout<<"Do you want to add more items ? press 'y' for Yes and 'n' for 'No'"<<endl;
            cin>>select_again;
            if(select_again=='y')
            {
                goto items;
            }
            else
            {
                return bill_amount;
            } 
        }
        else
        {
            cout<<"You have entered wrong value, please try again"<<endl;
            goto items;
        }
    }
    else
    {
        cout<<"You have entered wrong value, please press 's' to start your order"<<endl;
        goto start;
    }
    return bill_amount;
}