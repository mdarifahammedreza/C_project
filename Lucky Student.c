#include <stdio.h>

#include <math.h>

#include <string.h>

#include <windows.h>

#include <time.h>

#include <conio.h>

#include <stdlib.h>

#define PI 3.14159265


void gotoxy ();

void rgister();

void login();

void menu();

void Teacher();

void CGPA_Calculator();

void Mathematical_calculator();

void Class_Routine();

void Personal_Note();

void Change_password();

void Developer();

void password();

void exit();

void SetColor();

void ClearConsoleToColors();

void SetColorAndBackground();

void drawRectangle();

void clearWindow();

void window();

void print_heading();

void add_teacher();

void search_teacher();

void mod_teacher();

void delete_teacher();

void main_window();

void CGPA_Calculator();

void Class_Routine();

void Change_password();

int note();

void addrecord();

void viewrecord();

void editrecord();

void deleterecord();

void Nrectangle();

void print_heading_2();

void cleanskin_2();
void welcome();

//for advance math calculator
void simple_scientific_calculator();
void birth_calculator();
void currency();
void energy();
void length();
void mass();
void matrix_addition();
void matrix_determind();
void matrix_devided();
void matrix_multiply();
void matrix_substraction();
void simple_calculator();
void speed();
void temperature();
void timec();
void trigonometric_function();
void sine();
void cosine();
void tangent();

void clear();
void delay(int mseconds);

void clear()
{
    system("PAUSE");
    system("CLS");
}

void delay(int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}



struct login
{
    char fname[120];
    char lname[60];
    char username[30];
    char password[20];
};



struct teacher
{
    char initial[5];
    char name[20];
    char mail[20];
    long unsigned int phone_no;
};

struct teacher tch;




COORD coord = {0, 0}; // sets coordinates to 0,0

