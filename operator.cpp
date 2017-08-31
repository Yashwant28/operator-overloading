#include<iostream>
#include<string.h>

using namespace std;

class my_string{ 
   public:
 	      char str[30];
          void getdata();
          void display();
          void operator+ (my_string str1);
          void operator<< (my_string str1);
          void operator>> (my_string str1);
};

void my_string::getdata()
{
  cout<<"\nEnter the string : ";
  cin>>str;
}

void my_string::display()
{
   cout<<"\n"<<str;
}


void my_string::operator+ (my_string str1)
{
   strcat(str,str1.str);
   cout<<"\n\t--String After Concat is : "<<str;
}


void my_string::operator>> (my_string str1)
{
   cout<<"\n\t--The string you entered is :"<<str1.str;
}


void my_string::operator<< (my_string str1)
{
   int i;
   cout<<"\n\t--The string after reversing is : ";
   for(i=strlen(str1.str);i>=0;i--)
     cout<<str1.str[i];
}


int main()
{
    int opt,c;
        
    my_string a,b;
	
	int opt1=1;
	
    while(opt1==1 && opt!=8)
	{
	
	cout<<"Menu"<<endl;
	cout<<"1. concatenation "<<endl;
	cout<<"2. Display "<<endl;
	cout<<"3. Reverse the string "<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Enter your choice :"<<endl; 
	
    cin>>opt;
	
	switch(opt)
      {
             case 1:
                      cout<<"\nEnter the 1st string-\n";
                      a.getdata();
                      cout<<"\nEnter the 2nd string-\n";
                      b.getdata();
                      a+b;  
                      break;
             
             case 2:
                      a.getdata();
                      b>>a;
                      break;
                      
             case 3:
                      a.getdata();			 
                      b<<a;
                      break;
                      
             case 4: return 0;
			 
			 default: cout<<"Invalid choice..try again\n";
      } 
       if(opt!=8){
       cout<<"\n\n\tDo you want to continue(Press 1 to continue)";
       cin>>opt1;}
     }

    return 0;
}

