#include <iostream>
#include<conio.h>
#include <stdlib.h> 
#include<cstdlib>  
#include<windows.h>
char ch;
using namespace std;
void display()
{
string var="\n=============================================================================================================================================================="
"\n BBBBBBBB         AA       TTTTTTTTTTTTT    TTTTTTTTTTTTT    LLL            EEEEEEEEEEEE    SSSSSSSSSSS    HHHH        HHHH    IIIIIIIIIIIII    PPPPPPPPPPP   "
"\n BB    BB       AA  AA         TTTT             TTTT         LLL            EEEE            SSSS           HHHH        HHHH         III         PPPP   PPPP   "
"\n BBBBBBBB      AAAAAAAA        TTTT             TTTT         LLL            EEEE            SSSS           HHHH        HHHH         III         PPPP   PPPP   "
"\n BBBBBBBB    AAAAAAAAAAAA      TTTT             TTTT         LLL            EEEEEEEEEEEE    SSSSSSSSSSS    HHHHHHHHHHHHHHHH         III         PPPPPPPPPPP   "      
"\n BB    BB   AAA        AAA     TTTT             TTTT         LLL            EEEE                   SSSS    HHHH        HHHH         III         PPP           "
"\n BBBBBBBB  AA            AA    TTTT             TTTT         LLLLLLLLLLL    EEEEEEEEEEEE    SSSSSSSSSSS    HHHH        HHHH    IIIIIIIIIIIII    PPP           "
"\n=============================================================================================================================================================";


for(int i=0;i<var.size();i++)
{
	
	Sleep(1);
	cout<<var[i];
	
}
} 



 
//Function to make the grid zero
void zero(int **a)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = 0;
        }
 
    }
}
 
// Function to show the grid
void show_grid(int **b)
{
		//	char z  = 'A';
    for (int i = 0; i < 10; i++)
    {
    /*	if(i >= 0 && i<=10)
    	{
    		cout<<i<<"   ";
		}
		else
			cout<<i<<"  ";*/
        for (int j = 0; j < 10; j++)
        {
        	
        /*	if(i==0)
        	{
        		for(int k=0; k<10 ; k++)
        		{
        			cout<<"  ";
        			cout<<z<<"";
        		z++;
        	
				}
        		
        		break;
			} */
			
            if (b[i][j] == 88)
            {
                cout << "  " << char(b[i][j]);
                continue;
            }
 
            else if (b[i][j] == 72)
            {
                cout << "  " << char(b[i][j]);
                continue;
            }
 
            else
            {
                cout << "  " << b[i][j];
            }
	
        }
 
        cout << endl;
    }
}


//Function to show the computer and player grid together
void combine_show(int **a, int **b, string name)
{
    cout << "\t COMPUTER" << endl;
 
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[i][j] == 88)
            {
                cout << "  " << char(a[i][j]);
                continue;
            }
 
            else if (a[i][j] == 72)
            {
                cout << "  " << char(a[i][j]);
                continue;
 
            }
 
            else
            {
 
                cout << "  0";
 
            }
        }
 
        cout << endl;
    }
 
    cout << endl; cout << endl;
 
    cout << "\t "<<name<< endl;
 
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (b[i][j] == 88)
            {
                cout << "  " << char(b[i][j]);
                continue;
 
            }
 
            else if (b[i][j] == 72)
            {
                cout << "  " << char(b[i][j]);
                continue;
 
            }
 
            else
            {
 
                cout << "  " << b[i][j];
 
            }
        }
 
        cout << endl;
    }
}


//Function for clear screen
void clrscr()
{
    system("cls");
}

