#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
#include<windows.h>
#include <iomanip>
#include <ios>
#include<stdlib.h>

using namespace std;
//class defining

//for general things
class general
{
    public:
    int stafid;//for staf id no.
    void r2()
		{
			stafid++;
			printf("\n Static variable count:"(stafid;
		}
}gen;//variable of general type

//for patients
class patients
{
    //have to add date and time of registeration
    public:
    string pfname;//for patient's first name
    string plname;//for patients's last name
    string page;// for patient's age
    string psex;//for patient's sex
    string pcond;//for patient's condition
    string pill;//for patient's reported illness
    string pblood;//for patient's blood group
    string pmobile;// for patient's mobile number
    string ward;//for the ward of patient
    string paddress;//for patient's address
    string prelative;//for patient's relative name
    string prmobile;//for patient's relative mobile number
    string pdocter;//for patient's docter
    string pdcab;//patient's docter cabin
    static int pqnum;//for patient's queue
    void r1()
		{
			pqnum++;
			printf("\n Static variable count:"(patients::pqnum;
		}
}patient[50];//variable of patient type
int patients::pqnum=1;

class docter//have to add sifferent typers of socters
{
    public:
    string dfname;//docter's first name
    string dlname;//docter's last name
    string dspec;//docter's speciality
    string dmobile;//docter's mobile number
    string daddr;//docter's address
    string dcab;//docter's cabin number
    string dyjoin;//docter's year of joining
}doct[20];

class nurse
{
    public:
    string nfname;//nurse's first name
    string nlname;//nurse's last name
    string nage;//age
    string nmobile;//moble number
    string naddr;//address
    string nyjoin;//nure's year of joining
}nur[30];//variable of type nurse

class interns
{
     public:
    string ifname;//intern's first name
    string ilname;//intern's last name
    string ispec;//intern's speciality
    string imobile;//intern's mobile number
    string iaddr;//intern's address
    string icab;//intern's cabin number
    string iyjoin;//intern's date of joining
}intern[40];//variable of type intern

//login function

int login1()
{
    string username="";
    string pass="";
    char ch;
    printf("\n\n\n\n\t\t\t\t\t\t\t---------------------------------------------------";
    printf("\n\t\t\t\t\t\t\t      |         HOSPITAL MANAGEMENT SYSTEM               |";
    //printf("\n\n\t\t\t\t\t\t\t    |--------------------------------------------------|";
    printf("\n\t\t\t\t\t\t\t\t    |                 LOGIN                            |";
    printf("\n\t\t\t\t\t\t\t      |--------------------------------------------------|\n\n\n";
    printf("\t\t\t\t\t\t\t         Enter User Name: ";
    getline(scanf, username);
    printf("\n\t\t\t\t\t\t\tEnter Password: ";
    ch=getch();
    while(ch!=13)//13 is for enter
    {
pass.push_back(ch);
printf('#';
ch=getch();
    }

    if((username=="docter"||username=="nurse"||username=="admin")&&(pass == "docter"||pass=="nurse"||pass=="admin"))
    {
        printf("\n\t\t\t\t\t\t\t\tACCESS GRANTED\n";
        system("pause");
        system("cls");
    }
    else{
        printf("\n\t\t\t\t\t\t\t\tACCESS DENIED\n";
        system("pause");
        system("cls");
        login1();
    }
return 0;
}

int loginDoct()
{
    string pass1="";
    char pa;
        printf("\n\n\n\n\t\t\t\t\t\t\t HOSPITAL MANAGEMENT SYSTEM ";
    printf("\n\n\t\t\t\t\t\t\t---------------------------";
    printf("\n\t\t\t\t\t\t\tEnter Password To Login As Docter: ";
    pa=getch();
    while(pa!=13)
    {
        pass1.push_back(pa);
        printf('#';
        pa=getch();
    }
    if(pass1=="docter")
    { 
        printf("\n\t\t\t\t\t\t\t\tACCESS GRANTED\n\n";
        system("pause");
        system("cls");
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\tACCESS DENIED";
	       
        system("pause");
        system("cls");
        loginDoct();
    }
    return 0;
}



//main function
int main()
{
    system("(color 7D)");
    //int login();
    login1();
int i=0,j;//for processing usage
char choice;//for choice
string find;//find shorting
string sech;
while(1)//outer loop
{
    system("cls");//clear screen

    //Level 1 Display 
    printf("\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
    ("\n\n\t\t\t\t                 Hospital Management System"
    ("\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
    ("\n\n\t\t\t                           :HSL:\n\n"
    ("\t\t\t\t\t1. Patient\n"
    ("\t\t\t\t\t2. Docter\n"
    ("\t\t\t\t\t3. Nurse\n"
    ("\t\t\t\t\t4. Exit\n\n\n"
    ("\t\t\t\t\t Enter Your Choice\n";
    scanf>>choice;

    system("cls");

    switch(choice)//First Switch
    {
        case '1'://paient
        {
        while(1)//inner loop
        {
        system("cls");
        //Level 2 Display
        printf("\t\t\t\t\tPATIENT INFORAMTION\n\n";
        printf("\t\t\t\t1. Create New Entry\n"
            ("\t\t\t\t2. Find The Entry\n"
            ("\t\t\t\t3. Main Menu\n\n"
        ("\t\t\t\tEntern Your Choice: ";
        scanf>>choice;

        switch(choice)//patient switch
        {
            case '1'://New entry
            {
                ofstream f1("patient.xlsx",ios::app);
                for(i=0;choice!=27;i++)//exc for exits
                {
                    if((choice==13)||(choice=='1'))
                    {
                    system("cls");
                    printf("\t\t\t\tNEW PATIENT'S ENTRY\n\n";
                    printf("\t\t\t\tPatients Quee No.: ";
                    patient[i].r1();
                    printf("\n\t\t\t\tEnter First Name: ";
                    scanf>>patient[i].pfname;
                    printf("\t\t\t\tEnter Last Name";
                    scanf>>patient[i].plname;
                    printf("\n\t\t\t\tReported Ilness";
                    scanf>>patient[i].pill;
                    printf("\t\t\t\tWhat Is Patient's Condition";
                    scanf>>patient[i].pcond;
                    printf("\n\t\t\t\tEnter Mobile number";
                    scanf>>patient[i].pmobile;
                    printf("\t\t\t\tEnter Address";
                    scanf>>patient[i].paddress;
                    printf("\n\t\t\t\tEnter Sex";
                    scanf>>patient[i].psex;
                    printf("\t\t\t\tEnter Age";
                    scanf>>patient[i].page;
                    printf("\n\t\t\t\tPatient's Blood Group";
                    scanf>>patient[i].pblood;
                    printf("\t\t\t\tEnter Gurdians' Name";
                    scanf>>patient[i].prelative;
                    printf("\n\t\t\t\tEnter Gurdians' Mobile Number";
                    scanf>>patient[i].prmobile;
                    printf("\t\t\t\tEnter ward";
                    scanf>>patient[i].ward;
                    printf("\n\t\t\t\tDocter to Refer";
                    scanf>>patient[i].pdocter;
                    printf("\t\t\t\tDocter's cabin Number";
                    scanf>>patient[i].pdcab;
 
 f1(patient[i].pfname(endl(patient[i].plname(endl(patient[i].pcond(endl
 (patient[i].page(endl(patient[i].psex(endl(patient[i].pill(endl(patient[i].paddress(endl
 (patient[i].pmobile(endl(patient[i].pblood(endl
 (patient[i].prelative(endl(patient[i].prmobile(endl
 (patient[i].pdocter(endl(patient[i].pdcab(endl(patient[i].ward;

 scanf>>choice;
//////i have to print slip also in addition to auto generated pat no

}
}
    f1.close();
}
continue;//control back to inner loop 1

case '2'://Find the entry
{
    ifstream f2("patient.xlms");
    system("cls");
    printf("\n\t\t\t\t   DISPLAY STUDENT'S DATA\n";
    printf("\n\t\t\t\t   Enter First Name To Be Dispalyed: ";
    scanf>>find;
    int notFound=0;
    for (j=0;(j<i)||(!f2.eof());j++){
        getline(f2,patient[j].pfname);

        if(patient[j].pfname==find)
        {
        notFound=1;
        printf("\n\t\t\t\t\t\t\tPatient's Quee No.: "(patient[j].pqnum;
        printf("\n\t\t\t\tFirst Name:      "(patient[j].pfname("\t\tLast Name:         "(patient[j].plname;
        printf("\n\t\t\t\tAge:             "(patient[j].page("\t\tSex:               "(patient[j].psex;
        printf("\n\t\t\t\tCriticality:      "(patient[j].pcond("\t\tReported Ilness:  "(patient[j].pill;
        printf("\n\t\t\t\tBlood Group:      "(patient[j].pblood("\t\tWard:             "(patient[j].ward;
        printf("\n\t\t\t\tAddress:          "(patient[j].paddress("\t\tMobile No.:     "(patient[j].pmobile;
        printf("\n\t\t\t\tRelative's Name:   "(patient[j].prelative("\t\tMobile No.:   "(patient[j].prmobile;
        printf("\n\t\t\t\tDoctor To Refer:   "(patient[j].pdocter("\t\tCabin No.:      "(patient[j].pdcab;
        }
    }
    if(notFound==0)
    { printf("\n\t\t\t\tNo Records Found of This Name";}
    f2.close();
    printf("\n\t\tPress any key to continue.";
    getch();//to hold data on the screen
}
continue;//control back to inner loop 1
case '3'://jump to display 1
{
    break;//patient switch break
}
}//2nd patient switch
    break;//inner loop 1 break
}//patient case 1
    continue;//control pass to 1 loop
}//first switch of patient



case '2'://docter's information
{
    while(1)//docter loop
    {
        system("cls");
        //level 2 display in docter
        printf("\t\t\t\t\tDOCTER INFORAMTION\n\n";
        printf("\t\t\t\t1. Create New Entry\n"
            ("\t\t\t\t2. Find The Entry\n"
            ("\t\t\t\t3. Main Menu\n\n"
        ("\t\t\t\tEntern Your Choice: ";
        scanf>>choice;

        switch(choice)//docter switch
        {
            case '1'://New entry
            {
                ofstream d1("docter.xlsx",ios::app);
                for(i=0;choice!=27;i++)
                {
                    if((choice==13)||(choice=='1'))
                    {
                    system("cls");
                    printf("\t\t\t\tNEW DOCTER'S ENTRY\n\n";
                    printf("\t\t\t\tStaff Id No.: ";
                    gen.r2();
                    printf("\n\t\t\t\tEnter First Name: ";
                    scanf>>doct[i].dfname;
                    printf("\t\t\t\tEnter Last Name: ";
                    scanf>>doct[i].dlname;
                     printf("\n\t\t\tEnter Docters Specialisation: ";
                    scanf>>doct[i].dspec;
                    printf("\n\t\t\t\tEnter Mobile number: ";
                    scanf>>doct[i].dmobile;
                    printf("\t\t\t\tEnter Address: ";
                    scanf>>doct[i].daddr;
                    printf("\t\t\t\tEnter Cabin No.: ";
                    scanf>>doct[i].dcab;
                    printf("\n\t\t\t\tYear Of Joining: ";
                    scanf>>doct[i].dyjoin;
 
 d1(doct[i].dfname(endl(doct[i].dlname(endl(doct[i].dspec(endl(doct[i].dmobile(
 endl(doct[i].daddr(endl(doct[i].dcab(endl(doct[i].dyjoin;

printf("\n\n\t\t\t\tDo Press Y to add Press N for main menu: ";
        scanf>>choice;//////i have to print slip also in addition to auto generated pat no

}
}//for loop
    d1.close();
}//case 1
continue;//control back to inner loop 2

case '2'://Find the entry
{
                loginDoct();
    ifstream d2("docter.xlms");
    system("cls");
    printf("\n\t\t\t\t   DISPLAY DOCTER'S DATA\n";
    printf("\n\t\t\t\t   Enter First Name To Be Dispalyed: ";
    scanf>>find;
    int notFound=0;
    for (j=0;(j<i)||(!d2.eof());j++)
    {
        getline(d2,doct[i].dfname);

        if(doct[i].dfname==find)
        {
        notFound=1;
        printf("\n\t\t\t\t\t\t\tStaff Id No.: ";
        gen.r2();
        printf("\n\t\t\t\tFirst Name:      "(doct[i].dfname("\t\tLast Name:         "(doct[i].dlname;
        printf("\n\t\t\t\tSpecialisation:             "(doct[i].dspec("\t\tMobile No.:               "(doct[i].dmobile;
        printf("\n\t\t\t\tEnter Address:      "(doct[i].daddr("\t\t Cabin No.:  "(doct[i].dcab;
        printf("\n\t\t\t\tYear Of Joining:      "(doct[i].dyjoin;
    }
    }
    if(notFound==0)
    { printf("\n\t\t\t\tNo Records Found of This Name\n";}
    d2.close();
    printf("\n\t\tPress any key to continue.";
    getch();//to hold data on the screen
}//switch case 2 of docter
continue;//control pass to inner loop 2

case '3'://jump to main
{
    break;
}
}//docter switch
    break;
    }                         
}                         // docter case 2 


//------------------------Nurse----------------------
case '3':
    {
        while(1)//inner loop
        {
            system("cls");//Clear screen
             system("(color AD)");
            //Level 2 Display
printf("\t\t\t\tNURSE INFORMATION AND BIO DATA SECTION\n\n\n";
printf("\t\t\t\t1. Create New Entry\n";
printf("\t\t\t\t2. Find And Dispaly Entry\n";
printf("\t\t\t\t3. Jump To Main\n";
printf("\n\n\t\t\t\tEnter your choice: ";
scanf>>choice;

switch(choice)//Second switch student

{
    case '1':// new entey
{
    ofstream n1("nurse.xlsx",ios::app);
    for(i=0;choice!='n';i++)
{

    if((choice=='y')||(choice=='Y')||(choice=='1'))
    {
    system("cls");
    printf("\t\t\t\t\tNEW ENTRY\n";
    printf("Staff Id No.";
    gen.r2();
    printf("\n\n\t\t\t\t\tEnter First Name: ";
    scanf>>nur[i].nfname;
    printf("\n\t\t\t\t\tEnter Last Name: ";
    scanf>>nur[i].nlname;
    printf("\n\t\t\t\t\tEnter Age: ";
    scanf>>nur[i].nage;
    printf("\n\t\t\t\t\tMobile Number: ";
    scanf>>nur[i].nmobile;
    printf("\n\t\t\t\t\tAddress: ";
    scanf>>nur[i].naddr;
    printf("\n\t\t\t\t\tYear of Joining: ";
    scanf>>nur[i].nyjoin;
    

    n1(nur[i].nfname(endl(nur[i].nlname(endl(nur[i].nage(endl(nur[i].nmobile(endl(nur[i].naddr(endl(nur[i].nyjoin(endl;
    printf("\n\n\t\t\t\t\tDo you want to enter data: ";
    printf("\n\n\t\t\t\t\tPress Y for continue and N to finish:  ";
    scanf>>choice;
    }
}
n1.close();
}
continue;//control back to inner loop 1

case '2'://Data display
{ ifstream n2("nurse.xlsx");
system("cls");
printf("\n\t\t\t\t\t    DISPLAY STUDENT'S DATA\n ";
printf("\n\t\t\t\t\tEnter First Name To Be Dispalyed: ";
scanf>>find;
printf(endl;
int notFound = 0;
for( j=0;(j<=i)||(!n2.eof());j++)
{

    getline(n2,nur[j].nfname);

    if(nur[j].nfname==find)
    {
        notFound =1;
        printf("\n\t\t\t\tFirst Name:      "(nur[i].nfname("\t\tLast Name:         "(nur[i].nlname;
        printf("\n\t\t\t\tAge:             "(nur[i].nage("\t\tMobile No.:               "(nur[i].nmobile;
        printf("\n\t\t\t\tEnter Address:      "(nur[i].naddr("\t\tYear Of Joining:      "(nur[i].nyjoin;
    }
}


if(notFound ==0){

    printf("\n\t\tNo Record Found"(endl;
}
n2.close();
printf("Press any key to continue";
    getch();
}
continue;//control back to inner loop 1

case '3'://Jump to main
{
    break;//innner switch break
}
}//Nursr Switch

break;//inner loop 1 breaking
}//student while loop
continue;//control pass to 1st loop
}//main case 3 nurse
//------------------------Exit------------------------//
case '4'://exit
{
    printf("\n Coded By Ankit Kumar";
    break;//outer case 4
}//outer case 4
}   
break;//outer loop
}//outer while loop

}//int main