void gotoxy (int x, int y)
{
    coord.X = x;

    coord.Y = y; // X and Y coordinates

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void welcome()
{
for(int i=0;i<3;i++){
    for(int j=0;j<111;j++)
        printf("\xB2");
    printf("\n");
}
gotoxy(0,22);
for(int i=0;i<3;i++){
    for(int j=0;j<111;j++)
        printf("\xB2");
    printf("\n");
}
int ar=300;
for(int i=3;i<22;i++){
         for(int j=0;j<111;j++)
         {
                    if(i==11 && j==48){
                    printf("W");

                    Sleep(ar);
                    continue;
                    }

                    if(i==11 && j==50){
                    printf("E");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==52){
                    printf("L");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==54){
                    printf("C");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==56){
                    printf("O");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==58){
                    printf("M");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==43){
                    printf("I");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==45){
                    printf("n");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==50){
                    printf("P");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==52){
                    printf("r");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==54){
                    printf("o");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==56){
                    printf("j");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==58){
                    printf("e");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==60){
                    printf("c");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==62){
                    printf("t");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==64){
                    printf("-");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==66){
                    printf("1");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==60){
                    printf("E");

                    Sleep(ar);
                    continue;
                    }
                    gotoxy(j,i);
                    printf("\xB2");
                    Sleep(.1);
                    gotoxy(j,i);
                    printf(" ");

//Bāngshǒu
         }
}

int p;
gotoxy(43,16);
printf("\xB2\xB2\tRegistration [1]");
gotoxy(43,18);
printf("\xB2\xB2\tLOG IN [2]");
gotoxy(43,20);
printf("Input :");
while(1){
scanf("%d",&p);
if(p==1)
    rgister();
else if (p==2)
    login();
else
 printf("Try again\n");
}
}

int main()
{
    system("cls");

    system("COLOR 30");

    welcome();

    return 0;
}







void rgister()
{   system("cls");
    FILE *log;

    log = fopen("password.txt", "ab+");

    struct login one;

    gotoxy(20, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 REGISTER");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(20, 6);
    printf("\xDB\xDB\xDB\xDB\xB2 Enter First name: ");
    scanf("%s", &one.fname);



    gotoxy(20, 8);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter Last name: ");

    scanf("%s", &one.lname);



    gotoxy(20, 10);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter User name: ");

    scanf("%s", &one.username);


    int i = 0;

    char VP; // VP every character of variable;

    char pass[20];

    gotoxy(20, 12);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter password :");

    while ((VP =_getch()) != 13)
    {
        pass[i] = VP;

        i++;

        printf("*");
    }
    pass[i] = '\0';

    printf("\npass1 %s",pass);

    for(int i=0; i<strlen(pass); i++)
    {
        pass[i]=pass[i]-0XAED;

    }
    printf("pass1 %s",pass);

    strcpy(one.password, pass);

    printf("pass %s",one.password);

    fwrite(&one,sizeof(one),1,log);

    fclose(log);

    system("cls");

    login();
}
void login()
{   system("cls");
    char username[200],password[20];

    char pass[20];//temporary encrypted password variable

    FILE *log;

    log=fopen("password.txt","r");

    struct login one;
    gotoxy(20, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LOG IN");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");


    gotoxy(20, 6);

    printf("\xDB\xDB\xDB\xDB\xB2 User name:");

    scanf("%s",&username);

    int i = 0;

    char VP; // VP every character of pasword variable;

    gotoxy(20, 8);
    printf("\xDB\xDB\xDB\xDB\xB2 Password :");

    while ((VP = getch()) != 13)
    {
        password[i] = VP;
        i++;
        printf("*");
    }
    password[i] = '\0';

    while(fread(&one,sizeof(one),1,log))

    {
        strcpy(pass,one.password);

    }
    for(int i=0; i<strlen(pass); i++)

    {
        pass[i]=pass[i]+0XAED;

    }
    if(strcmp(pass,password)==0)

    {
        menu();

        return;
    }
    else{
        gotoxy(20, 8);
    printf("\xDB\xDB\xDB\xDB\xB2 Password : Invalid Password");
    }

   int D;
   printf("Press 1 for try again");
   printf("press any key Exit");
   scanf("%d",&D);
   if(D==1)
    login();
    else
        exit(0);

}

void menu()
{

    system("cls");

    system("COLOR B2");

    int i;

    gotoxy(20, 3);

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU");

    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(20, 5);
    printf("\xDB\xDB\xDB\xDB\xB2 1.Teacher Information");


    gotoxy(20, 7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. CGPA Calculator");


    gotoxy(20, 9);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Mathematical calculator");


    gotoxy(20, 11);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Class Routine");


    gotoxy(20, 13);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Personal Note");


    gotoxy(20, 15);
    printf("\xDB\xDB\xDB\xDB\xB2 6.Change password");


    gotoxy(20, 17);
    printf("\xDB\xDB\xDB\xDB\xB2 7.Developer");


    gotoxy(20, 19);
    printf("------------------------------------------");


    gotoxy(20, 21);
    printf("Enter your choice:");




    switch (getch())

    {
    case '1':
        Teacher();
        break;
    case '2':
        CGPA_Calculator();
        break;
    case '3':
        Mathematical_calculator();
        break;
    case '4':
        Class_Routine();
        break;
    case '5':
        note();
        break;
    case '6':
        Change_password();
        break;
    case '7':
        Developer();
        break;

    default:

        printf("Wrong Input,Please try again");
        break;
    }
}




void Teacher()
{
    system("cls");
    ClearConsoleToColors(11,16);

    SetConsoleTitle("CAPSTONE PROJECT");

    window();

    main_window();
    return 0;
}





void SetColor(int ForgC)
{
    WORD wColor;
    ///We will need this handle to get the current background attribute
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    ///We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        ///Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}










void ClearConsoleToColors(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    ///Get the handle to the current output buffer...
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    ///This is used to reset the carat/cursor to the top left.
    COORD coord = {0, 0};
    ///A return value... indicating how many chars were written
    ///   not used but we need to capture this since it will be
    ///   written anyway (passing NULL causes an access violation).
    DWORD count;
    ///This is a structure containing all of the console info
    /// it is used here to find the size of the console.
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    ///Here we will set the current color
    SetConsoleTextAttribute(hStdOut, wColor);
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        ///This fills the buffer with a given character (in this case 32=space).
        FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
        FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
        ///This will set our cursor position for the next print statement.
        SetConsoleCursorPosition(hStdOut, coord);
    }
    return;
}







void SetColorAndBackground(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
    return;
}








void drawRectangle()
{
    int i, j;
    gotoxy(0,0);
    printf("\xB2");
    for(i = 1; i < 78; i++)
    {
        gotoxy(i, 0);
        printf("\xB2");
    }
    gotoxy(78,0);
    printf("\xB2");
    for(i = 1; i < 25; i++)
    {
        gotoxy(78, i);
        if(i == 6)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }
    gotoxy(78, 25);
    printf("\xB2");
    for(i = 77; i > 0; i--)
    {
        gotoxy(i,25);
        if(i == 35)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }
    gotoxy(0,25);
    printf("\xB2");
    for(i = 24; i > 0; i--)
    {
        gotoxy(0,i);
        if(i == 6)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }

    for(i = 1; i < 78; i++)
    {
        gotoxy(i,6);
        if(i == 35)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }

    for(i = 7; i < 25; i++)
    {
        gotoxy(35,i);
        printf("\xB2");
    }

}








void clearWindow()
{
    int i,j;
    for(i = 37; i < 78; i++)
    {
        for(j = 7; j < 25; j++)
        {
            gotoxy(i,j);
            printf(" ");
        }
    }
    gotoxy(21,18);
    printf("     ");
    return;
}






void window()
{
    drawRectangle();
    gotoxy(24,1);
    SetColor(35);
    printf("RECORD TEACHER INFORMATION");
    gotoxy(24,2);
    printf("***************************");
    gotoxy(21,3);
    printf("DAFFODIL INTERNATIONAL UNIVERSITY");
    gotoxy(22,4);
    printf("SOFTWARE ENGINEERING DEPARTMENT");
    gotoxy(25,24);
    SetColor(17);

}






void print_heading(const char st[])
{
    SetColorAndBackground(28,16);
    gotoxy(45,8);
    printf("AAR : %s",st);
    SetColorAndBackground(15,16);
}





void add_teacher()
{
    clearWindow();
    print_heading("Add Record");
    int print = 37;
    FILE *fp;
    fp = fopen("record.txt","ab+");
    SetColor(45);
    if(fp == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);

    }
    else
    {
        fflush(stdin);

        gotoxy(print,10);

        printf("Initial: ");

        gets(tch.initial);

        //here you can confirms the ID
        gotoxy(print,12);

        printf("Name: ");

        gets(tch.name);


        gotoxy(print,14);

        printf("E-mail: ");
        gets(tch.mail);

        gotoxy(print,15);

        printf("Phone Number: ");

        scanf("%ld",&tch.phone_no);

        fwrite(&tch, sizeof(tch), 1, fp);

        gotoxy(40,22);

        printf("The record is sucessfully added");

    }
    SetColor(28);

    fclose(fp);

    return;
}

void search_teacher()

{
    clearWindow();

    print_heading("Search Record");

    SetColor(45);

    char t_in[5];//t_in ==teacher initial

    int isFound = 0;

    gotoxy(37,10);
    printf("Enter Initial to Search: ");

    fflush(stdin);

    gets(t_in);

    FILE *fp;

    fp = fopen("record.txt","rb");

    while(fread(&tch,sizeof(tch),1,fp) == 1)

    {
        if(strcmp(t_in,tch.initial) == 0)

        {
            isFound = 1;
            break;
        }
    }



    if(isFound == 1)
    {
        gotoxy(37,12);
        printf("The record is Found");

        gotoxy(37,14);
        printf("Initial: %s",tch.initial);

        gotoxy(37,15);
        printf("Name: %s",tch.name);

        gotoxy(37,16);
        printf("E-mail: %s",tch.mail);

        gotoxy(37,17);
        printf("Phone No: %ld",tch.phone_no);
    }


    else
    {
        gotoxy(37,12);
        printf("Sory, No record found in the database");
    }
    SetColor(28);
    fclose(fp);
    return;
}





void mod_teacher()
{
    clearWindow();
    print_heading("Modify Record");

    SetColor(45);
    char t_in[5];
    int isFound = 0, print = 37;

    gotoxy(37,10);
    printf("Enter Initial to Modify: ");


    fflush(stdin);

    gets(t_in);
    FILE *fp;
    fp = fopen("record.txt","rb+");
    while(fread(&tch, sizeof(tch),1,fp) == 1)

    {
        if(strcmp(t_in, tch.initial) == 0)
        {
            fflush(stdin);

            gotoxy(print,12);
            printf("Initial: ");

            gets(tch.initial);
            gotoxy(print,13);

            printf("Name: ");
            gets(tch.name);

            gotoxy(print,14);
            printf("E-mail: ");

            gets(tch.mail);
            gotoxy(print,15);

            printf("Phone Number: ");
            scanf("%ld",&tch.phone_no);

            fseek(fp,-sizeof(tch), SEEK_CUR);

            fwrite(&tch,sizeof(tch), 1, fp);

            isFound = 1;
            break;
        }
    }


    if(!isFound)
    {
        gotoxy(print, 12);

        printf("No Record Found");
    }
    fclose(fp);
    SetColor(28);
    return;
}





void delete_teacher()
{
    clearWindow();
    print_heading("Delete Record");

    SetColor(45);

    char t_in[5];

    int isFound = 0, print = 37;
    gotoxy(37,10);

    printf("Enter initial to Modify: ");

    fflush(stdin);

    gets(t_in);
    FILE *fp, *temp;

    fp = fopen("record.txt","rb");

    temp = fopen("temp.txt", "wb");

    while(fread(&tch, sizeof(tch),1,fp) == 1)
    {
        if(strcmp(t_in, tch.initial) == 0)
        {
            fwrite(&tch,sizeof(tch),1,temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("record.txt");
    rename("temp.txt","record.txt");
    gotoxy(37,12);
    printf("The record is sucessfully deleted");
    SetColor(28);
    return;
}





void main_window()
{
    int choice;
    SetColor(10);
    int x = 2;
    while(1)
    {
        gotoxy(x,8);
        printf("1. Add Teacher info");
        gotoxy(x,10);
        printf("2. Search Teacher");
        gotoxy(x,12);
        printf("3. Modify teacher Record");
        gotoxy(x,14);
        printf("4. Delete teacher Record");
        gotoxy(x,16);
        printf("5.back");
        gotoxy(x,18);
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_teacher();
            break;
        case 2:
            search_teacher();
            break;
        case 3:
            mod_teacher();
            break;
        case 4:
            delete_teacher();
            break;
        case 5:
            menu();
            break;
        default:
        {
            gotoxy(45,8);
            printf("WARNING");
            gotoxy(45,9);
            printf("********");
            gotoxy(44,10);
            printf("wrong input");

            break;
        }
        }

    }

}




void CGPA_Calculator(){
  system("cls");
    print_heading_2("CGPA Calculator");
    Nrectangle();
    int j=9;
    double gpa,GPA, credit, cgpa=0, s_cgpa, s_credit=0;
while(1)
{           gotoxy(10,j);
            printf("Enter your grade  (0  for Exit):");
            scanf("%lf", &gpa);
            if(gpa==0)
            {
                break;
            }
            j++;
            gotoxy(10,j);
            printf("Enter your  credit (0  for Exit):");
            scanf("%lf", &credit);


            if(gpa==0 || credit==0)
            {
                break;
            }

            cgpa = cgpa + (gpa*credit);
            s_credit = s_credit + credit;

            s_cgpa = cgpa / s_credit;
            j++;
        if(j>20){
            cleanskin_2();
            j=11;
        }
        }
        j++;
        gotoxy(10,j);
        printf("Your CGPA= %.2f", s_cgpa);
        j++;

    GPA=s_cgpa;
    gotoxy(10,j);
    if(GPA==4.00)
        printf("Grade: A+");


    else if(GPA>=3.75 && GPA<4.00)
        printf("Grade: A");


    else if(GPA>=3.50 && GPA<3.75)
        printf("Grade: A-");

    else if(GPA>=3.25 && GPA<3.50)
        printf("Grade: B+");

    else if(GPA>=3.00 &&GPA<3.25)
        printf("Grade: B");

    else if(GPA>=2.75 && GPA<3.00)
        printf("Grade: B-");

    else if(GPA>=2.50 && GPA<2.75)
        printf("Grade: C+");

    else if(GPA>=2.25 && GPA <2.50)
        printf("Grade: C");

    else if(GPA>=2.00 && GPA<2.25)
        printf("Grade: D");

    else
        printf("Grade: F");

    j++;
    gotoxy(10,j);
    printf("Press any key to go back");
    getch();
    menu();
}
void clearwindow_3(){
int i,j;
    for(i = 2; i < 35; i++)
    {
        for(j = 10; j < 25; j++)
        {
            gotoxy(i,j);
            printf(" ");
        }
    }

}


void Mathematical_calculator()
{


    system("cls");
    drawRectangle();
    print_heading_2("CALCULATOR");
    gotoxy(2,8);
    printf(" \xB2\xB2 Simple Calculator\t\t[1]");
    gotoxy(2,10);
    printf(" \xB2\xB2 Scientific Calculator\t[2]");
    gotoxy(2,12);
    printf(" \xB2\xB2 Converter Calculator\t[3]");
    gotoxy(2,14);
    printf(" \xB2\xB2 BACK to Main Menu\t\t[4]");
    int n,s_number,c_number;//sample calculator=s_number,//c_number=converter calcutor
    gotoxy(2,22);
    printf(" \xB2\xB2 Enter Your Choice:");
    scanf("%d",&n);
    system("cls");
    while(n > 0 && n <= 4){
        switch(n){
            case 1:
                simple_calculator();
              //  clear();
                break;
            case 2:
                system("cls");
                drawRectangle();
                print_heading_2("Scientific");
                gotoxy(2,8);
                printf(" \xB2 Simple Calculator\t[1]");
                gotoxy(2,10);
                printf(" \xB2 Trigonometric Function  [2]");
                gotoxy(2,12);
                printf(" \xB2 Matrix Addition\t[3]");
                gotoxy(2,14);
                printf(" \xB2 Matrix Subtraction\t[4]");
                gotoxy(2,16);
                printf(" \xB2 Matrix Divide\t[5]");
                gotoxy(2,18);
                printf(" \xB2 BACK \t\t[6]");
                gotoxy(2,20);
                printf(" \xB2 Main Menu \t[7]");
                gotoxy(2,22);
                printf("Enter Your Choice:");
                scanf("%d", &s_number);
                while(s_number > 0 && s_number <= 8){
                    switch(s_number){
                        case 1:
                            simple_scientific_calculator();
                            clear();
                            break;
                        case 2:
                            system("cls");
                            trigonometric_function();
                            clear();
                            break;
                        case 3:
                            matrix_addition();
                            clear();
                            break;
                        case 4:
                            matrix_substraction();
                            clear();
                            break;
                        case 5:
                            matrix_devided();
                            clear();
                            break;
                        case 6:
                            Mathematical_calculator();
                            break;
                        case 7:
                            menu();
                            break;
                        default:
                            break;
                    }
                }
            case 3:
                system("cls");
                drawRectangle();
                print_heading_2("Converter");
                gotoxy(2,8);
                printf(" \xB2 Convert AGE\t[1]");
                gotoxy(2,9);
                printf(" \xB2 Convert Length\t[2]");
                gotoxy(2,10);
                printf(" \xB2 Convert Mass\t[3]");
                gotoxy(2,11);
                printf(" \xB2 Convert Temperature  [4]");
                gotoxy(2,12);
                printf(" \xB2 Convert Speed\t[5]");
                gotoxy(2,13);
                printf(" \xB2 Convert Time\t[6]");
                gotoxy(2,14);
                printf(" \xB2 Convert Currency\t[7]");
                gotoxy(2,15);
                printf(" \xB2 Convert Energy\t[8]");
                gotoxy(2,16);
                printf(" \xB2 BACK\t\t[9]");
                gotoxy(2,17);
                printf(" \xB2 Main Menu [10]");
                gotoxy(2,19);
                printf(" Enter Your Choice:");
                scanf("%d", &c_number);
                while(c_number > 0 && c_number <= 10){
                    switch(c_number){
                        case 1:
                            birth_calculator();
                            break;
                        case 2:
                            length();
                            break;
                        case 3:
                            mass();

                            break;
                        case 4:
                            temperature();

                            break;
                        case 5:
                            speed();

                            break;
                        case 6:
                            timec();

                            break;
                        case 7:
                            currency();

                            break;
                        case 8:
                            energy();

                            break;
                        case 9:
                            Mathematical_calculator();

                            break;
                        case 10:
                            menu();
                            break;
                        default:
                            break;
                    }

                }
            case 4:
                menu();
                break;
            default :
                break;
        }

    }

    return;
}



void simple_calculator()
{   system("cls");
    drawRectangle();
    print_heading_2("simple");
    gotoxy(2,8);
    printf("Calculate Addition\t[1]");
    gotoxy(2,10);
    printf("Calculate Subtraction\t[2]");
    gotoxy(2,12);
    printf("Calculate Multiply\t[3]");
    gotoxy(2,14);
    printf("Calculate Divided\t[4]");
    gotoxy(2,16);
    printf("Calculate Power\t[5]");
    gotoxy(2,18);
    printf("Calculate Root\t[6]");
    gotoxy(2,20);
    printf("Back\t[7]");
    gotoxy(2,22);
    printf("Main menu\t[8]");
    gotoxy(2,24);
    printf("Enter a number to Continue:");
    int simple_number;
    int a, b, result;
    double number,num, p;
    scanf("%d", &simple_number);
    while(simple_number > 0 && simple_number < 9){
        switch(simple_number){
            case 1:
                print_heading_2("Addition");
                clearWindow();
                gotoxy(38,8);
                printf("Enter the first value:");
                scanf("%d", &a);
                gotoxy(38,10);
                printf("Enter the Second value:");
                scanf("%d", &b);
                result = a + b;
                gotoxy(38,12);
                printf("Addition = %d", result);
                gotoxy(38,13);
                printf("press any key to back.....");
                getch();
                Mathematical_calculator();
                break;
            case 2:
                print_heading_2("Subtraction");
                clearWindow();
                gotoxy(38,8);
                printf("Enter the first value:");
                scanf("%d", &a);
                gotoxy(38,10);
                printf("Enter the Second value:");
                scanf("%d", &b);
                result = a - b;
                gotoxy(38,12);
                printf("Subtraction = %d", result);
                gotoxy(38,20);
                printf("press any key to back.....");
                getch();
                Mathematical_calculator();
                break;
            case 3:
                print_heading_2("Subtraction");
                clearWindow();
                gotoxy(38,8);
                printf("Enter the first value:");
                scanf("%d", &a);
                gotoxy(38,10);
                printf("Enter the Second value:");
                scanf("%d", &b);
                result = a * b;
                gotoxy(38,12);
                printf("Multiply = %d", result);
                gotoxy(38,20);
                printf("press any key to back.....");
                getch();
                Mathematical_calculator();
                break;
            case 4:
                print_heading_2("Subtraction");
                clearWindow();
                gotoxy(38,8);
                printf("Enter the first value:");
                scanf("%d", &a);
                gotoxy(38,10);
                printf("Enter the Second value:");
                scanf("%d", &b);
                float result = (float) a / (float) b;;
                gotoxy(38,12);
                printf("Divided = %.2f", result);
                gotoxy(38,20);
                printf("press any key to back.....");
                getch();
                Mathematical_calculator();
                break;
            case 5:
                print_heading_2("Subtraction");
                clearWindow();
                gotoxy(38,8);
                printf("Enter The numbers and Power");
                gotoxy(38,10);
                printf("Enter The Number : ");
                scanf("%lf",&number);
                gotoxy(38,11);
                printf("Enter The Power : ");
                scanf("%lf",&num);
                p = pow(number, num);
                gotoxy(38,14);
                printf("Result = %.2lf", p);
                gotoxy(38,20);
                printf("press any key to back.....");
                getch();
                Mathematical_calculator();
                break;
            case 6:
                printf("\nTo Root Enter The number\n");
                printf("Enter The Number : ");
                scanf("%lf",&number);
                p = sqrt(number);
                printf("Result = %.2lf\n\n", p);
                gotoxy(38,20);
                printf("press any key to back.....");
                getch();
                Mathematical_calculator();
                break;
            case 7:
                Mathematical_calculator();
                break;
            case 8:
                menu();
                break;
            default:
                break;
        }

    }
    Mathematical_calculator();
}


void simple_scientific_calculator(){
    system("cls");
    drawRectangle();
    print_heading_2("sample");

    float a, b;
    float result;
    int count = 0;
    char check;
    gotoxy(38,8);
    printf("Inter the value and calculate ");
    gotoxy(38,9);
    printf("INPUT:");
    scanf("%f %c %f", &a, &check, &b);
    if(check == '+'){
            result = a + b;
    }
    else if(check == '-'){
            result = a - b;
    }
    else if(check == '*'){
            result = a * b;
    }
    else if(check == '/'){
            result = a / b;
            count++;
    }
    else if(check == '^'){
            result = pow(a , b);
    }

    scanf("%c", &check);
    float c;
    while(check != '+' && check != '-' && check != '*' && check != '/' && check != '\n'){
        scanf("%c", &check);
        scanf("%f", &c);
        if(check == '+'){
            result = result + c;
        }
        else if(check == '-'){
            result = result - c;
        }
        else if(check == '*'){
            result = result * c;
        }
        else if(check == '/'){
            result =  result / c;
            count++;
        }
        scanf("%c", &check);
        }

    if(count != 0){
            gotoxy(38,12);
        printf("Result = %.2f", result);
    }
    else{
        gotoxy(38,12);
        printf("Result = %.0f", result);
    }

    Mathematical_calculator();
}


void trigonometric_function(){
    system("cls");
    drawRectangle();
    print_heading_2("Trigonometric");

    int trigonometric_number;
    gotoxy(2,8);
    printf("Find the value of sine [1]");
    gotoxy(2,10);
    printf("Find the value of cos [2]");
    gotoxy(2,12);
    printf("Find the value of tan [3]");
    gotoxy(2,14);
    printf("Back\t[4]");
    gotoxy(2,16);
    printf("Exit\t[5]");
    gotoxy(2,17);
    printf("Enter Your Choice to continue:");
    scanf("%d", &trigonometric_number);
    while(trigonometric_number >= 1 && trigonometric_number <= 4){
        switch(trigonometric_number){
            case 1:
                sine();
                trigonometric_function();
                break;
            case 2:
                cosine();
                trigonometric_function();
                break;
            case 3:
                tangent();
                trigonometric_function();
                break;
            case 4:
                Mathematical_calculator();
                break;

            case 5:
                menu();
                break;
            default:
                break;
        }
       /* printf("Press 1 to Find the value of sine\n");
        printf("Press 2 to Find the value of cos\n");
        printf("Press 3 to Find the value of tan\n");
        printf("Press 4 for main Menu\n");
        printf("Press 5 to Exit\n");
        printf("Enter Your Choice to continue... ");
        scanf("%d", &trigonometric_number);*/
    }
}
void sine(){
    double input, output;
    clearWindow();
    gotoxy(38,8);
    printf("Enter the value angle of sin : ");
    scanf("%lf", &input);
    output = sin(input*PI/180);
    gotoxy(38,10);
    printf ("sin of %.0lf degrees is %.3lf", input, output );
    gotoxy(38,12);
    printf("press any key for back");
    getch();
    trigonometric_function();
}
void cosine(){
    double input, output;
    clearWindow();
    gotoxy(38,8);
    printf("Enter the value angle of cos : ");
    scanf("%lf", &input);
    output = cos(input*PI/180);
    gotoxy(38,10);
    printf ("Cos of %.0lf degrees is %.3lf\n\n", input, output );
    gotoxy(38,12);
    printf("press any key for back");
    getch();
    trigonometric_function();
}
void tangent(){
    double input, output;
    clearWindow();
    gotoxy(38,8);
    printf("Enter the value angle of tan : ");
    scanf("%lf", &input);
    output = tan(input*PI/180);
    gotoxy(38,10);
    printf ("Tan of %.0lf degrees is %.3lf", input, output);
    gotoxy(38,12);
    printf("press any key for back");
    getch();
    trigonometric_function();
}


void matrix_addition()
{   system("cls");
    drawRectangle();
    print_heading_2("Matrix");


    int row_size, column_size;
    gotoxy(2,8);
    printf("Insert Row Size    : ");
    scanf("%d", &row_size);
    gotoxy(2,9);
    printf("Insert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    gotoxy(2,10);
    printf("Insert the %d*%d Matrix A :\n", row_size, column_size);
    int i, j ,x=2,y=11;
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            gotoxy(x,y);
            scanf("%d", &array1[i][j]);
            y++;
            if(y>20){
                x=4;
                y=11;
            }
            }

        }

    clearwindow_3();
    gotoxy(2,10);
    printf("Insert the %d*%d Matrix B :\n", row_size, column_size);
    int k, l;
    x=2;
    y=11;
    for(k = 0; k < row_size; k++){
        for(l = 0; l < column_size; l++){
                gotoxy(x,y);
            scanf("%d", &array2[k][l]);
        y++;
            if(y>20){
                x=4;
                y=11;
            }
        }
    }
    clearwindow_3();
    gotoxy(2,10);
    printf("Here Matrix A+B\n", row_size, column_size);
    y=12;
    gotoxy(2,11);
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            printf("%d ", array1[i][j]);
            printf("+");
            printf(" %d", array2[i][j]);
            printf("\t");
        }
    gotoxy(2,y);
    y++;
    }
    //int sum = 0;

    printf("Summation of A,B Matrix is : \n");
    y++;
    gotoxy(2,y);
    for(i = 0; i < row_size; i++){
        int sum = 0;
        for(j = 0; j < column_size; j++){
            sum = array1[i][j] + array2[i][j];
        printf("%d\t", sum);
        }
        gotoxy(2,y);
    y++;

    }
gotoxy(2,24);
    printf("Press any key to continue");
    getch();
    Mathematical_calculator();
}


void matrix_substraction(){
    system("cls");
    drawRectangle();
    print_heading_2("Matrix");


    int row_size, column_size;
    gotoxy(2,8);
    printf("Insert Row Size    : ");
    scanf("%d", &row_size);
    gotoxy(2,9);
    printf("Insert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    gotoxy(2,10);
    printf("Insert the %d*%d Matrix A :\n", row_size, column_size);
    int i, j ,x=2,y=11;
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            gotoxy(x,y);
            scanf("%d", &array1[i][j]);
            y++;
            if(y>20){
                x=4;
                y=11;
            }
            }

        }

    clearwindow_3();
    gotoxy(2,10);
    printf("Insert the %d*%d Matrix B :\n", row_size, column_size);
    int k, l;
    x=2;
    y=11;
    for(k = 0; k < row_size; k++){
        for(l = 0; l < column_size; l++){
                gotoxy(x,y);
            scanf("%d", &array2[k][l]);
        y++;
            if(y>20){
                x=4;
                y=11;
            }
        }
    }
    clearwindow_3();
    gotoxy(2,10);
    printf("Here Matrix A-B\n", row_size, column_size);
    y=12;
    gotoxy(2,11);
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            printf("%d ", array1[i][j]);
            printf("-");
            printf(" %d", array2[i][j]);
            printf("\t");
        }
    gotoxy(2,y);
    y++;
    }
    //int sum = 0;

    printf("SubsTraction of A,B Matrix is : \n");
    y++;
    gotoxy(2,y);
    for(i = 0; i < row_size; i++){
        int sum = 0;
        for(j = 0; j < column_size; j++){
            sum = array1[i][j] - array2[i][j];
        printf("%d\t", sum);
        }
        gotoxy(2,y);
    y++;

    }

    gotoxy(2,24);
    printf("Press any key to continue");
    getch();

    Mathematical_calculator();

}

