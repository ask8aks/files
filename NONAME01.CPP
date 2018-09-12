#include<iostream.h>
#include<string.h>
#include<conio.h>
class Product{
	char product_name[20];
	long price;
	char category[20];
	int quantity;
	int date_purchase,date_expire;
	      public : void add_data(){
		char ch;
		clrscr();

			cout<<"\nENTER PRODUCT NAME : ";
			cin>>product_name;
			cout<<"\nENTER PRODUCT PRICE : ";
			cin>>price;
			cout<<"\nENTER PRODUCT CATEGORY : ";
			cin>>category;
			cout<<"\nENTER PRODUCT QUANTITY : ";
			cin>>quantity;
			cout<<"\nENTER PRODUCT'S DATE OF PURCHASE : ";
			cin>>date_purchase;
			cout<<"\nENTER PRODUCT'S DATE OF EXPIRATION : ";
			cin>>date_expire;

		}
		public : void show_all_data(){

			cout<<"\nPRODUCT NAME : "<<product_name;
			cout<<"\nPRODUCT PRICE : "<<price;
			cout<<"\nPRODUCT CATEGORY : "<<category;
			cout<<"\nPRODUCT QUANTITY : "<<quantity;
			cout<<"\nPRODUCT PURCHASE DATE : "<<date_expire;
			cout<<"\nPRODUCT EXPIRY DATE : "<<date_purchase<<"\n\n";
			getch();

		}

      };

int main(){
	int i=0;
	Product pr[10];
	char ch;
	do{
	pr[i++].add_data();
	cout<<"WANT TO ENTER MORE PRODUCTS?.....ENTER 'Y'OR 'N'";
	cin>>ch;
	}
	while(ch=='y' || ch=='Y');

	for(int j=0;j<i;j++){
		pr[j].show_all_data();
	}

	return 0;
}