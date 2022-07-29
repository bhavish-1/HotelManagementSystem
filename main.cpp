#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
//Quantity
    int  Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, QPanner=0, Qshake=0;
// items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, SPanner=0, Sshake=0;
// toltal qunatity of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_Panner=0, Total_shake=0;

cout<<"\n\t Quantity of items we have ";
cout<<"\n Rooms available: ";
cin>>Qrooms;
cout<<"\n Quantity of Pasta : ";
cin>>Qburger;
cout<<"\n Quantity of Burger : ";
cin>>Qburger;
cout<<"\n Quantity of noodles : ";
cin>>Qnoodles;
cout<<"\n Quantity of Panner : ";
cin>>QPanner;
cout<<"\n Quantity of shake : ";
cin>>Qshake;

m:
cout<<"\n\t\t\t Please select from the given menu options :";
cout<<"\n 1.Rooms ";
cout<<"\n 2.pasta ";
cout<<"\n 3.burger ";
cout<<"\n 4.noodles ";
cout<<"\n 5.Panner ";
cout<<"\n 6.shake ";

cout<<"\n 7. Informataion regarding sales and collection ";

cout<<"\n\n Please enter your choice ";
cin>>choice;

switch (choice)
{
case 1:
       cout<<"\n Enter the number of rooms you want : ";
       cin>>quant;
       if(Qrooms-Srooms >=quant )
       {
        Srooms=Srooms+quant;
        Total_rooms = quant*1200;
        cout<<"\n\n\t"<<quant<<"rooms have been alloted to you ";

       }
       else{
        cout<<"\n\tonly"<<Qrooms-Srooms<<"rooms remaning in hotel :";
           }
    break;

case 2:
       cout<<"\n Enter the amount of pasta you want : ";
       cin>>quant;
       if(Qpasta-Spasta >=quant )
       {
        Spasta=Spasta+quant;
        Total_pasta = quant*120;
        cout<<"\n\n\t"<<quant<<"Pasta is availabe to you ";

       }
       else{
        cout<<"\n\tonly"<<Qpasta-Spasta<<"Pasta remaning in hotel :";
           }
    break;

case 3:
       cout<<"\n Enter the amount of Burger you want : ";
       cin>>quant;
       if(Qburger-Sburger >=quant )
       {
        Sburger=Sburger+quant;
        Total_pasta = quant*100;
        cout<<"\n\n\t"<<quant<<"Burger is availabe to you ";

       }
       else{
        cout<<"\n\tonly"<<Qburger-Sburger<<"Burger remaning in hotel :";
           }
    break;

case 4:
       cout<<"\n Enter the amount of noodles you want : ";
       cin>>quant;
       if(Qnoodles-Snoodles >=quant )
       {
        Snoodles=Snoodles+quant;
        Total_noodles = quant*120;
        cout<<"\n\n\t"<<quant<<"Noodles is availabe to you ";

       }
       else{
        cout<<"\n\tonly"<<Qnoodles-Snoodles<<"Pasta remaning in hotel :";
           }
    break;
case 5:
       cout<<"\n Enter the amount of Panner you want : ";
       cin>>quant;
       if(QPanner-SPanner >=quant )
       {
        SPanner=SPanner+quant;
        Total_Panner = quant*120;
        cout<<"\n\n\t"<<quant<<"Panner is availabe to you ";

       }
       else{
        cout<<"\n\tonly"<<QPanner-SPanner<<"Panner remaning in hotel :";
           }
    break;
case 6:
       cout<<"\n Enter the amount of shakes you want : ";
       cin>>quant;
       if(Qshake-Sshake >=quant )
       {
        Sshake=Sshake+quant;
        Total_shake = quant*120;
        cout<<"\n\n\t"<<quant<<"shake is availabe to you ";

       }
       else{
        cout<<"\n\tonly"<<Qshake-Sshake<<"shake remaning in hotel :";
           }
    break;
case 7:
cout<<"\n\t\t Details of sale and collection ";
cout<<"\n\n Number of rooms we had : "<<Qrooms;
cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
cout<<"\n\n Total room collection for the day : "<<Total_rooms;
 
cout<<"\n\t\t Details of Pastas we had  ";
cout<<"\n\n Number of Pastas we had : "<<Qpasta;
cout<<"\n\n Number of Pastas we gave for rent "<<Spasta;
cout<<"\n\n Remaining Pastas : "<<Qpasta-Spasta;
cout<<"\n\n Total room collection for the day : "<<Total_pasta;

cout<<"\n\t\t Details of Burgers we had  ";
cout<<"\n\n Number of Burger we had : "<<Qburger;
cout<<"\n\n Number of Burger we gave for rent "<<Sburger;
cout<<"\n\n Remaining Burger : "<<Qburger-Sburger;
cout<<"\n\n Total burger collection for the day : "<<Total_burger;

cout<<"\n\t\t Details of shakes we had  ";
cout<<"\n\n Number of shakes we had : "<<Qshake;
cout<<"\n\n Number of shakes we gave for rent "<<Sshake;
cout<<"\n\n Remaining shakes : "<<Qshake-Sshake;
cout<<"\n\n Total room collection for the day : "<<Total_shake;

cout<<"\n\t\t Details of Panner we had  ";
cout<<"\n\n Number of Paneer we had : "<<QPanner;
cout<<"\n\n Number of Panner we gave for rent "<<SPanner;
cout<<"\n\n Remaining Panner : "<<QPanner-SPanner;
cout<<"\n\n Total room collection for the day : "<<Total_Panner;

case 8 :
exit(0);

default:"the item you are searching for is not available ";

 }

goto m; //jump statement where you can jump from one part to another part

}
