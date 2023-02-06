#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// Functions

void create();
void menu();
void sub_menu(int, string);
void bill(string, int);
void receipt();

// Global Variables

int num1, num2, num3, num4;
string crat[5], names[50];
int prices[50], count = 0;

bool CheckWord(char* filename, char* search)
 {
   int offset; 
   string line;
  ifstream Myfile;
   Myfile.open (filename);

  if (Myfile.is_open())
   {
      while (!Myfile.eof())
      {
    	getline(Myfile,line);
    	if ((offset = line.find(search, 0)) != string::npos) 
        {
        	Myfile.close();
        	return true;
		}
      }
      Myfile.close();
 }
 else
    cout << "Unable to open this file." << endl;
  return false;
 }

int main(){
	
	int slct;
	
	do{
		
		h:
		cout<<"1). Login Account \n2). Create Account \n3). End program \n\nChoose any one: ";
		cin>>slct;
		system("CLS");
		
		if(slct == 1){
		 
			string username, pass;
			
			cout<<" Username: ";
			cin>>username;
		
			cout<<"\n Password: ";
			cin>>pass;
			
			bool userExists = CheckWord("create.txt", const_cast<char*>(username.c_str()));
			bool passExists = CheckWord("create.txt", const_cast<char*>(pass.c_str()));
			
			system("CLS");
			if((userExists && passExists) || (username == "user" && pass == "1234" || username == crat[0] && pass == crat[4]))
			{
				menu();
				break;
			}
			else{
				cout<<"Invalid credentials id\n\n";
			}
		}
	
		else if(slct == 2){	
			
			create();
			system("CLS");
			goto h;
		}
		else if (slct == 3){
		
			cout<<"program ended\n";
		}
	
		else{
			cout<<"Choose correct Option\n\n";
		}	
		
	}while (slct != 3);
	cin.get();
	return 0;
}

void create(){
	//opening a file named create.txt in append mode
	ofstream out("create.txt", ios_base::app);
	
	cout<<"Enter your Name: ";
	cin>>crat[0];
	out<<"Name: "<<crat[0] <<endl;
	
	cout<<"Enter your Last Name: ";
	cin>>crat[1];
	out<<"Last Name: "<<crat[1] <<endl;
	
	cout<<"Enter your Number: ";
	cin>>crat[2];
	out<<"Number: "<<crat[2] <<endl;
	
	cout<<"Enter your Email: ";
	cin>>crat[3];
	out<<"Email: "<<crat[3] <<endl;
	
	cout<<"Enter your Password: ";
	cin>>crat[4];
	out<<"Pass: "<<crat[4] <<endl;
	
	out<<"\n\n-------------------------------\n\n";
	out.close();
	//file closed
	
}

void menu(){
	
	do{
		cout<<"     Stock     \n\n1) T-shirts and Shirts. \n2) Jeans. \n3) Shoes. \n4) Jewelery. \n5) Dresses. \n6) Proceed To billing. \n7) Employees.  \n\nChoose any one Category with Number: ";
		cin>>num1;
	
		system("CLS");
	 
		if(num1 == 1){
	
			A:
				
			cout<<"1) Shirt. \n2) T shirt. \n\nChoose any one: ";
			cin>>num2;	
		
			system("CLS");
				
			int prce[2]	= {1000, 900};
			string nme[2] = {"Shirt", "T shirt"};
		
			if(num2 >= 3 || num2 == 0){
				cout<<"Choose correct option\n\n";
				goto A;
				//Goto cons are used to move back to a certain point in code to let the compiler know where to continue from
			}
				
			sub_menu(prce[num2-1], nme[num2-1]);
	
			break;
		}
		
		else if(num1 == 2){	
				
			B:
				
			cout<<"1) Narrow. \n2) Ripped. \n3) Mid-rise. \n4) Wide-leg. \n5) Skinny-fit.\n\nChoose any one: ";
			cin>>num2;
			cout<<"\n\n";	
		
			system("CLS");
				
			int prce[5]	= {1600, 1900, 1800, 1200, 2000};	
			string nme[5] = {"Narrow", "Ripped", "Mid-Rise", "Wide-leg", "Skinny-fit"};
		
			if(num2 >= 6 || num2 == 0){
				cout<<"Choose correct option\n\n";
				goto B;
			}
				
			sub_menu(prce[num2-1], nme[num2-1]);	

			break;				
		}
		
		else if(num1 == 3){
			
			C:
			
			cout<<"1) Sneakers. \n2) Joggers. \n3) Grippers. \n4) Leather Boots. \n5) Espadrilles.\n\nChoose any one: ";
			cin>>num2;
			cout<<"\n\n";
		
			system("CLS");
				
			int prce[5]	= {1800, 1900, 2000, 2100, 3100};
			string nme[5] = {"Sneakers", "Joggers", "Grippers", "Leather Boots", "Espadrilles"};
		
			if(num2 >= 6 || num2 == 0){
				cout<<"Choose correct option\n\n";
				goto C;
			}
				
			sub_menu(prce[num2-1], nme[num2-1]);	

			break;				
		
		}
		
		else if(num1 == 4){
					
			D:
				
			cout<<"1) Rings. \n2) Earings. \n3) Noserings. \n4) Bracelets. \n5) Necklace.\n\nChoose any one: ";
			cin>>num2;
			cout<<"\n\n";	
		
			system("CLS");
				
			int prce[5]	= {1100, 1000, 1200, 1000, 1000};
			string nme[5] = {"Rings", "Earings", "Noserings", "Bracelets", "Necklaces"};
		
			if(num2 >= 6 || num2 == 0){
				cout<<"Choose correct option\n\n";
				goto D;
			}
			
			sub_menu(prce[num2-1], nme[num2-1]);	

			break;
		}
		
		else if(num1 == 5){
				
			E:
				
			cout<<"1)Dress \n\nChoose any one: ";
			cin>>num2;
			cout<<"\n\n";	
		
			system("CLS");
				
			int prce[1]	= {4000};
			string nme[1] = {"Dress"};
		
			if(num2 >= 2 || num2 == 0){
				cout<<"Choose correct option\n\n";
				goto E;
			}
				
			sub_menu(prce[num2-1], nme[num2-1]);	

			break;			
		}
		
		else if (num1 == 6)
		{
			receipt();
			break;
		}
		else if(num1 == 7){
			int a;
			do{
				cout<<"S.No \t\t    Employee      \t\t  Salary  \t\t  Post"<<endl;
				cout<<"1    \t\t Muhammad Wahaj   \t\t 150,000  \t\t Manager"<<endl;
				cout<<"2    \t\t Asra Shahid      \t\t 100,000  \t\t Accountant"<<endl;
				cout<<"3    \t\t Hania Ayaz Khan  \t\t 110,000  \t\t Designer"<<endl;
				cout<<"4    \t\t Raju Chai wala   \t\t  20,000  \t\t Salesperson"<<endl<<endl<<endl;
				cout<<"Press 1 to go back to main menu"<<endl;
				cin>>a;
			}while(a != 1);
			system("CLS");
		}	
	
		else{
			cout<<"Choose correct Option\n\n";
		}
		
	}while(num1 != 0);
}

