#include<iostream>
#include<conio.h>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char user = 'x';
int n;
void draw()
{
	system("cls");
	cout << "************WELCOME TIC TOC TOE GAME*************\n\n\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void input()
{
	int n;
	cout << "\nits " << user << "\npress the number of field:";
	cin >> n;
	if (n == 1)
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			input();
		}
	}

	else if (n == 2)
	{
		if (matrix[0][1] == '2')
			matrix[0][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			input();
		}
	}
	else if (n == 3)
	{
		if (matrix[0][2] == '3')
			matrix[0][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			input();
		}
	}
	else if (n == 4)
	{
		if (matrix[1][0] == '4')
			matrix[1][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			input();
		}
	}
	else if (n == 5)
	{
		if (matrix[1][1] == '5')
			matrix[1][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			input();
		}
	}
	else if (n == 6)
	{
		if (matrix[1][2] == '6')
			matrix[1][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			input();
		}
	}
	else if (n == 7)
	{
		if (matrix[2][0] == '7')
			matrix[2][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			input();
		}
	}
	else if (n == 8)
	{
		if (matrix[2][1] == '8')
			matrix[2][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			input();
		}
	}
	else if (n == 9)
	{
		if (matrix[2][2] == '9')
			matrix[2][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			input();
		}
	}
}
void toggleplayer()
{
	if (user == 'x')
		user = 'o';
	else
		user = 'x';
}
char win()
{
	//first player......
	if (matrix[0][0] == 'x' && matrix[0][1] == 'x' && matrix[0][2] == 'x')
		return 'x';
	if (matrix[1][0] == 'x' && matrix[1][1] == 'x' && matrix[1][2] == 'x')
		return 'x';
	if (matrix[2][0] == 'x' && matrix[2][1] == 'x' && matrix[2][2] == 'x')
		return 'x';
	if (matrix[0][0] == 'x' && matrix[1][0] == 'x' && matrix[2][0] == 'x')
		return 'x';
	if (matrix[0][1] == 'x' && matrix[1][1] == 'x' && matrix[2][1] == 'x')
		return 'x';
	if (matrix[0][2] == 'x' && matrix[1][2] == 'x' && matrix[2][2] == 'x')
		return 'x';
	if (matrix[0][2] == 'x' && matrix[1][1] == 'x' && matrix[2][0] == 'x')//for diagonals
		return 'x';
	if (matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] == 'x')//for cross diagonals
		return 'x';
	//second player........
	if (matrix[0][0] == 'o' && matrix[0][1] == 'o' && matrix[0][2] == 'o')
		return 'o';
	if (matrix[1][0] == 'o' && matrix[1][1] == 'o' && matrix[1][2] == 'o')
		return 'o';
	if (matrix[2][0] == 'o' && matrix[2][1] == 'o' && matrix[2][2] == 'o')
		return 'o';
	if (matrix[0][0] == 'o' && matrix[1][0] == 'o' && matrix[2][0] == 'o')
		return 'o';
	if (matrix[0][1] == 'o' && matrix[1][1] == 'o' && matrix[2][1] == 'o')
		return 'o';
	if (matrix[0][2] == 'o' && matrix[1][2] == 'o' && matrix[2][2] == 'o')
		return 'o';
	if (matrix[0][2] == 'o' && matrix[1][1] == 'o' && matrix[2][0] == 'o')
		return 'o';
	if (matrix[0][0] == '0' && matrix[1][1] == '0' && matrix[2][2] == '0')
		return '0';
	return '/';
}
void  main()
{
	n = 0;
	draw();
	while (1)
	{
		n++;
		input();
		draw();
		if (win() == 'x')
		{
			cout << "x wins!" << endl;
			break;
		}
		else if (win() == 'o')
		{
			cout << "o wins!" << endl;
			break;
		}
		else if (win() == '/' && n == 9)
		{
			cout << " draw!" << endl;
			break;
		}
		toggleplayer();
	}
	system("pause");
	_getch();
}






//how to print spl characters
//
//#include<iostream>
//using namespace std;
//void main()
//{
//
//	cout << "\"hello world" << endl;
//}