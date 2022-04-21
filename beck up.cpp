#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
void Registration(int x);
void Hostel();
int Explore(int choice);
void SearchStudent();
void Modify();
void StudentModify();
void DeleteStudent();
void Menu();
void AgainMenu();
void AgainMenu(int value)
{
		int choice;
	if(value==1)
	{
againstudent:
		cout<<"\t\t\t\t\t\t*******************************************"<<endl;
		cout<<"\t\t\t\t\t\\tEnter Input \n"<<endl;
		cout<<"\t\t\t\t\t\t 1) Register another Student "<<endl;
		cout<<"\t\t\t\t\t\t 2) Back to Main Menu"<<endl;
		cout<<"\t\t\t\t\t\t 3) Exit"<<endl;
		cout<<"\t\t\t\t\t\t*******************************************"<<endl;
		cin>>choice;
	switch(choice)
		{
			case 1:
			Hostel();
			goto againstudent;
			break;

			case 2:
			Menu();
			break;

			case 3:
			cout<<"EXIT"<<endl;
			break;

			default:
			{
			cout<<"Wrong Input Please Enter Correct Input"<<endl;
			goto againstudent;
			}
		}
	}
	

		if(value==2)
			{
				launch:
				cout<<"\t\t\t\t\t\t*******************************************"<<endl;
				cout<<"\t\t\t\t\t\\tEnter Input \n"<<endl;
				cout<<"\t\t\t\t\t\t 1) Search another Student's Data"<<endl;
				cout<<"\t\t\t\t\t\t 2) Back to Main Menu"<<endl;
				cout<<"\t\t\t\t\t\t 3) Exit"<<endl;
				cout<<"\t\t\t\t\t\t*******************************************"<<endl;
				cin>>choice;
				switch(choice)
						{
							case 1:
							SearchStudent();
							goto launch;
							break;

							case 2:
							Menu();
							break;

							case 3:
							cout<<"EXIT"<<endl;
							break;

							default:
							{
								cout<<"Wrong Input Please Enter Correct Input"<<endl;
								goto launch;
							}
					}
			}
			if(value==3)
					{
						start3:
						cout<<"\t\t\t\t\t\t*******************************************"<<endl;
						cout<<"\t\t\t\t\t\\tEnter Input \n"<<endl;
						cout<<"\t\t\t\t\t\t 1) Modify another Student's Data"<<endl;
						cout<<"\t\t\t\t\t\t 2) Back to Main Menu"<<endl;
						cout<<"\t\t\t\t\t\t 3) Exit"<<endl;
						cout<<"\t\t\t\t\t\t*******************************************"<<endl;
						
						cin>>choice;
						switch(choice)
								{
									case 1:
									StudentModify();
									goto start3;
									break;

									case 2:
									Menu();
									break;

									case 3:
									cout<<"EXIT"<<endl;
									break;

									default:
									{
										cout<<"Wrong Input Please Enter Correct Input"<<endl;
										goto start3;
									}
								}
				}

}
/*void DeleteStudent()
{
	cout<<"*******************************************"<<endl;
	cout<<"******** Cancelation of Room *************"<<endl;
	cout<<"*******************************************"<<endl;
	string name, fname, email, department, semester, roomNo, room, id, savedid;
	char select;
	int  vacancy[10], index=0, writeroom;
	ifstream read;
	read.open("singleroom1.txt");
	ofstream write;
	write.open("temp.txt");
	ifstream readexplore;
	readexplore.open("Explore.txt");
	ofstream writetempexplore;
	writetempexplore.open("tempexplore.txt");
		
		
	cout<<"Enter Student ID to Search desired data of Student"<<endl;
	cin>>id;
	bool isfound=false;
	while(getline(read,savedid))
	{
		
		getline(read,name);
		getline(read,fname);
		getline(read,email);
		getline(read,department);
		getline(read,semester);
		getline(read,room);
		// read file 1
		if(savedid!=id)
		{
				while(readexplore>>roomNo)
				{
					readexplore>>vacancy[index];
					if(roomNo==room)
					{
						writetempexplore<<roomNo<<" "<<vacancy[index]+1<<endl;	
					}
					
					else
					{
					writetempexplore<<roomNo<<" "<<vacancy[index]<<endl;	
					}
					index++;
				}
				cout<<"Data Delected"<<endl;
				//continue;
			}
		else
			isfound=false;
			isfound=true;
			write<<savedid<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
			cout<<"If true Data Saved into Temp File after Input"<<endl;
			cout<<savedid<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
			break;
		
		 
		
		if(!isfound)
		{
		cout<<"ID not found"<<endl;
		}
	}
	write.close();
	read.close();
	read.open("temp.tx t");
	write.open("singleroom1.txt");
	while(getline(read,savedid))
	{
		getline(read,name);
		getline(read,fname);
		getline(read,email);
		getline(read,department);
		getline(read,semester);
		getline(read,room);
		write<<savedid<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
		cout<<"Copied from Temp File to Original File"<<endl;
		cout<<savedid<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
			
	}
	
	readexplore.close("Explore.txt");
	writetempexplore.close("tempexplore.txt");
	readexplore.open("tempexplore.txt");
	writetempexplore.open("Explore.txt");
	while(readexplore>>roomNo)
	{
		readexplore>>vacancy;
		writetempexplore<<roomNo<<" "<<writeroom<<endl;
	}
	
	
	
}*/
void StudentModify()
{

	cout<<"\t\t\t\t\t\t************************************************"<<endl;
	cout<<"\t\t\t\t\t\t\t\t Modify Student's Data"<<endl;
	cout<<"\t\t\t\t\t\t************************************************"<<endl;
	string name, fname, email, department, semester;
	string room, id,newid,savedid;
	//char select;
	ifstream read;
	read.open("singleroom1.txt");
	ofstream write;
	write.open("temp.txt");

	bool isfound = false;
	begin2:
	cout<<"Enter Correct Student ID to Search desired data of Student"<<endl;
	cin>>id;
	bool check=false;
	
		check=true;
	
	while(getline(read,savedid))
	{
	if(id==savedid)
		{
		
		getline(read,name);
		getline(read,fname);
		getline(read,email);
		getline(read,department);
		getline(read,semester);
		getline(read,room);
		// read file 1
		if(id==savedid)
		{
			isfound=true;
			cout<<"ID matched Here are details of the student"<<endl;
			cout<<"Name:- "<<name<<endl<<"Father Nmae:- "<<fname<<endl<<"Email:- "<<email<<endl<<"Department:- "<<department<<endl<<"Semester:- "<<semester<<endl<<"ID:- "<<id<<endl<<"Room No:-  "<<room<<endl;
			
			beginhere:
			cout<<"Enter New ID to allacate this room to another Student"<<endl;
			cin>>newid;

			if(newid==savedid)
			{
				cout<<"This ID is already registered, Please Again ";
				goto beginhere;
				
			}
		else
			cout<<"Enter New Student Name:- ";
			cin.ignore();
			getline(cin,name);

			cout<<"Father Name:-   ";
			getline(cin,fname);

			cout<<"Email:-   ";
			cin>>email;
		
			cout<<"Department:-   ";
			cin>>department;	
		
			cout<<"Semester:-   ";
			cin>>semester;
			
			write<<newid<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
			
		}
		else
			{
			
			write<<savedid<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
			//isfound = false;
			
			}
	
	
		}
	else
		check=false;
		cout<<" ID Not found Please Again ";
		goto begin2;
	
	}
	
	write.close();
	read.close();
	read.open("temp.txt");
	write.open("singleroom1.txt");
	while(getline(read,savedid))
	{
		getline(read,name);
		getline(read,fname);
		getline(read,email);
		getline(read,department);
		getline(read,semester);
		getline(read,room);
		write<<savedid<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
		
	}
	

}

