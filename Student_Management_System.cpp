#include<iostream>
#include<string.h>
#include<iomanip>    
using namespace std;

void main_menu()
{
    cout<<"SCHOOL MANAGEMENT SYSTEM\n";
    cout<<"================\n";
    cout<<"0. Exit\n";
    cout<<"1. Student\n";
    cout<<"2. Teacher\n";
    cout<<"Enter Your Choice: \n";
}
    class Student{
    private:    
    int rollno;
    char name[20];
    char gender;
    int age;
    int std;
    float marks;    

    public:               
    int getRollNo()   
    {
        return rollno;
    }
    char *getName()  
    {
        return name;
    }

void modifyData()       
    {   
        cout << "Roll No. : "<<rollno<<endl;
        cout << "\n----Enter Student Details-----\n";
        cout << "Name     : ";
        cin>>name;
        cout << "Gender   : ";
        cin>>gender;
        cout << "Age      : ";
        cin>>age;
        cout << "Standard : ";
        cin>>std;
    }    

void getData()       
    {
        cout << "\n----Enter Student Details-----\n";
        cout << "Roll No. : ";
        cin>>rollno;
        cout << "Name     : ";
        cin>>name;
        cout << "Gender   : ";
        cin>>gender;
        cout << "Age      : ";
        cin>>age;
        cout << "Standard : ";
        cin>>std;
    }

    void listData()        
    {
        cout.setf(ios::left);
        cout<<setw(10)<<rollno;
        cout<<setw(20)<<name;
        cout<<setw(10)<<gender;
        cout<<setw(5)<<age;
        cout<<setw(5)<<std;
        cout<<endl;
    }
};
    class Teacher{
    private:   
    int teacher_id;
    char name[20];
    char gender;
    int age;
    int total_experiance;
    float marks;   

    public:             
    int getTeacherID()   
    {
        return teacher_id;
    }
    char *getName()  
    {
        return name;
    }

    void modifyData()      
    {   
        cout << "Roll No. : "<<teacher_id<<endl;
        cout << "\n----Enter Teacher Details-----\n";
        cout << "Name     : ";
        cin>>name;
        cout << "Gender   : ";
        cin>>gender;
        cout << "Age      : ";
        cin>>age;
        cout << "Total Experience : ";
        cin>>total_experiance;
    }    

void getData()       
    {
        cout << "\n----Enter Teacher Details-----\n";
        cout << "Teacher ID. : ";
        cin>>teacher_id;
        cout << "Name     : ";
        cin>>name;
        cout << "Gender   : ";
        cin>>gender;
        cout << "Age      : ";
        cin>>age;
        cout << "Total Experience : ";
        cin>>total_experiance;
    }

void listData()         
    {
        cout.setf(ios::left);
        cout<<setw(10)<<teacher_id;
        cout<<setw(20)<<name;
        cout<<setw(10)<<gender;
        cout<<setw(5)<<age;
        cout<<setw(5)<<total_experiance;
        cout<<endl;
    }
};

void heading_student()            
    {
        cout.setf(ios::left);
        cout<<setw(10)<<"Roll No.";
        cout<<setw(20)<<"Name";
        cout<<setw(10)<<"Gender";
        cout<<setw(5)<<"Age";
        cout<<setw(5)<<"Standard";
        cout<<endl;
    }

void heading_teacher()       
    {
        cout.setf(ios::left);
        cout<<setw(10)<<"Teacher ID";
        cout<<setw(20)<<"Name";
        cout<<setw(10)<<"Gender";
        cout<<setw(5)<<"Age";
        cout<<setw(5)<<"Total Experience";
        cout<<endl;
    }

