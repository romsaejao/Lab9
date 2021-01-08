#include<iostream>
#include<string>
using namespace std;

int main()
{
	int count[5] = {};
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<"\n";
	string grade;
	int n = 1;
	
	do{
		cout << "Student [" << n <<"]: ";
	cin >> grade;                                    
		if( grade == "A")
			{                                               
		        count[0] += 1; 
				n = n + 1;                              	
			}
		else if(grade == "B")
			{              
			    count[1] += 1; 
				n = n + 1;                         
			}
		else if(grade == "C")
			{              
			    count[2] += 1; 
				n = n + 1;                        
			}
		else if(grade == "D")
			{              
			    count[3] += 1; 
				n = n + 1;                        
			}
		else if(grade == "F")
			{              
			    count[4] += 1; 
				n = n + 1;
			}
		else if(grade == "0")
		{         
				n = n - 1; 
			    break;                    
		}
		else
		{
			cout<< "Wrong input. Please input again."<<"\n" ;
		}	
	}while(grade != "0");
	
	cout << "In total "<<n<<" students."<<"\n";
	cout << "A = " << count[0]  <<", ";
	cout << "B = " << count[1]  <<", ";
	cout << "C = " << count[2]  <<", ";
	cout << "D = " << count[3]  <<", ";
	cout << "F = " << count[4]  ;	
		
	
	return 0;
}