void SearchStudent()
{
	cout<<"\t\t\t\t\t\t*******************************************"<<endl;
	cout<<"\t\t\t\t\t\tSearch Student by ID"<<endl;
	cout<<"\t\t\t\t\t\t*******************************************"<<endl;
	string name, fname, email, department, semester, roomtype, room;
	string id, savedid;
	ifstream read;
	cout<<"Enter Student ID to Search desired data of Student"<<endl;
	cin>>id;
	read.open("singleroom1.txt");
	

	
	bool isfound = false;

	while(getline(read,savedid))
	{
		
		getline(read,name);
		getline(read,fname);
		getline(read,email);
		getline(read,department);
		getline(read,semester);
		getline(read,room);
		// read file 1
		if(id==savedid)
		{
			isfound=true;
			cout<<"Name:- "<<name<<endl<<"Father Name:- "<<fname<<endl<<"Email:- "<<email<<endl<<"Department:- "<<department<<endl<<"Semester:- "<<semester<<endl<<"ID:- "<<id<<endl<<"Room No:-  "<<room<<endl;
			
			break;
		}
		else
			isfound = false;
	
	}
	if(!isfound)
		cout<<"Not Found"<<endl;


}
int Explore(int choice)
{
	int room;
	ifstream read;
	read.open("Explore.txt");
	int vacancy;
	int roomNUM;

	int arr[10], index=0;
	
	while(read>>roomNUM)
	{
		read>>vacancy;
		arr[index++]=vacancy;
		cout<<"Room No: "<<roomNUM<<"  "<<"Vacancy: "<<vacancy<<endl;
	}

	read.close();


	// vacanies display

	cout<<"Room NO:-   ";
	cin>>room;
	index=0;

	bool available = false;
	while (index<10){
		if(choice==1  && index<=3)
		{
			if ((index+1)==room)
			{
				cout<<"In Sinlge Room"<<endl;
				if(arr[index]==0)
				{
					room=0;
					break;
				} 
				else
				{
					arr[index]-=1;
					break;
				}
			}
		
		}
		else if(choice==2  && index<6)
		{
			if ((index+1)==room)
			{
				cout<<"In Double Room"<<endl;
				if(arr[index]==0)
				{
					room=0;
					break;
				} 
				else
				{
					arr[index]-=1;
					break;
				}
			}
		
		}
		else if(choice==3  && index<10)
		{
			if ((index+1)==room)
			{
				cout<<"Room with four Persons"<<endl;
				if(arr[index]==0)
				{
					room=0;
					break;
				} 
				else
				{
					arr[index]-=1;
					break;
				}
			}
		
		}
		else
		room=0;

		index++;

	}

	ofstream update;
	update.open("Explore.txt");
	index=0;
	while(index<10)
	{
		update<<index<<" "<<arr[index++]<<endl;
	}
	
	//cout<<"Room No: "<<room<<endl;

	return room;
	
}