void matrix_devided()
{
    system("cls");
    drawRectangle();
    print_heading_2("Matrix");
    int row_size, column_size;
    gotoxy(2,8);
    printf("Insert Row Size  : ");
    scanf("%d", &row_size);
    gotoxy(2,9);
    printf("Insert Column Size: ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    gotoxy(2,10);
    printf("Insert the %d * %d Matrix A :", row_size, column_size);

      int i, j ,x=2,y=11;
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            gotoxy(x,y);
            scanf("%d", &array1[i][j]);
            y++;
            if(y>20){
                x=4;
                y=11;
            }
            }

        }
    clearwindow_3();
    gotoxy(2,10);
    printf("Insert the %d*%d Matrix B :", row_size, column_size);
    x=2,y=11;
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            gotoxy(x,y);
            scanf("%d", &array2[i][j]);
            y++;
            if(y>20){
                x=4;
                y=11;
            }
            }

        }
        y=10;
    gotoxy(38,8);

    printf("Here Matrix A /B", row_size, column_size);
    gotoxy(40,9);
    for(i = 0; i < row_size; i++){
        for(j = 0; j < row_size; j++){
            printf("%d", array1[i][j]);
            printf("/");
            printf("%d\t", array2[i][j]);
        }

    gotoxy(40,y);
    y++;
    }
    gotoxy(38,16);
    printf("Divided of A , B Matrix is : \n");
    for(i = 0; i < row_size; i++){
        float divided = 0;
        printf("\t\t\t\t\t     ");
        for(j = 0; j < row_size; j++){
            divided = (float) array1[i][j] / (float) array2[i][j];
        printf("%.2f\t", divided);
        }
        printf("\n");

    }
    gotoxy(38,24);
    printf("click any key to continue");
    getch();
    Mathematical_calculator();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int isLeapYear(int year, int mon)
{
    int flag = 0;
    if (year % 100 == 0)
    {
            if (year % 400 == 0)
            {
                    if (mon == 2)
                    {
                            flag = 1;
                    }
            }
    }
    else if (year % 4 == 0)
    {
            if (mon == 2)
            {
                    flag = 1;
            }
    }
    return (flag);
}
void birth_calculator(){
    system("cls");
    drawRectangle();
    print_heading_2("Birth");


    int DaysInMon[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};
    int days, month, year;
    char dob[100];
    time_t ts;
    struct tm *ct;

    /* enter date of birth */
    printf("Enter your date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&days,&month, &year);

    /*get current date.*/
    ts = time(NULL);
    ct = localtime(&ts);

    printf("Current Date: %d/%d/%d\n",ct->tm_mday, ct->tm_mon + 1, ct->tm_year + 1900);

    days = DaysInMon[month - 1] - days + 1;

    /* leap year checking*/
    if (isLeapYear(year, month))
    {
            days = days + 1;
    }

    /* calculating age in no of days, years and months */
    days = days + ct->tm_mday;
    month = (12 - month) + (ct->tm_mon);
    year = (ct->tm_year + 1900) - year - 1;

    /* checking for leap year feb - 29 days */
    if (isLeapYear((ct->tm_year + 1900), (ct->tm_mon + 1)))
    {
            if (days >= (DaysInMon[ct->tm_mon] + 1))
            {
                    days = days - (DaysInMon[ct->tm_mon] + 1);
                    month = month + 1;
            }
    }
    else if (days >= DaysInMon[ct->tm_mon])
    {
            days = days - (DaysInMon[ct->tm_mon]);
            month = month + 1;
    }

    if (month >= 12)
    {
            year = year + 1;
            month = month - 12;
    }

    /* print age */
    printf("\n## Hey you are  %d years %d months and %d days old. ##\n", year, month, days);

    return;
}
///////////////////////////////////////////////////////////////////////////////////////////

void length(){
    system("cls");
    drawRectangle();
    print_heading_2("Length");
    float centimeter, miter, kilometer, convert_number;
    int length_number;
    gotoxy(2,8);
    printf("Centimeter to Miter  [1]");
    gotoxy(2,10);
    printf("Centimeter to Kilometer [2]");
    gotoxy(2,12);
    printf("Miter to Centimeter [3]");
    gotoxy(2,14);
    printf("Miter to Kilometer [4]");
    gotoxy(2,16);
    printf("Kilometer to Centimeter [5]");
    gotoxy(2,18);
    printf("Kilometer to Miter [6]");
    gotoxy(2,20);
    printf("Back [7]");
    gotoxy(2,22);
    printf("Enter a choice:");
    scanf("%d", &length_number);

    while(length_number > 0 && length_number < 8){
        switch(length_number){
            case 1:
                gotoxy(38,8);
                printf("Centimeter : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Meter      : %.3f", convert_number / 100);
                gotoxy(2,24);
                printf("Press any key to continue");
                getch();
                length();
                break;
            case 2:
                gotoxy(38,8);
                printf("Centimeter : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Kilometer  : %.3f", convert_number / 1000);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                length();
                break;
            case 3:
                gotoxy(38,8);
                printf("Miter      : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Centimeter : %.3f", convert_number * 100);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                length();
                break;
            case 4:
                gotoxy(38,8);
                printf("Miter     : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Kilometer : %.3f", convert_number / 100);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                length();
                break;
            case 5:
                gotoxy(38,8);
                printf("Kilometer  : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Centimeter : %.3f", convert_number * 1000);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                length();
                break;
            case 6:
                gotoxy(38,8);
                printf("Kilometer : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Miter     : %.3f", convert_number * 100);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                length();
                break;
            case 7:
                //fflush(stdin);
                Mathematical_calculator();
                break;
            default:
                break;
        }

    }



    length();
}



void mass(){
    system("cls");
    drawRectangle();
    print_heading_2("Mass");
    float convert_number;
    int mass_number;
    gotoxy(2,8);
    printf("Centigram to Gram\t[1]");
    gotoxy(2,10);
    printf("Centimeter to Kilogram [2]");
    gotoxy(2,12);
    printf("Gram to Centigram\t[3]");
    gotoxy(2,14);
    printf("Gram to Kilogram\t[4]");
    gotoxy(2,16);
    printf("Kilogram to Centigram\t[5]");
    gotoxy(2,18);
    printf("Kilogram to Gram\t[6]");
    gotoxy(2,20);
    printf("Back\t\t[7]");
    scanf("%d", &mass_number);
   // system ("cls");
    while(mass_number > 0 && mass_number < 8){
        switch(mass_number){
            case 1:
                gotoxy(38,8);
                printf("Centigram : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Gram      : %.3f", convert_number / 100);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                mass();
                break;
            case 2:
                gotoxy(38,8);
                printf("Centigram : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Kilogram  : %.3f", convert_number / 1000);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                mass();
                break;
            case 3:
                gotoxy(38,8);
                printf("Gram      : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Centigram : %.3f", convert_number * 100);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                mass();
                break;
            case 4:
                gotoxy(38,8);
                printf("Gram     : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Kilogram : %.3f", convert_number / 100);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                mass();
                break;
            case 5:
                gotoxy(38,8);
                printf("Kilogram  : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Centigram : %.3f", convert_number * 1000);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                mass();
                break;
            case 6:
                gotoxy(38,8);
                printf("Kilogram : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Gram     : %.3f", convert_number * 100);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                mass();
                break;
            case 7:
                Mathematical_calculator();
            default:
                break;
        }
    }
    Mathematical_calculator();
}


void temperature()
{
    system("cls");
    drawRectangle();
    print_heading_2("Mass");
    float convert_number;
    int temperature_number;
    gotoxy(2,8);
    printf("Celsius to Fahrenheit [1]");
    gotoxy(2,10);
    printf("Celsius to Kelvin  [2]");
    gotoxy(2,12);
    printf("Fahrenheit to Celsius [3]");
    gotoxy(2,14);
    printf("Fahrenheit to Kelvin [4]");
    gotoxy(2,16);
    printf("Kelvin to Celsius [5]");
    gotoxy(2,18);
    printf("Kelvin to Fahrenheit [6]");
    gotoxy(2,20);
    printf("Back\t\t[7]");
    gotoxy(2,23);
    printf("Input Your choice:");
    scanf("%d", &temperature_number);
   // system ("cls");
    while(temperature_number > 0 && temperature_number < 8){
        switch(temperature_number){
            case 1:
                gotoxy(38,8);
                printf("Celsius    : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("Fahrenheit : %.3f", convert_number * 1.8 + 32);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                temperature();
                break;
            case 2:
                gotoxy(38,8);
                printf("Celsius : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Kelvin  : %.3f", convert_number + 273.15);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                temperature();
                break;
            case 3:
                gotoxy(38,8);
                printf("Fahrenheit : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Celsius    : %.3f", (convert_number - 32) * .5556);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                temperature();
                break;
            case 4:
                gotoxy(38,8);
                printf("Fahrenheit : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Kelvin     : %.3f", (convert_number + 459.67) * 5/9);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                temperature();
                break;
            case 5:
                gotoxy(38,8);
                printf("Kelvin  : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Celsius : %.3f",  convert_number - 273.15);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                temperature();
                break;
            case 6:
                gotoxy(38,8);
                printf("Kelvin     : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Fahrenheit : %.3f", convert_number * 9/5 - 459.67);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                temperature();
                break;
            case 7:
                Mathematical_calculator;
            default:
                break;
        }


}

Mathematical_calculator;
}

void speed()
{
    system("cls");
    drawRectangle();
    print_heading_2("speed");
    float centimeter, miter, kilometer, convert_number;
    int speed_number;
    gotoxy(2,10);
    printf("Meters/Sto K.M/H\t[1]");
    gotoxy(2,12);
    printf("Meters/S to Miles/H\t[2]");
    gotoxy(2,14);
    printf("K.M/H to Meters/S\t[3]");
    gotoxy(2,16);
    printf("K.M/H to Miles/H\t[4]");
    gotoxy(2,18);
    printf("Miles/H to Meters/S\t[5]");
    gotoxy(2,20);
    printf("Miles/H to K.M/H\t[6]");
    gotoxy(2,22);
    printf("Back\t\t\t[7]");
     gotoxy(2,23);
    printf("Input Your choice:");
    scanf("%d", &speed_number);
    while(speed_number > 0 && speed_number < 8){
        switch(speed_number){
            case 1:
                gotoxy(38,8);
                printf("Meters per Second    : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Kilometers per Hours : %.2f", convert_number * 3.60);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                speed();
                break;
            case 2:
                gotoxy(38,8);
                printf("Meters per Second : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Miles per Hours   : %.2f", convert_number * 2.24);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                speed();
                break;
            case 3:
                gotoxy(38,8);
                printf("Kilometers per Hours : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Meters per Second    : %.2f", convert_number * 0.28);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                speed();
                break;
            case 4:
                gotoxy(38,8);
                printf("Kilometers per Hours : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Miles per Hours      : %.2f", convert_number * 0.62);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                speed();
                break;
            case 5:
                gotoxy(38,8);
                printf("Miles per Hours   : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Meters per Second : %.2f", convert_number * 0.45);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                speed();
                break;
            case 6:
                gotoxy(38,8);
                printf("Miles per Hours      : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Kilometers per Hours : %.2f", convert_number * 1.61);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                speed();
                break;
            case 7:
                Mathematical_calculator();
            default:
                break;
        }

    }

    Mathematical_calculator();
}


void timec(){
    system("cls");
    drawRectangle();
    print_heading_2("Timec");
    float centimeter, miter, kilometer, convert_number;
    int time_number;
    gotoxy(2,8);
    printf("Seconds to Minutes [1]");
    gotoxy(2,10);
    printf("Seconds to Hours [2]");
    gotoxy(2,12);
    printf("Minutes to Seconds [3]");
    gotoxy(2,14);
    printf("Minutes to Hours [4]");
    gotoxy(2,16);
    printf("Hours to Seconds [5]");
    gotoxy(2,18);
    printf("Hours to Minutes [6]");
    gotoxy(2,20);
    printf("Back\t\t[7]");
    gotoxy(2,22);
    printf("Main menu\t\t[8]");
     gotoxy(2,23);
    printf("Input Your choice:");
    scanf("%d", &time_number);
    while(time_number > 0 && time_number < 9){
        switch(time_number){
            case 1:
                gotoxy(38,8);
                printf("Seconds : ");
                scanf("%f", &convert_number);
                gotoxy(38,12);
                printf("Minutes : %.2f", convert_number / 60);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                timec();
                break;
            case 2:
                gotoxy(38,8);
                printf("Seconds : ");
                scanf("%f", &convert_number);
                gotoxy(38,14);
                printf("Hours   : %.5f", convert_number / 3600);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                timec();
                break;
            case 3:
                gotoxy(38,8);
                printf("Minutes : ");
                scanf("%f", &convert_number);
                gotoxy(38,14);
                printf("Seconds : %.2f", 60 * convert_number);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                timec();
                break;
            case 4:
                gotoxy(38,8);
                printf("Minutes : ");
                scanf("%f", &convert_number);
                gotoxy(38,14);
                printf("Hours   : %.2f", convert_number / 60);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                timec();
                break;
            case 5:
                gotoxy(38,8);
                printf("Hours   : ");
                scanf("%f", &convert_number);
                gotoxy(38,14);
                printf("Seconds : %.2f", convert_number * 3600);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                timec();
                break;
            case 6:
                gotoxy(38,8);
                printf("Hours   : ");
                scanf("%f", &convert_number);
                gotoxy(38,14);
                printf("Minutes : %.2f", convert_number * 60);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                timec();
                break;
            case 7:
                Mathematical_calculator();
                break;
            case 8:
                menu();
                break;
            default:
                break;
        }

    }


    Mathematical_calculator();
}


void currency()
{
    system("cls");
    drawRectangle();
    print_heading_2("Currency");
    float centimeter, miter, kilometer, convert_number;
    int currency_number;
    gotoxy(2,8);
    printf("Bangladeshi Taka to US Dollar[1]");
    gotoxy(2,10);
    printf("Bangladeshi Taka to Euro[2]");
    gotoxy(2,12);
    printf("US Dollar to Bangladeshi Taka[3]");
    gotoxy(2,14);
    printf("US Dollar to Euro[4]");
    gotoxy(2,16);
    printf("Euro to Bangladeshi Taka[5]");
    gotoxy(2,18);
    printf("Euro to US Dollar[6]");
    gotoxy(2,20);
    printf("Back/t/t[7]");
    gotoxy(2,22);
    printf("main menu/t/t[8]");
     gotoxy(2,23);
    printf("Input Your choice:");
    scanf("%d", &currency_number);
    while(currency_number > 0 && currency_number < 7){
        switch(currency_number){
            case 1:
                gotoxy(38,8);
                printf("Bangladeshi Taka : ");
                scanf("%f", &convert_number);
                printf("US Dollar   : %.2f", convert_number *  0.0098);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                currency();
                break;
            case 2:
                gotoxy(38,8);
                printf("Bangladeshi Taka : ");
                scanf("%f", &convert_number);
                printf("Euro        : %.3f", convert_number * 0.0095);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                currency();
                break;
            case 3:
                gotoxy(38,8);
                printf("US Dollar    : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("Bangladeshi Taka : %10.f", 101.81 * convert_number);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                currency();
                break;
            case 4:
                gotoxy(38,8);
                printf("US Dollar     : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("Euro      : %.3f", convert_number * 0.96);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                currency();
                break;
            case 5:
                gotoxy(38,8);
                printf("Euro       : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("Bangladeshi Taka : %.3f", convert_number * 106.03);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                currency();
                break;
            case 6:
                gotoxy(38,8);
                printf("Euro     : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("US Dollar : %f", convert_number * 1.04);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                currency();
                break;
            case 7:
                Mathematical_calculator();
                break;
            case 8:
                menu();
                break;
            default:
                break;
        }
    }


    Mathematical_calculator();
}


void energy(){
    system("cls");
    drawRectangle();
    print_heading_2("Energy");
    float centimeter, miter, kilometer, convert_number;
    int energy_number;
    gotoxy(2,8);
    printf("Joules to Kilowatts[1]");
    gotoxy(2,10);
    printf("Joules to Kilojoules[2]");
    gotoxy(2,12);
    printf("Kilowatts to Joules[3]");
    gotoxy(2,14);
    printf("Kilowatts to Kilojoules[4]");
    gotoxy(2,16);
    printf("Kilojoules to Joules[5]");
    gotoxy(2,18);
    printf("Kilojoules to Kilowatts[6]");
    gotoxy(2,20);
    printf("back\t\t[7]");
    gotoxy(2,22);
    printf("Main menu\t[8]");
     gotoxy(2,23);
    printf("Input Your choice:");
    scanf("%d", &energy_number);
    while(energy_number > 0 && energy_number <= 8){
        switch(energy_number){
            case 1:
                gotoxy(38,8);
                printf("Joules    : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("Kilowatts : %.10f", convert_number / 3600000);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                energy();

                break;
            case 2:
                gotoxy(38,8);
                printf("Joules     : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("KiloJoules : %.3f", convert_number / 1000);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                energy();

                break;
            case 3:
                gotoxy(38,8);
                printf("Kilowatts : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("Joules    : %10.f", 3600000 * convert_number);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                energy();

                break;
            case 4:
                gotoxy(38,8);
                printf("Kilowatts  : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("Kilojoules : %.3f", convert_number * 3600);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                energy();

                break;
            case 5:
                gotoxy(38,8);
                printf("Kilojoules : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("Joules     : %.3f", convert_number * 1000);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                energy();

                break;
            case 6:
                gotoxy(38,8);
                printf("Kilojoules : ");
                scanf("%f", &convert_number);
                gotoxy(38,10);
                printf("Kilowatts  : %f", convert_number / 3600);
                gotoxy(38,16);
                printf("Press any key to continue");
                getch();
                energy();
                break;
            case 7:
                Mathematical_calculator();

                break;
            case 8:
                menu();
                break;
            default:
                break;
        }

    }


    Mathematical_calculator();
}

void Class_Routine()
{
    printf("Run output positive");
    system("START https://docs.google.com/document/d/e/2PACX-1vS5genrx8eKVQy-5Exm8cV0rU7dO4HHwuCleMpcgZuQcP7azMDPWNarKu99RlygEFQ7RNGVxQlNlBQ-/pub");
    printf("Press any key to go back");
getch();
menu();
}







void Change_password()
{
    rgister();
}



void Developer()
{
    printf("EMTY INFORMATION");
}
struct record

{

    char time[6];

    char name[30];

    char place[25];

    char duration[10];

    char note[500];

} ;

int note()

{

    int ch;
    system("cls");
    // fflush(stdin);
    Nrectangle();

   // gotoxy(30,3);

    print_heading_2("->MENU- NOTE<-");
    //printf(" SHORT NOTE\n");


    while(1)

    {
        gotoxy(33,7);

        printf("MAIN MENU:");
        gotoxy(20,10);

        printf("ADD RECORD  \t[1]");
        gotoxy(20,12);

        printf("VIEW RECORD \t[2]");
        gotoxy(20,14);

        printf("EDIT RECORD \t[3]");
        gotoxy(20,16);

        printf("DELETE RECORD\t[4]");
        gotoxy(20,18);

        printf("EXIT\t\t[5]");
        gotoxy(20,20);

        printf("ENTER YOUR CHOICE:");

        scanf("%d",&ch);

        switch(ch)

        {

        case 1:

            addrecord();

            break;

        case 2:

            viewrecord();

            break;

        case 3:

            editrecord();

            break;

        case 4:

            deleterecord();

            break;



        case 5:
            gotoxy(15,22);
            printf("THANK YOU FOR USING THE SOFTWARE ");

            getch();

            menu();

        default:
            gotoxy(15,22);
            printf("YOU ENTERED WRONG CHOICE..");
            gotoxy(15,23);
            printf("PRESS ANY KEY TO TRY AGAIN");

            getch();

            break;

        }

        system("cls");

    }

    return 0;

}
//complete
void addrecord( )

{

    system("cls");
    Nrectangle();
    print_heading_2("ADD RECORD");

    FILE *fp ;

    char another = 'Y',time[10];

    struct record e ;

    char filename[15];

    int choice;
    gotoxy(15,9);
    printf("ENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:");

    fflush(stdin);

    gets(filename);

    fp = fopen (filename, "ab+" ) ;

    if ( fp == NULL )

    {

        fp=fopen(filename,"wb+");

        if(fp==NULL)

        {

            printf("SYSTEM ERROR...");

            printf("PRESS ANY KEY TO EXIT");

            getch();

            return ;

        }

    }

    while ( another == 'Y'|| another=='y' )

    {
        cleanskin_2();

        choice=0;

        fflush(stdin);


        gotoxy(15,10);
        printf ( "ENTER TIME:[hh:mm]:");

        scanf("%s",time);

        rewind(fp);

        while(fread(&e,sizeof(e),1,fp)==1)

        {

            if(strcmp(e.time,time)==0)

            {

                printf("THE RECORD ALREADY EXISTS.\n");

                choice=1;

            }

        }

        if(choice==0)

        {

            strcpy(e.time,time);
            gotoxy(15,11);
            printf("ENTER NAME:");

            fflush(stdin);

            gets(e.name);

            fflush(stdin);
            gotoxy(15,12);

            printf("ENTER PLACE:");

            gets(e.place);

            fflush(stdin);
            gotoxy(15,13);

            printf("ENTER DURATION:");

            gets(e.duration);

            fflush(stdin);
            gotoxy(15,14);

            printf("NOTE:");

            gets(e.note);

            fwrite ( &e, sizeof ( e ), 1, fp ) ;
            gotoxy(15,16);

            printf("YOUR RECORD IS ADDED...\n");

        }
        gotoxy(15,17);
        printf ( "ADD ANOTHER RECORD...(Y/N) " ) ;

        fflush ( stdin ) ;

        another = getchar( ) ;

    }

    fclose ( fp ) ;

    note();

}
//Complete
void viewrecord( )

{

    FILE *fpte ;

    system("cls");
    Nrectangle();
    print_heading_2("VIEWRECORD");

    struct record customer ;

    char time[6],choice,filename[14];

    int ch;
    do

    {
        gotoxy(15,9);
        printf("ENTER THE DATE OF RECORD TO BE VIEWED:[yyyy-mm-dd]:");

        fflush(stdin);

        gets(filename);

        fpte = fopen ( filename, "rb" ) ;

        if ( fpte == NULL )

        {
            gotoxy(15,18);
            puts ( "THE RECORD DOES NOT EXIST...\n" ) ;
            gotoxy(15,19);
            puts("press Y for try again:");
            char op;
            op=getch();
            if(op=='Y'||op=='y')
                viewrecord();

        }

        // else{
        //gotoxy(15,18);
        //  printf("Returning note ""MENU"" menu in 3 sec");
        //   Sleep(3);
        // main();

        //   }

        //system("cls");
        gotoxy(15,11);
        printf("HOW WOULD YOU LIKE TO VIEW:\n");
        gotoxy(18,13);
        printf("\xB2 1.WHOLE RECORD OF THE DAY.");
        gotoxy(18,14);
        printf("\xB2 2.RECORD OF FIX TIME.");
        gotoxy(18,16);
        printf("ENTER YOUR CHOICE:");

        scanf("%d",&ch);
        cleanskin_2();
        switch(ch)

        {

        case 1:
            gotoxy(10,10);
            printf("THE WHOLE RECORD FOR %s IS:",filename);

            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )

            {

                gotoxy(15,12);

                printf("TIME: %s",customer.time);
                gotoxy(15,13);

                printf("MEETING WITH: %s",customer.name);
                gotoxy(15,14);

                printf("MEETING AT: %s",customer.place);
                gotoxy(15,15);

                printf("DURATION: %s",customer.duration);
                gotoxy(15,16);

                printf("NOTE: %s",customer.note);


            }

            break;

        case 2:

            fflush(stdin);
            gotoxy(15,10);
            printf("ENTER TIME:[hh:mm]:");

            gets(time);

            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )

            {

                if(strcmp(customer.time,time)==0)

                {
                    gotoxy(15,11);
                    printf("YOUR RECORD IS:");

                    gotoxy(15,13);

                    printf("TIME: %s",customer.time);
                    gotoxy(15,14);

                    printf("MEETING WITH: %s",customer.name);
                    gotoxy(15,15);

                    printf("MEETING AT: %s",customer.place);
                    gotoxy(15,16);

                    printf("DURATION: %s",customer.duration);
                    gotoxy(15,17);

                    printf("NOTE: %s",customer.note);

                }
                gotoxy(15,19);
            printf("Not Found!!!!!!!!!!!!!");
            }

            break;

        default:
            gotoxy(15,20);
            printf("\nYOU TYPED SOMETHING ELSE...\n");

            break;

        }
        gotoxy(15,20);
        printf("WOULD YOU LIKE TO CONTINUE VIEWING...(Y/N):");

        fflush(stdin);

        scanf("%c",&choice);

    }
    while(choice=='Y'||choice=='y');

    fclose ( fpte ) ;
    note();


}

void editrecord()

{

    system("cls");

    FILE *fpte ;

    struct record customer ;

    char time[6],choice,filename[14];

    int num,count=0;

    Nrectangle();
    print_heading_2("EDIT RECORD");

    do

    {
        gotoxy(8,8);
        printf("ENTER THE DATE OF RECORD TO BE EDITED:[yyyy-mm-dd]:");

        fflush(stdin);

        gets(filename);
        gotoxy(8,10);
        printf("ENTER TIME:[hh:mm]:");

        gets(time);

        fpte = fopen ( filename, "rb+" ) ;

        if ( fpte == NULL )

        {
            gotoxy(8,20);
            printf( "RECORD DOES NOT EXISTS:" ) ;
            gotoxy(8,21);

            printf("PRESS ANY KEY TO GO BACK");

            getch();

            note();

        }

        while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )

        {

            if(strcmp(customer.time,time)==0)

            {
                gotoxy(8,11);
                printf("YOUR OLD RECORD WAS AS:");
                gotoxy(8,12);

                printf("TIME: %s",customer.time);
                gotoxy(8,13);

                printf("MEETING WITH: %s",customer.name);
                gotoxy(8,14);

                printf("MEETING AT: %s",customer.place);
                gotoxy(8,15);

                printf("DURATION: %s",customer.duration);
                gotoxy(8,16);

                printf("NOTE: %s",customer.note);
                gotoxy(40,10);
                printf("\xB2");
                gotoxy(40,11);
                printf("\xB2");
                gotoxy(40,12);
                printf("\xB2");
                gotoxy(40,13);
                printf("\xB2");
                gotoxy(40,14);
                printf("\xB2");
                gotoxy(40,15);
                printf("\xB2");
                gotoxy(40,16);
                printf("\xB2");
                gotoxy(40,17);
                printf("\xB2");

                gotoxy(41,10);
                printf(" WHAT WOULD YOU LIKE TO EDIT..");
                gotoxy(41,11);

                printf(" 1.TIME.");
                gotoxy(41,12);

                printf(" 2.MEETING PERSON.");
                gotoxy(41,13);

                printf(" 3.MEETING PLACE.");
                gotoxy(41,14);

                printf(" 4.DURATION.");
                gotoxy(41,15);

                printf(" 5.NOTE.");
                gotoxy(41,16);

                printf(" 6.WHOLE RECORD.");
                gotoxy(41,17);

                printf(" 7.GO BACK TO MAIN MENU.");
                gotoxy(41,18);

                do

                {

                    printf(" ENTER YOUR CHOICE:");

                    fflush(stdin);

                    scanf("%d",&num);


                    cleanskin_2();

                    switch(num)

                    {

                    case 1:
                    gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");
                        gotoxy(10,12);

                        printf("NEW TIME:[hh:mm]:");

                        gets(customer.time);

                        break;

                    case 2:
                        gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");

                        printf("NEW MEETING PERSON:");

                        gets(customer.name);

                        break;

                    case 3:
                        gotoxy(10,11);

                        printf("ENTER THE NEW DATA:");
                        gotoxy(10,12);

                        printf("NEW MEETING PLACE:");

                        gets(customer.place);

                        break;

                    case 4:
                        gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");

                        printf("DURATION:");

                        gets(customer.duration);

                        break;

                    case 5:
                        gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");
                        gotoxy(10,12);

                        printf("NOTE:");

                        gets(customer.note);

                        break;

                    case 6:
                        gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");
                        gotoxy(10,12);

                        printf("NEW TIME:[hh:mm]:");

                        gets(customer.time);
                        gotoxy(10,13);

                        printf("NEW MEETING PERSON:");

                        gets(customer.name);
                        gotoxy(10,14);

                        printf("NEW MEETING PLACE:");

                        gets(customer.place);
                        gotoxy(10,15);

                        printf("DURATION:");

                        gets(customer.duration);
                        gotoxy(10,16);

                        printf("NOTE:");

                        gets(customer.note);

                        break;

                    case 7:
                        gotoxy(10,11);
                        printf("PRESS ANY KEY TO GO BACK...\n");
                        gotoxy(10,12);

                        getch();

                        note();

                        break;

                    default:
                        gotoxy(10,11);
                        printf("YOU TYPED SOMETHING ELSE...TRY AGAIN\n");


                        break;

                    }

                }
                while(num<1||num>8);

                fseek(fpte,-sizeof(customer),SEEK_CUR);

                fwrite(&customer,sizeof(customer),1,fpte);

                fseek(fpte,-sizeof(customer),SEEK_CUR);

                fread(&customer,sizeof(customer),1,fpte);

                choice='Y';

                break;

            }

        }

        if(choice=='Y')

        {

            cleanskin_2();
            gotoxy(2,11);
            printf("EDITING COMPLETED,");

                    gotoxy(19,11);
                    printf("YOUR RECORD IS:");

                    gotoxy(15,13);

                    printf("TIME: %s",customer.time);
                    gotoxy(15,14);

                    printf("MEETING WITH: %s",customer.name);
                    gotoxy(15,15);

                    printf("MEETING AT: %s",customer.place);
                    gotoxy(15,16);

                    printf("DURATION: %s",customer.duration);
                    gotoxy(15,17);

                    printf("NOTE: %s",customer.note);

            fclose(fpte);
            gotoxy(15,18);

            printf("WOULD YOU LIKE TO EDIT ANOTHER RECORD.(Y/N)    ");

            scanf("%c",&choice);

            count++;

        }

        else

        {
            gotoxy(15,19);
            printf("THE RECORD DOES NOT EXIST::\n");
            gotoxy(15,20);

            printf("WOULD YOU LIKE TO TRY AGAIN...(Y/N)    ");

            scanf("%c",&choice);

        }

    }
    while(choice=='Y'||choice=='y');

    fclose ( fpte ) ;
    fflush(stdin);
    if(count==1){
        gotoxy(15,19);

        printf(" %d FILE IS EDITED...",count);}

    else if(count>1){
        gotoxy(15,19);
        printf("%d FILES ARE EDITED..",count);}

    else{
    gotoxy(15,19);
        printf("NO FILES EDITED...");}
gotoxy(15,20);
printf("PRESS ENTER TO EXIT EDITING MENU.");
getch();
fflush(stdin);
    note();
}

void deleterecord( )

{

    system("cls");
    fflush(stdin);
    Nrectangle();
    print_heading_2("DELETE RECORD");
    fflush(stdin);

    FILE *fp,*fptr ;

    struct record file ;

    char filename[15],another = 'Y',time[10];

    int choice,check;
    while ( another == 'Y' )

    {

        gotoxy(15,9);
        printf("HOW WOULD YOU LIKE TO DELETE.");
        gotoxy(15,10);
        printf("DELETE WHOLE RECORD\t\t\t[1]");
        gotoxy(15,11);

        printf("DELETE A PARTICULAR RECORD BY TIME\t[2]");

        do

        {
            gotoxy(15,12);
            printf("ENTER YOU CHOICE:");

            scanf("%d",&choice);
            cleanskin_2();
            switch(choice)

            {

            case 1:
                gotoxy(15,11);
                printf("ENTER THE DATE OF RECORD TO BE DELETED:[yyyy-mm-dd]:");

                fflush(stdin);

                gets(filename);

                fp = fopen (filename, "wb" ) ;

                if ( fp == NULL )

                {

                    printf("THE FILE DOES NOT EXISTS");

                    printf("PRESS ANY KEY TO GO BACK.");

                    getch();

                    note();

                }

                fclose(fp);

                remove(filename);
                gotoxy(15,13);
                printf("DELETED SUCCESFULLY...");

                break;

            case 2:
                gotoxy(15,11);

                printf("ENTER THE DATE OF RECORD:[yyyy-mm-dd]:");

                fflush(stdin);

                gets(filename);

                fp = fopen (filename, "rb" ) ;

                if ( fp == NULL )

                {

                    printf("\nTHE FILE DOES NOT EXISTS");

                    printf("\nPRESS ANY KEY TO GO BACK.");

                    getch();

                    deleterecord();

                }

                fptr=fopen("temp","wb");

                if(fptr==NULL)

                {

                    printf("SYSTEM ERROR");

                    printf(" PRESS ANY KEY TO GO BACK");

                    getch();

                    deleterecord();

                }
                gotoxy(15,12);
                printf("ENTER THE TIME OF RECORD TO BE DELETED:[hh:mm]:");

                fflush(stdin);

                gets(time);

                while(fread(&file,sizeof(file),1,fp)==1)

                {

                    if(strcmp(file.time,time)!=0)

                        fwrite(&file,sizeof(file),1,fptr);

                }

                fclose(fp);

                fclose(fptr);

                remove(filename);

                rename("temp",filename);

                printf("DELETED SUCCESFULLY...");

                break;

            default:
                gotoxy(15,11);

                printf("YOU ENTERED WRONG CHOICE");

                break;

            }

        }
        while(choice<1||choice>2);
        gotoxy(15,18);

        printf("DO YOU LIKE TO DELETE ANOTHER RECORD.(Y/N):");

        fflush(stdin);

        scanf("%c",&another);

    }
    gotoxy(15,20);

    printf("PRESS ANY KEY TO EXIT...");

    getch();
    note();

}

void Nrectangle()
{





    system("color 3F");

    int i, j;
    gotoxy(0,0);
    printf("\xB2");
    for(i = 1; i < 78; i++)
    {
        gotoxy(i, 0);
        printf("\xB2");
    }
    gotoxy(78,0);
    printf("\xB2");
    for(i = 1; i < 25; i++)
    {
        gotoxy(78, i);
        if(i == 6)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }
    gotoxy(78, 25);
    printf("\xB2");
    for(i = 77; i > 0; i--)
    {
        gotoxy(i,25);
        if(i == 35)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }
    gotoxy(0,25);
    printf("\xB2");
    for(i = 24; i > 0; i--)
    {
        gotoxy(0,i);
        if(i == 6)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }

    for(i = 1; i < 78; i++)
    {
        gotoxy(i,6);
        if(i == 35)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }

    /*  for(i = 7; i < 25; i++)
      {
          gotoxy(35,i);
          printf("\xB2");
      }*/



}
void print_heading_2(const char st[])
{

    gotoxy(30,2);
    printf("\xB2- : %s : -\xB2",st);
    gotoxy(20,4);
    printf("\xB2- DAFFODILL INTERNATIONAL UNIVERSITY -\xB2");

}
void cleanskin_2()
{
    int i=2,j=10,z;
    while(j!=25){
        gotoxy(i,j);
        for(z=0;z<=70;z++)
            printf(".");
        printf("\n");
        j++;
    }

}