void sub_menu(int prce, string nme){	

			cout<<"Product Name      =     Price\n" <<nme <<"\t\t\t" <<prce <<"\n\n1) Premium Quality \n2) Manufactured by XYZ \n3) Manufactured in 2021 \n\n";

			do{

				cout<<"Press 1 if You want to redirect to main manu \nPress 2 if you want to add to bill"<<endl;
				cin>>num4;
				system("CLS");
			
				if(num4 == 1){
					menu();
					break;
				}
	
				else if(num4 == 2){
						
					int cond;
					
					bill(nme,prce);
					cout<<"Succesfully added to bill\n\n";
					cout<<"press any number to proceed to main menu\n";
					cin>>cond;
				
						
					if(cond == 1 ){
						
						system ("cls");
						menu();
		
					}
					else{
						system ("cls");
						menu();
					}
					break;
				}
			
				else{
					cout<<"Choose correct Option\n\n";
				}
				
			}while(num4 != 0);		
}

void bill(string name,int price){
	
	names[count] = name;
	prices[count] = price;
	count = count + 1;
	
}
void receipt(){
	
	ofstream file("receipt.txt", ios_base::app);
	
	float ttl = 0;
	int choose;
	
	for(int i = 0; i < count; i++)
	{
		cout<<"Product: " <<names[i] <<"\t\t";
		cout<<"Product Price: " <<prices[i] <<"\n";
		ttl = ttl + prices[i];
		file<<"Product: " <<names[i] <<"\t\t";
		file<<"Product Price: " <<prices[i] <<"\n";
	}
	
	if(ttl == 0){
		
		cout<<"\nTotal Product Amount: " <<ttl <<endl;	
		cout<<"Tax 20%: "<<(ttl*1.2) <<endl;		
		cout<<"Total Amount: "<<((ttl*1.2)) <<endl;
	}
	
	else{
		
		cout<<"\nTotal Product Amount: " <<ttl <<endl;	
		cout<<"GST 20%: "<<(ttl*1.2) <<endl;	
		cout<<"Total Amount: "<<((ttl*1.2)) <<endl;
		
		file<<"Total Product Amount: " <<ttl <<endl;
		file<<"GST 20%: "<<(ttl*1.2) <<endl;
		file<<"Total Amount: "<<((ttl*1.2)) <<endl;
	
		file<<"\n--------------------------------------------\n";
		file.close();
	}
	
	
	cout<<"\n\nPress 1 for Feedback. \nPress 2 for End Program.\n";
	cin>>choose;
	system("CLS");
	
	do{
		if(choose == 1){
		
			int rate;
			string write;
			
			ofstream file1("Feedback.txt", ios_base::app);
			cout<<"Rate our Appliction 10/?: \n";
			cin>>rate;
			file1<<"Rating: "<<rate <<endl;
			cout<<"Write your prosperous thoughts about our Application\n";
			cin.get();
			getline(cin,write);
			file1<<"User prosperous thoughts: "<<write;
			file1<<"\n-----------------------------------------------\n";
			file1.close();
			
			break;
			
		}
		else if(choose == 2){
		
			cout<<"Program Ended";	
		}
	
	}while(choose != 2);
}
