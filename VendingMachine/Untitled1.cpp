#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;



class product{
	private:

	float price;
	
	public:
	string name;
	int stock;
	void setprice (int p) {price=p;}
	int getprice () {return price;}

	
}p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,produto_escolhido;

void init(){
	p1.name="Snickers";
	p1.setprice(115);
	p1.stock=2;
	
	p2.name="Doritos";
	p2.setprice(119);
	p2.stock=2;
	
	p3.name="Pringles";
	p3.setprice(269);
	p3.stock=2;
	
	p4.name="Kit Kat";
	p4.setprice(130);
	p4.stock=2;
	
	p5.name="Coca-Cola";
	p5.setprice(100);
	p5.stock=2;
	
	p6.name="Pepsi";
	p6.setprice(90);
	p6.stock=2;
	
	p7.name="Sprite";
	p7.setprice(100);
	p7.stock=2;
	
	p8.name="Fanta";
	p8.setprice(100);
	p8.stock=2;
	
	p9.name="Dr. Pepper";
	p9.setprice(100);
	p9.stock=2;
	
	p10.name="Lays";
	p10.setprice(259);
	p10.stock=2;
	
	p11.name="Ruffles";
	p11.setprice(139);
	p11.stock=2;
	
	p12.name="Oreo";
	p12.setprice(179);
	p12.stock=2;
	
	p13.name="M&Ms";
	p13.setprice(245);
	p13.stock=2;
	
	p14.name="Gatorade";
	p14.setprice(139);
	p14.stock=2;
	
	p15.name="Arizona";
	p15.setprice(130);
	p15.stock=2;
	
	p16.name="Monster Energy";
	p16.setprice(179);
	p16.stock=2;
	
	p17.name="Red Bull";
	p17.setprice(200);
	p17.stock=2;
	
	p18.name="Kinder Bueno";
	p18.setprice(180);
	p18.stock=2;
	
	
};

float centimos_euros (float cent){
	float euros = cent/100;
	
	return euros;
	
};


void coins(float change) {
    int coinsCount[8] = {0};  
    int denominations[] = {200, 100, 50, 20, 10, 5, 2, 1};
    const char* coinNames[] = {"2 euros", "1 euro", "50 cents", "20 cents", "10 cents", "5 cents", "2 cents", "1 cent"};

    for (int i = 0; i < 8; ++i) {
        int coins = change / denominations[i];
        coinsCount[i] = coins;
        change -= coins * denominations[i];
    }

    cout << "\n\nCoins to be returned:" <<endl;
    for (int i = 0; i < 8; ++i) {
        if (coinsCount[i] > 0) {
            cout << coinsCount[i] << " coin(s) of " << coinNames[i] <<endl;
        }
    }
};

