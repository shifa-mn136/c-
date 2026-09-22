#include <iostream>
using namespace std;
int main() {
    string productName,paymentmethod,customername;
    int quantity,cardnumber,date;
    float price, total, discount, finalAmount;
    float card,UPI,cash;
    cout<<"        SHOPING BILL      ";
    cout<<endl;
    cout << "Enter Product Name: ";
    cin >> productName;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price per Item: ";
    cin >> price;

    total = quantity * price;
    if(total>=4000){
    	cout<<"Customer gets discount of 20%:";
    	discount =total*20/100;
    	cout<<discount;
    	cout<<endl;
         finalAmount =total - discount;
         cout<<"The final amout to be payed:";
    	cout<<finalAmount;
    	cout<<endl;
	} else{
		cout<<"Total amount to be payed:";
		cout<<total;
		cout<<endl;
	} 
	cout<<"Enter payment method:";
	cin>>paymentmethod;
	  if(paymentmethod=="card"){
	cout<<"Enter customer name:";
	cin>>customername;
		cout<<"Enter card number:";
		cin>>cardnumber;
		cout<<"Enter the date:";
		cin>>date;
		cout<<"Payment done";
		cout<<endl;
		cout<<"Thanks for visiting";
		
} else if(paymentmethod=="UPI"){
		cout<<"Enter UPI number:";
		cin>>UPI;
		cout<<"Payment done";
		cout<<endl;
		cout<<"Thanks for visiting";
	 }else{
		cout<<"Payment done by cash";
		cout<<endl;
		cout<<"Thanks for visiting";
	}
}
