  #include<iostream.h>
  #include<conio.h>
  #include <fstream.h>
  #include<string.h>
  #include<stdlib.h>
 class one
 {
public:
int a,b,o2;
auth(char id[20],int pass)
 {clrscr();
 id=strcat(id,".txt");
   for(int i=0;i<10;i++)
  {
  cout<<"--------";
  cout<<"--------";
   }
  cout<<"\t\t\t\t    Share Transfer ";
 cout<<"\n\nYour Current Stocks:\n";
  char data[80];
  ifstream fread;
  fread.open(id);
  if(fread.bad())
{  cout<<"\no account found";
  getch();
  exit(1); }
  while(!fread.eof())
  {
  fread.getline(data,80);
  cout<<data<<endl;
  }
  for(int j=0;j<10;j++)
  {
  cout<<"--------";
   }
cout<<"Press 1 to Buy Stocks.\nPress2 to Sell Stocks\npress 3 to quit:";
 cin>>o2;
 if(o2==1)
 {
 char s[80];
 clrscr();
ofstream fwrite(id,ios::app);
 cout<<"\nEnter stock name:";
 cin>>s;
 fwrite<<s<<endl;
 fwrite.close();
 cout<<"\nstock added successfully";
 }
 if(o2==3)
 exit(1);
 fread.close();
}

 };

class two
{
public:
create(char nid[20],int npass)
{
nid=strcat(nid,".txt");
ofstream w(nid);
w.close();
cout<<"\nAccount Successfully created Restart the program and login." ;
getch();
exit(1);
}
};

class three
{
public:
void show()
{
char s[80];
int offset;
  ifstream f("stocks.txt");

  while(!f.eof())
  {

   f.getline(s,80);
  cout<<s<<endl;
 }
 f.close();
getch();
exit(1);

}

};
   main()
  {
 char lid[20];int lp;
 int oc=0;
  clrscr();
  for(int i=0;i<10;i++)
  {
  cout<<"--------";
  cout<<"--------";
   }
  cout<<"\t\t\t    Welcome to share transfer ";
  cout<<"\n\nThis is a simple share transfer software Made by Mohit Konaje which will help\n you buy and sell market shares from various companies.\n ";
for(i=0;i<10;i++)
  {
  cout<<"--------";
   }
cout<<"\nChoose Your Operations:";
cout<<"\nPress 1 For Login.";
cout<<"\nPress 2 For Creating an Account.";
cout<<"\nPress 3 To Check current Share Values.";
cout<<"\nPress 4 to Quit.";
cout<<"\n\nEnter Your Operation:";
cin>>oc;
  if(oc==1)
  {
  clrscr();
   for(int i=0;i<10;i++)
  {
  cout<<"--------";
  cout<<"--------";
   }
    cout<<"\t\t\t\t    Share Transfer ";
  cout<<"\n\n\n\t Enter Your Login Id:";
  cin>>lid;
  cout<<"\n\t\t     pasword:";
  cin>>lp;
 one a;
 a.auth(lid,lp);
getch();
 }
else if(oc==2)
{
  clrscr();
   for(int i=0;i<10;i++)
  {
  cout<<"--------";
  cout<<"--------";
   }
    cout<<"\t\t\t\t    Share Transfer ";
    cout<<"\n\n\t Creating A New Account";
    cout<<" \n\n\t Enter your new Login Id:";
    cin>>lid;
    cout<<"\n\n\t Enter a new password:";
    cin>>lp;
   two b;
   b.create(lid,lp);
}
else if(oc==3)
{
clrscr();
 for(int i=0;i<10;i++)
  {
  cout<<"--------";
  cout<<"--------";
   }
    cout<<"\t\t\t\t    Share Transfer ";
cout<<"\n\t\tCurrent Share Values\ny";
three c;
c.show();
}
else if(oc==4)
{
return 1;
}
 else
 cout<<"\n\n\t\t INVALID OPERATION";
   getch();

  }
