#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>

using namespace std;
int my_x,my_y,my_in;
int qian,bao;
int mp[100][100];
void out(){
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			if(j==my_x&&i==my_y)cout<<"��";
			else  if(mp[i][j]==1)cout<<"��";
			else cout<<"  ";
			
		}
		cout<<"\n";
	}
	cout<<"Ǯ"<<qian<<"��ʳ��"<<bao;
}
void shop(){
	system("cls");
	cout<<"�̵�";
	cout<<"\n\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	system("pause");
}
void in(){//���

	char tempin;
	tempin=0;
	tempin=getch();
	if(tempin=='w'){
		if(my_y>1){
			my_y--;
			bao--;
		}
		
	}
	else if(tempin=='d'){
		if(my_x<6){
			my_x++;
			bao--;
		}
		
	}
	else if(tempin=='a'){
		if(my_x>1){
			my_x--;
			bao--;
			
		}
	}
	else if(tempin=='s'){
		if(my_y<6){
			my_y++;
			bao--;
		}
	}
	else if(tempin=='f'){
		if(mp[my_y][my_x]=1){
			shop();
		}
	}

}

void chshihua(){
	mp[2][1]=1;
	my_x=1;
	my_y=1;
	bao=100;
}
int main(){
	chshihua();
	system("title �������2 a0.0.3_3");
	while(1){
		out();
		in();
		
		system("cls");
		
	}
	
	
}



