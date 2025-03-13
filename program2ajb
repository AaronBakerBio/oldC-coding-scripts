// Aaron Baker CS162 (Karla Fant) 
// Explanation

#include <iostream> // main library of input output
#include <iomanip> // for precision
#include <cctype> //for string comparison
#include <cstring> // for string operations

using namespace std;

const int SIZE = 30;
void menu(void); // This menu will output the main messages
void menu_choice(void); // This menu will allow the user to choose encodeing or decoding
void encoder(void); // prototype menu for encoding
int main()
{
	int menu_loop_1{0};// Loop that contains main body of program. Exited by menu_prompt
	char menu_prompt; // used for whether a user wishes to continue using the menu
        while (menu_loop_1 == 0){
	menu();
	do { 
		cout << "Continue using function? (y/n)?\n";
		cin >> menu_prompt;
		if (menu_prompt == 'y'){
			menu();
	}
		else if (menu_prompt == 'n'){
			++menu_loop_1;
			cout << "Thanks for using menu";
			cout << menu_loop_1;
	}
		else {
			cout << "Invalid input \n" ;
		}
	}	
	while (menu_prompt != 'y' && menu_prompt != 'n');
	}
	return 0;
}

void menu(void){
	char sub_menu; // choice dictates which submenu, encode or decode is accessad
	int menu_loop{0}; // Loops the sub_menu options. Potential to allow user to keep using program
	cout << "Welcome to the encode and decode menu! This menu was created so that students\n";
	cout << "Could encode or decode files for the PDX-Canvas system! \n";
	while (menu_loop == 0){
		cout << "Would you like to decode (d) or encode (e)";
		cin >> sub_menu;
		cin.ignore(100, '\n');
		if (sub_menu == 'e')
		{
			cout << "Encoding chosen \n";
			encoder();
			++menu_loop; 
		}
		else if (sub_menu == 'd')
		{
			cout << "Decoding chosen\n";
			++menu_loop;
		}
		else {
			cout << "Invalid entry \n";
			}
	}
}
void encoder(void){
	char last_name[SIZE]; // Stores last name
	char first_name[SIZE]; // stores first name
	int time_sub; // stores time of submission
	char late; // stores a value for late or not late
	int late_loop{0};
	char lateness[SIZE];
	int student_id; // stores student id
	char  file_name; // stores file's name
	cout << "Enter the last name\n";
	cin >> last_name;
	cin.ignore(100, '\n');
	cout << "Enter the first name\n";
	cin >> first_name;
	cin.ignore(100, '\n');
	cout << "Enter the submission time\n";
	cin >> time_sub;
	while (late_loop == 0){
	cout << "Is the assignment late? y/n :" ;
	cin >> late;
	if (late == 'y'){
		lateness[0] = 'L';
		++late_loop;
	}
	else if (late == 'n'){
		++late_loop;
	}
	else {
		cout << "Invalid entry, try again\n";
	}
			}
	cout << "What is the file name? "; 
	cin >> file_name; 
	cin.ignore(100,'\n');
	cout << " What is the id number (numbers only)";
	cin >> student_id; 
}

	