int main ()
{
	int ordercode,quantity,moedas[8];
	char yesno, next;
	string order,icon;
	float money = 0, pay, pay_euros, pay_centimos, change;
	
	
	init();
	icon [1] = 16;
	
	do
	{
		system("cls");
		cout<<"\n\n  Welcome " <<icon[1];
		cout<<"             \n\n\n         MENU ";
		cout<<"\n\n     1.  "<<p1.name<<" - "<<centimos_euros(p1.getprice ())<<" euros  \t  2.  "<<p2.name<<" - "<<centimos_euros(p2.getprice ())<<" euros  \t  3.  "<<p3.name<<" - "<<centimos_euros(p3.getprice ())<<" euros";
		cout<<"\n\n     4.  "<<p4.name<<" - "<<centimos_euros(p4.getprice ())<<" euros  \t  5.  "<<p5.name<<" - "<<centimos_euros(p5.getprice ())<<" euros  \t  6.  "<<p6.name<<" - "<<centimos_euros(p6.getprice ())<<" euros";
		cout<<"\n\n     7.  "<<p7.name<<" - "<<centimos_euros(p7.getprice ())<<" euros  \t  8.  "<<p8.name<<" - "<<centimos_euros(p8.getprice ())<<" euros  \t  9.  "<<p9.name<<" - "<<centimos_euros(p9.getprice ())<<" euros";
		cout<<"\n\n     10. "<<p10.name<<" - "<<centimos_euros(p10.getprice ())<<" euros  \t  11. "<<p11.name<<" - "<<centimos_euros(p11.getprice ())<<" euros  \t  12. "<<p12.name<<" - "<<centimos_euros(p12.getprice ())<<" euros";
		cout<<"\n\n     13. "<<p13.name<<" - "<<centimos_euros(p13.getprice ())<<" euros  \t  14. "<<p14.name<<" - "<<centimos_euros(p14.getprice ())<<" euros  \t  15. "<<p15.name<<" - "<<centimos_euros(p15.getprice ())<<" euros";
		cout<<"\n\n     16. "<<p16.name<<" - "<<centimos_euros(p16.getprice ())<<" euros  \t  17. "<<p17.name<<" - "<<centimos_euros(p17.getprice ())<<" euros  \t  18. "<<p18.name<<" - "<<centimos_euros(p18.getprice ())<<" euros";
		
		pay=0;
		cout<< "\n\n\n"  <<icon[1] << "Choose your order (1-18): ";
		cin>>ordercode;
		
		
		cout<< "\n" <<icon[1] << " Please Enter quantity: ";
		cin>>quantity;
		
		do {
			if (pay!=0){
				if (pay==100){
					cout<< "\nTotal: "<<pay/100 <<" euro.";
				}else{
					cout<< "\nTotal: "<<pay/100 <<" euros.";
				}
				
			}
			
			cout<< "\n\n"<<icon[1] <<"Insert coin in euros  (0 to continue)    : ";
			cin>> pay_euros;
			
			
			if (pay_euros==1 || pay_euros==2){
				pay+=pay_euros*100;
			}else if (pay_euros==0){
				next='y';
			}else {
				cout<<"Value not accepted";
			}
		} while (next != 'y');
		
		next='n';
		
		do {
			if (pay!=0){
				if (pay==100){
					cout<< "\nTotal: "<<pay/100 <<" euro.";
				}else{
					cout<< "\nTotal: "<<pay/100 <<" euros.";
				}
				
			}
			cout<< "\n\n"<<icon[1] <<"Insert coin in centimos (0 to continue)    :";
			cin>> pay_centimos;
			if (pay_centimos==1 || pay_centimos==2 || pay_centimos==5 || pay_centimos==10 || pay_centimos==20 || pay_centimos==50){
				pay+=pay_centimos;
			}else if (pay_centimos==0){
				next='y';
			}else {
				cout<<"Value not accepted";
			}
		} while (next != 'y');
		
		next='n';

		product* ptrSelecionado;
		
		switch (ordercode)
		{
			case 1:
				order = "Snickers      ";
				money = quantity * p1.getprice ();
				ptrSelecionado = &p1;
				
				break;
			case 2:
				order = "Doritos       ";
				money = quantity * p2.getprice ();
				
				ptrSelecionado = &p2;
				break;
			case 3:
				order = "Kit Kat       ";
				money = quantity * p3.getprice ();
			
				ptrSelecionado = &p3;
				break;
			case 4:
				order = "Pringles      ";
				money = quantity * p4.getprice ();
				ptrSelecionado = &p4;
				break;
			case 5:
				order = "Coca-Cola     ";
				money = quantity * p5.getprice ();
				ptrSelecionado = &p5;
				break;
			case 6:
				order = "Pepsi         ";
				money = quantity * p6.getprice ();
				ptrSelecionado = &p6;
				break;
			case 7:
				order = "Sprite        ";
				money = quantity * p7.getprice ();
				ptrSelecionado = &p7;
				break;
			case 8:
				order = "Fanta         ";
				money = quantity * p8.getprice ();
				ptrSelecionado = &p8;
				break;
			case 9:
				order = "Dr. Pepper    ";
				money = quantity * p9.getprice ();
				ptrSelecionado = &p9;
				break;
			case 10:
				order = "Lays          ";
				money = quantity * p10.getprice ();
				ptrSelecionado = &p10;
				break;
			case 11:
				order = "Ruffles       ";
				money = quantity * p11.getprice ();
				ptrSelecionado = &p11;
				break;
			case 12:
				order = "Oreo          ";
				money = quantity * p12.getprice ();
				ptrSelecionado = &p12;
				break;
			case 13:
				order = "M&M's         ";
				money = quantity * p13.getprice ();
				ptrSelecionado = &p13;
				break;
			case 14:
				order = "Gatorade      ";
				money = quantity * p14.getprice ();
				ptrSelecionado = &p14;
				break;
			case 15:
				order = "Arizona       ";
				money = quantity * p15.getprice ();
				ptrSelecionado = &p15;
				break;
			case 16:
				order = "Monster Energy";
				money = quantity * p16.getprice ();
				ptrSelecionado = &p16;
				break;
			case 17:
				order = "Red Bull      ";
				money = quantity * p17.getprice ();
				ptrSelecionado = &p17;
				break;
			case 18:
				order = "Kinder Bueno  ";
				money = quantity * p18.getprice ();
				ptrSelecionado = &p18;
				break;
			default:
				cout<<" Invalid Input, please try again";
				break;
		}
	if (pay < money)
	{
		cout<< "\n Sorry, you have not enought money to proceed this transaction. ";
		cout<< "       We have returned you "<<pay/100<<"euro(s)"<<endl;
		coins(pay);
	}else if (ptrSelecionado->stock < quantity){
		cout<< "\nSorry, not exist stock to proceed this transaction. ";
		cout<< "       We have returned you "<<pay/100<<"euro(s)"<<endl;
		coins(pay);
	}else{
		
		ptrSelecionado->stock-=quantity;
		cout << "\n\nYour order     : ";
		cout << quantity << "pcs - " <<ptrSelecionado->name<<endl;
		
		cout << "Stock  atual   : ";
		cout <<  ptrSelecionado->stock <<" - "<<ptrSelecionado->name<<endl;
		
		cout<< "Total amount       : " << centimos_euros (money) << "euros \n";
		
		change = pay - money;
		cout<<  "Troco       : " <<centimos_euros (change);
		
		coins(change);
		
	
	}
	cout << "\n\n" <<icon[1] <<"Do you want to order again) (y/n): ";
	cin >>yesno;
		 
	}
	while (yesno == 'Y' || yesno == 'y');
	cout<<"\n\n Bye!";
	
}