void menu_student()
{
    cout<<"STUDENT'S RECORDS\n";
    cout<<"================\n";
    cout<<"0. Exit\n";
    cout<<"1. Register New Student\n";
    cout<<"2. Show All Student\n";
    cout<<"3. Search Student by Roll no\n";
    cout<<"4. Search Student by Name\n";
    cout<<"5. Modify Record\n";
    cout<<"6. Delete Record\n";
    cout<<"Enter Your Choice: \n";
}
void menu_teacher()
{
    cout<<"TEACHER'S RECORDS\n";
    cout<<"================\n";
    cout<<"0. Exit\n";
    cout<<"1. Register New Teacher\n";
    cout<<"2. Show All Teachers\n";
    cout<<"3. Search Teacher by Teacher ID\n";
    cout<<"4. Search Teacher by Name\n";
    cout<<"5. Modify Record\n";
    cout<<"6. Delete Record\n";
    cout<<"Enter Your Choice: \n";
}
int main()
{
    int choice;
    do
    { 
        system("cls");
        main_menu();
        cin>>choice;
        switch(choice)
        {
            case 1: 
            {
                int n=0, ch,i;
                int flag,rn;  
                char nm[20];     
                int pos;     
                Student s[10];
                do
                { 
                    system("cls");
                    menu_student();
                    cin>>ch;
                    switch(ch)
                    {
                        case 1: s[n].getData();n++;      
                            cout<<"\nRecord Saved Successfully!!\n";
                        break;
                        case 2:            
                                if(n>0)
                                {
                                    heading_student();
                                    for(i=0;i<n;i++)
                                    {
                                        s[i].listData();
                                    }
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                        break;
                        case 3:              
                                if(n>0)
                                {
                                    cout<<"Enter Roll No. to search and display: \n";
                                    cin>>rn;    
                                    heading_student();           
                                        for(i=0;i<n;i++)
                                        {
                                            if(rn==s[i].getRollNo())
                                            {
                                                s[i].listData();
                                                flag++;
                                            }   
                                        }
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                                if(flag==0)
                                {
                                    cout<<"No Such Roll No found\n";
                                }
                        break;
                        case 4:            
                                if(n>0)
                                {
                                    cout<<"Enter Name to search and display: \n";
                                    cin>>nm;    
                                    heading_student();            
                                        for(i=0;i<n;i++)
                                        {
                                            if(strcmpi(nm, s[i].getName())==0) 
                                            {
                                                s[i].listData();
                                                flag++;
                                            }   
                                        }
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                                if(flag==0)
                                {
                                    cout<<"No Such Roll No found \n";
                                }
                        break;
                        case 5:           
                                if(n>0)
                                {
                                    cout<<"Enter Roll No. to Modify the data: \n";
                                    cin>>rn;    
                                    heading_student();           
                                        for(i=0;i<n;i++)
                                        {
                                            if(rn==s[i].getRollNo())
                                            {
                                                cout<<"Following record will be modified...\n";
                                                s[i].listData();

                                                cout<<"Enter New Data: \n";  
                                                s[i].modifyData();
                                                flag++;
                                            }   
                                        }
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                                if(flag==0)
                                {
                                    cout<<"No Such Roll No found \n";
                                }
                        break;
                        case 6:               
                                if(n>0)
                                {
                                    cout<<"Enter Roll No. to delete: \n";
                                    cin>>rn;    
                                    heading_student();           
                                        for(i=0;i<n;i++)
                                        {
                                            if(rn==s[i].getRollNo())
                                            {
                                                cout<<"Following record is deleted....\n";
                                                s[i].listData();
                                                flag++;
                                                pos = i;
                                                break;
                                            }   
                                        }
                                        for(i=pos;i<n-1;i++)
                                        {
                                            s[i]=s[i+ 1];
                                        }
                                        n--;
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                                if(flag==0)
                                {
                                    cout<<"No Such Roll No found \n";
                                }
                        break;
                    }     
                    system("pause");
                }while(ch);  
                break;  
            }
            case 2: 
              {
                int n=0, ch,i;
                int flag,rn;  
                char nm[20];      
                int pos;      
                Teacher s[10];
                do
                { 
                    system("cls");
                    menu_teacher();
                    cin>>ch;
                    switch(ch)
                    {
                        case 1: s[n].getData();n++;      
                            cout<<"\nRecord Saved Successfully!!\n";
                        break;
                        case 2:             
                                if(n>0)
                                {
                                    heading_teacher();
                                    for(i=0;i<n;i++)
                                    {
                                        s[i].listData();
                                    }
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                        break;
                        case 3:                
                                if(n>0)
                                {
                                    cout<<"Enter Teacher ID. to search and display: \n";
                                    cin>>rn;    
                                    heading_teacher();            
                                        for(i=0;i<n;i++)
                                        {
                                            if(rn==s[i].getTeacherID())
                                            {
                                                s[i].listData();
                                                flag++;
                                            }   
                                        }
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                                if(flag==0)
                                {
                                    cout<<"No Such Teacher ID found \n";
                                }
                        break;
                        case 4:         
                                if(n>0)
                                {
                                    cout<<"Enter Name to search and display: \n";
                                    cin>>nm;    
                                    heading_teacher();          
                                        for(i=0;i<n;i++)
                                        {
                                            if(strcmpi(nm, s[i].getName())==0) 
                                            {
                                                s[i].listData();
                                                flag++;
                                            }   
                                        }
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                                if(flag==0)
                                {
                                    cout<<"No Such Teacher ID found \n";
                                }
                        break;
                        case 5:                
                                if(n>0)
                                {
                                    cout<<"Enter Teacher Id to Modify the data: \n";
                                    cin>>rn;    
                                    heading_teacher();         
                                        for(i=0;i<n;i++)
                                        {
                                            if(rn==s[i].getTeacherID())
                                            {
                                                cout<<"Following record will be modified...\n";
                                                s[i].listData();

                                                cout<<"Enter New Data: \n";  
                                                s[i].modifyData();
                                                flag++;
                                            }   
                                        }
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                                if(flag==0)
                                {
                                    cout<<"No Such Teacher ID found \n";
                                }
                        break;
                        case 6:                 
                                if(n>0)
                                {
                                    cout<<"Enter Roll No. to delete: \n";
                                    cin>>rn;    
                                    heading_teacher();           
                                        for(i=0;i<n;i++)
                                        {
                                            if(rn==s[i].getTeacherID())
                                            {
                                                cout<<"Following record is deleted....\n";
                                                s[i].listData();
                                                flag++;
                                                pos = i;
                                                break;
                                            }   
                                        }
                                        for(i=pos;i<n-1;i++)
                                        {
                                            s[i]=s[i+ 1];
                                        }
                                        n--;
                                }
                                else
                                {
                                    cout<<"Nothing to display!!\n";
                                }
                                if(flag==0)
                                {
                                    cout<<"No Such Teacher ID found \n";
                                }
                        break;        
                    }     
                    system("pause");
                }while(ch);  
                break;  
            }
        }     
       system("pause");
    }while(choice);   
} 


