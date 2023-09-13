#include <iostream>
#include <string>

using namespace std;

char com;

struct ingfo
{
    /* data */
    string fname; //first name
    string lname; //last name
    string nname; //nickname
    int bdate; //birth date
    string bmonth; //birth month
    int byear; //birth year
    float gpa; //ipk/gpa
    int sid; //student id
    string motto; //motto
    int fnum; //favorite number
};


int main() {
    ingfo students[9];
    
    menu:
    cout<<"Type (n) for New Input, (s) to Show Data, (d) to Delete Data, (e) to Edit Data, (f) to Find Data, or (x) to exit.\n";
    cin>>com;

    switch (com)
    {
    case 'n':
        /* code */
        cout<<"First Name: ";
        cin>>students[0].fname;
        cout<<"Last Name: ";
        cin>>students[0].lname;
        cout<<"Nickname: ";
        cin>>students[0].nname;
        cout<<"Date of birth: ";
        cin>>students[0].bdate;
        cout<<"Month of birth: ";
        cin>>students[0].bmonth;
        cout<<"Year of birth: ";
        cin>>students[0].byear;
        cout<<"GPA/IPK: ";
        cin>>students[0].gpa;
        cout<<"Student ID: ";
        cin>>students[0].sid;
        cout<<"Motto: ";
        cin>>students[0].motto;
        cout<<"Favorite number: ";
        cin>>students[0].fnum;

        goto menu;

    case 's':
        cout<<"Full name: "<<students[0].fname<<students[0].lname<<endl;
        cout<<students[0].lname<<endl;
        cout<<students[0].nname<<endl;
        cout<<students[0].bdate<<endl;
        cout<<students[0].bmonth<<endl;
        cout<<students[0].byear<<endl;
        cout<<students[0].gpa<<endl;
        cout<<students[0].sid<<endl;
        cout<<students[0].motto<<endl;
        cout<<students[0].fnum<<endl;

        goto menu;

    case 'd':
        students[0].fname = {0, NULL};
        students[0].lname = {0, NULL};
        students[0].nname = {0, NULL};
        students[0].bdate = NULL;
        students[0].bmonth = {0, NULL};
        students[0].byear = NULL;
        students[0].gpa = NULL;
        students[0].sid = NULL;
        students[0].motto = {0, NULL};
        students[0].fnum = NULL;

        goto menu;
    
    case 'x': break;

    default:
        cout<<"invalid command!\n";

        goto menu;
    }

    /*if (com == 'n'){
        cout<<"First Name: ";
        cin>>students[0].fname;
        cout<<"Last Name: ";
        cin>>students[0].lname;
        cout<<"Nickname: ";
        cin>>students[0].nname;
        cout<<"Date of birth: ";
        cin>>students[0].bdate;
        cout<<"Month of birth: ";
        cin>>students[0].bmonth;
        cout<<"Year of birth: ";
        cin>>students[0].byear;
        cout<<"GPA/IPK: ";
        cin>>students[0].gpa;
        cout<<"Student ID: ";
        cin>>students[0].sid;
        cout<<"Motto: ";
        cin>>students[0].motto;
        cout<<"Favorite number: ";
        cin>>students[0].fnum;
        
        goto menu;
    } else if (com == 's'){
        cout<<"Full name: "<<students[0].fname<<students[0].lname<<endl;
        cout<<students[0].lname<<endl;
        cout<<students[0].nname<<endl;
        cout<<students[0].bdate<<endl;
        cout<<students[0].bmonth<<endl;
        cout<<students[0].byear<<endl;
        cout<<students[0].gpa<<endl;
        cout<<students[0].sid<<endl;
        cout<<students[0].motto<<endl;
        cout<<students[0].fnum<<endl;

        goto menu;
    } else if (com == 'd'){
        cout<<"(1)First name: "<<students[0].fname;
        cout<<"(2)Last name: "<<students[0].lname;
        cout<<"(3)Nickname: "<<students[0].nname;
        cout<<"(4)Date of birth: "<<students[0].bdate;
        cout<<"(5)Month of birth: "<<students[0].bmonth;
        cout<<"(6)Year of birth: "<<students[0].byear;
        cout<<"(7)GPA/IPK: "<<students[0].gpa;
        cout<<"(8)Student ID: "<<students[0].sid;
        cout<<"(9)Motto"<<students[0].motto;
        cout<<"(10)Favorite number: "<<students[0].fnum;
        cout<<"Type (1) to (10) in order to delete the data.\n";
        cin>>del;

        goto menu;
    } */
    
    

    return 0;
}