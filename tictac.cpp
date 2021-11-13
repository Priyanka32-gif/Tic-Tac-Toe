#include<iostream>
#include<string.h>
using namespace std;

string p1,p2;
char turn = 'X';
int choice, result=2,i;
char arr[11] = {'0','1','2','3','4','5','6','7','8','9'};

void Display(){
	system("cls");
	cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[1]<<"  |  "<<arr[2]<<"  |  "<<arr[3]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[4]<<"  |  "<<arr[5]<<"  |  "<<arr[6]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[7]<<"  |  "<<arr[8]<<"  |  "<<arr[9]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
}
void Turn(){
	if(turn == 'X'){
		cout<<"Player1's turn :";
	}
	else if (turn == 'O'){
		cout<<"Players2's turn :";
	}
		cin>>choice;
}

void Switch(){
	if((turn == 'X') && (arr[choice] != 'X' && arr[choice] != 'O')){
		arr[choice] = turn;
		turn = 'O';
	}
	else if((turn == 'O') && (arr[choice] != 'X' && 'O')){
		arr[choice] = turn;
		turn = 'X';
	}
	else{
		cout<<"Invalid move!";
	}
	Display();
}

int GameOver(){
	if(arr[1] == arr[2] &&arr[2] == arr[3]){
	result = 1;
	return result;}
	else if(arr[4] == arr[5]&&arr[5]== arr[6]){
	result = 1;
	return result;}
	else if(arr[7] == arr[8]&&arr[8] == arr[9]){
	result = 1;
	return result;}
	else if(arr[1] == arr[5]&&arr[5] == arr[9]){
	result = 1;
	return result;}
	else if(arr[1] == arr[4]&&arr[4] == arr[7]){
	result = 1;}
	else if(arr[2] == arr[5]&&arr[5] == arr[8]){
	result = 1;
	return result;}
	else if(arr[3] == arr[6]&&arr[6] == arr[9]){
	result = 1;
	return result;}
	else if(arr[3] == arr[5]&&arr[5] == arr[7]){
	result = 1;
	return result;}
	for(i=1; i<10; i++)
	if((arr[i] == 'X')|| (arr[i] == 'O')&& (result == 2)){
		cout<<"Draw!";
    
	}
	
}

int main(){
	Display();
	
	while(GameOver()){
	Turn();
	if((choice>0)&&(choice<=9))
	Switch();
	if (result == 1)
	break;
}

if((result==1) && (turn == 'X')){
	cout<<" Congratulation !!player1 win !";
}
else if ((result == 1) && (turn == 'O')){
	cout<<"Congratulation !! Player2 win!";
}


return 0;
}