int main()
{
	srand(10);
	display();
L:
	clrscr();
	
//	cout << "\n\n\n\n\n\t\t\t\t\t----------------------------------------------------------"<<endl<<endl;
	cout<<"\n\n\n\n\n\t\t\t\t\t"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t1.Play game";
	cout<<"\n\n\t\t\t\t\t\t\t2.See Rules";	
	cout<<"\n\n \t\t\t\t\t\t\tPress 1 for play game";
	cout<<"\n\n \t\t\t\t\t\t\tPress 2 for See Rules"<<endl;
	cout<<"\n\t\t\t\t\t\t\tEnter your choice ->";

	int a;
	cin>>a;
	if( a == 2 )
	{
			clrscr();
		  
 {
 	
 			cout<<endl<<endl<<endl;
 			cout<<"Oorah! Get ready for the war!\n"<<endl;
            cout<<"1. You have to destroy your opponent's war ships before he destroys yours.\n"<<endl;
            cout<<"2. The battlefield is of 10x10 grid size in which you place your ships\n"<<endl;
            cout<<"3. You can place your ships by entering row number and column number";
            cout<<"4. and its x y coordinates(both separated by a space) where x is the row number and y is the column number\n"<<endl;
            cout<<"5. After placing your ships, you can attack the enemy area. To attack a area, enter its x y "
			" coordinate (separated by a space)\n"<<endl;
            cout<<"6. Attack hit to the enemy ship is denoted by a 'H'"<<endl;
            cout<<"\n7. Attack miss is denoted by a 'X'"<<endl;
            cout<<"\nPress ENTER to continue!"<<endl;	 		
 }
	getch();
	goto L;
	}
	
	
	
	else if( a == 1)
	{
		

    int **p_grid = new int *[10]; 
    
    for(int i = 0; i < 10; i++) {
        p_grid[i] = new int[10];
    } 
 
    int p_c1, p_c2, i = 0;   // p_c1 for player coordinate 1 ,p_c2 for player coordinate 2;
 
    int c1, c2, i1 = 0;     // c1 for coordinate 1, c2 for coordinate 2;
 
    int pa1, pa2, ca1, ca2, count = 0, count1 = 0;  // pa1 for player attack 1, pa2 for player attack pa2;
 
                                                // ca 1 for computer attack 1, ca2 for player attack 2;
    int **c_grid = new int *[10];
 
    for(int i = 0; i < 10; i++) {
        c_grid[i] = new int[10];
    }
    
    int c_hit = 0, p_hit = 0;
 
    int cp1=0,cp2=0;                  // coordinate compare 1 and coordinate compare 2;
 
    string name;                     // for name of player;
 
    //setting values to zero;
 
    zero(p_grid);
 
    zero(c_grid);
 
    // now, firstly working for computer, generating random numbers;
 
    while (i < 5) 
    {
        p_c1 = rand() % 10;  // rand() % 100;
        p_c2 = rand() % 10;
 
        if (c_grid[p_c1 - 1][p_c2 - 1] != 1)
        {
 
            c_grid[p_c1-1][p_c2-1] = 1;
 
        }
        else
        continue;
 
        i++;
    }
 
    clrscr();
   
    cout<<"Please Enter Your Name"<<endl;
    cin>>name;
 
    
 
    cout<<"Hello "<<name<<" Welcome to Battleship Game!!"<<endl;
 
     cout<<endl;
 
    show_grid(p_grid);
 
    // algorithm for player;
 
    cout << "\nEnter coordinates to place your ships" << endl;
 
    while (i1 < 5)
    {
 
        cout << "Enter Row ( x Coordinate )" << endl;
  
        cin >> c1;
 
        cout << "Enter Coloumn ( y Coordinate )" << endl;
 
        cin >> c2;
 
        if((c1>10 || c1<1) || (c2>10 || c2<1))
        {
            cout<<"\nInvalid Coordinates, Please Enter Again"<<endl;
            continue;
        }
 
        if (p_grid[c1 - 1][c2 - 1] != 1)
        {
            p_grid[c1 - 1][c2 - 1] = 1;
        }
 
        else
        {
           cout<<"Can't Enter same coordinates twice, please enter again"<<endl;
           continue;
        }
 
        clrscr();
        show_grid(p_grid);
 
        i1++;
    }
 
     cout<<endl; // for spacing;
 
    combine_show(c_grid, p_grid,name);  // to display two arrays together;
 
    // Beginning mechanism for attack;
 
    // first turn for player, 5 fires:
 
    cout<<name<<" will attack first! You Have 5 Fires " << endl;
 
    while (count < 5)
    {
 
        cout << "Enter Row ( x Coordinate )" << endl;
 
        cin >> pa1;                                              
 
        cout << "Enter Coloumn ( y coordinate )" << endl;
 
        cin >> pa2;
 
        if(pa1==cp1 && pa2==cp2)
        {
          cout<<"Can't Enter same Coordinates twice, please enter again"<<endl;
          continue;
        }
 
        if((pa1>10 || pa1<1) || (pa2>10 || pa2<1))
        {
            cout<<"Invalid Coordinates, Please Enter Again"<<endl;
            continue;
        }
 
 
        clrscr();
 
        if (c_grid[pa1-1][pa2-1] == 1)
        {
            cout << "Hit!! " << 5 - (count + 1) << " Fires Left!" << endl;
 
            c_grid[pa1-1][pa2-1] = 72;   // for printing 'H' on hit location;
 
            p_hit++;
 
        }
 
        else
        {
            cout << " Miss!! " << 5 - (count + 1) << " Fires Left!" << endl;
 
            c_grid[pa1-1][pa2-1] = 88;  // for printing 'X' on fired location;
        }
 
        count++;
 
        combine_show(c_grid,p_grid,name);
 
        cp1=pa1;    
                       // to compare values for input validation(duplicate input);
        cp2=pa2;
 
    }
 
    // second turn for computer;
 
    cout<<"\nSecond turn for Computer"<<endl;
 
    while (count1 < 5)
    {
        ca1 = rand() % 10;
 
        ca2 = rand() % 10;
 
        if (p_grid[ca1][ca2] == 1)
        {
            cout << "Hit!! " << 5 - (count1 + 1) << " fires left!" << endl;
 
            p_grid[ca1][ca2] = 72;     // 72 for printing 'H' on Hit Location;
 
            c_hit++;
 
        }
 
        else
        {
 
            cout << "Miss! Try Again " << 5 - (count1 + 1) << " fires left!" << endl;
 
            p_grid[ca1][ca2] = 88;  // 88 for printing X on the fired location;
 
        }
 
        count1++;
 
    }
 	
	combine_show(c_grid, p_grid,name);

    cout << endl; cout << endl;
 
    if (p_hit > c_hit)
    {
        cout<<"Hurray "<< name << " Won The Game !" << endl;
    }
 
    else if (p_hit == c_hit)
    {
        cout << " Game Draw" << endl;
    }
 
    else
    {
        cout << " Computer Wins" << endl;
    }
    
}
else
{
	cout<<"\nYou entered invalid input ";
	getch();
	goto L;
}
return 0;
    

	}
   