void Hostel()
{
	int num;
	here:
	cout<<"\n \n \t\t\t\t\t\t**************************************************"<<endl;
	cout<<"\t\t\t \t\t\t\t  Registration of Student \n"<<endl;
	cout<<"\t\t\t\t\t\t\t 1:- Single Room (Number of rooms 3)"<<endl;																
	cout<<"\t\t\t\t\t\t\t 2:- Double Room (Number of rooms 3)"<<endl;
	cout<<"\t\t\t\t\t\t\t 3:- Four persons in Room (Number of rooms 4)"<<endl;
	cout<<"\t\t\t\t\t\t\t 4:- Exit"<<endl;
	cout<<"\t\t\t\t\t\t**************************************************"<<endl;
	
	cin>>num;
	switch(num)
	{
	case 1:
		Registration(1);
		break;
	case 2:
		Registration(2);
		break;
	case 3:
		Registration(3);
		break;
	default:
		{
			cout<<"Wrong Input"<<endl;
			cout<<"Please Enter correct Input"<<endl;
			goto here;
		}

	}
	


}
void Registration(int x)
{
	string name, fname, email, department, semester;
	int id, room;	
		ifstream read;

		
		cout<<"Please Provide your Data"<<endl;
		cout<<"Enter Your Name:-   ";
		cin.ignore();
		getline(cin,name);

		
		cout<<"Father Name:-   ";
		getline(cin,fname);

		cout<<"Email:-   ";
		cin>>email;
		
		cout<<"Department:-   ";
		cin>>department;	
		
		cout<<"Semester:-   ";
		cin>>semester;
		
		cout<<"ID:-   ";
		cin>>id;
		switch(x)
	{
	case 1:
	room=Explore(1);
		break;
	case 2:
	room=Explore(2);
		break;
	case 3:
	room=Explore(3);
		break;
	default:
		{
			cout<<"Wrong Input"<<endl;
			cout<<"Please Enter correct Input"<<endl;
		}
	}
		
		ofstream write;
		ofstream search;
		search.open("room.txt", ios ::app);
		if(x==1 && room!=0)
		{
		write.open("singleroom1.txt", ios::app);
		write<<id<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
		cout<<"Room No "<<room<<" Allotted to you"<<endl;

		}

		else if(x==2 && room!=0)
		{
		write.open("singleroom1.txt", ios::app);
		write<<id<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
		cout<<"Room No "<<room<<" Allotted to you"<<endl;
		}
		else if(x==3 && room!=0)
		{
		write.open("singleroom1.txt", ios::app);
		write<<id<<endl<<name<<endl<<fname<<endl<<email<<endl<<department<<endl<<semester<<endl<<room<<endl;
		cout<<"Room No "<<room<<" Allotted to you"<<endl;
		write.close();
		}
		else
		{
			cout<<"Sorry no vacancy in desired room Or you might have entered wrong room no, Enter correct Input."<<endl;
			Hostel();
		}

		write.close();
}
void Menu()
{
	int choice1; 
	
	mainmenu:
	cout<<"\n \n \t\t\t\t\t\t**************************************************"<<endl;
	cout<<"\t\t\t \t\t\t\t WELCOME TO HOSTEL MANAGEMENT SYSTEM \n"<<endl;
	cout<<"\t\t\t\t\t\t\t 1:- Registration of Student"<<endl;																
	cout<<"\t\t\t\t\t\t\t 2:- Searching Student's Data by ID"<<endl;
	cout<<"\t\t\t\t\t\t\t 3:- Modification in Student's Data"<<endl;
	cout<<"\t\t\t\t\t\t\t 4:- Exit"<<endl;
	cout<<"\t\t\t\t\t\t**************************************************"<<endl;
	start:
	cin>>choice1;
	
	switch(choice1)
	{
	case 1:

		Hostel();
		AgainMenu(1);
		break;

	case 2:
		SearchStudent();
		AgainMenu(2);
		break;

	case 3:
		StudentModify();
		AgainMenu(3);
		break;

	case 4:
		cout<<"Exit"<<endl;
		break;

	default:
		{
			cout<<"Wrong Input Please Enter correct Input"<<endl;
			goto start;
		}
	}

}

int main()
{
	Menu();


	_getch();
}
