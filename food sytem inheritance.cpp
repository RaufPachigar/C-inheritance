#include<iostream>
using namespace std;

class grandfather{
	public:
		int choice,q,total;
		void set(){
		
	cout<<"==============FOOD SYSTEM===============\n";
	cout<<"1. pizza --------------180 rs/pc\n";
	cout<<"2. burger --------------50 rs/pc\n";
	cout<<"3. dosa --------------80 rs/pc\n";
	cout<<"4. idli --------------40 rs/pc\n";
	cout<<"5.exit\n";
                 }
};
class father : public grandfather{
	public :
	void set1(){
	
	cout<<"enter your choice :\n";
	cin>>choice;
}
	
	
};
class son : public father{
	public :
	void set2(){
	
	switch(choice)
	{
		case 1:cout<<"you have enter pizza\n\n";
		      cout<<"enter your quantity :\n";
		      cin>>q;
		      total =q*180;
		      cout<<"total is :"<<total<<endl;
		      break;
		      
		case 2:cout<<"you have enter burger\n\n";
		      cout<<"enter your quantity :\n";
		      cin>>q;
		      total =q*50;
		      cout<<"total is :\n"<<total<<endl;
		      break;
		      
		case 3:cout<<"you have enter dosa\n\n";
		      cout<<"enter your quantity :\n";
		      cin>>q;
		      total =q*80;
		      cout<<"total is :"<<total<<endl;
		      break;
		      
		case 4:cout<<"you have enter idli\n\n";
		      cout<<"enter your quantity :\n";
		      cin>>q;
		      total =q*40;
		      cout<<"total is :\n"<<total<<endl;
		      break;
		case 5: exit(0);      
		      
		      default :cout<<"worng input";
           
		   }
	}
	
};

int main()
{
	son s1;
	while(1)
	{
	
	s1.set();
	s1.set1();
	s1.set2();
	cout<<endl;
    } 
	
	return 0;
	
	}

