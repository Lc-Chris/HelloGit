// ��������Ϸ

# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;


int main()
{
	int i,n,j,k,A,B,numOfGame=0,numOfWin=0;
	int guessArray[3],numArray[3];
	char ch='Y';
	bool flag1=true,flag2;
	
	srand(time(NULL));
	
	while(flag1){
		cout << "��Ҫ����Ϸ��Y/N����  "<<endl;
		cin >> ch;
		if (ch=='N') {
			cout<<"��һ������"<<numOfGame<<"�֣�"<<"Ӯ��" <<numOfWin<<"��,"<<"����"<<numOfGame-numOfWin<<"��"<<endl; 
			flag1=false;
		}
	
		if (ch=='Y'){
			i=0; n=1;flag2=true;
			++numOfGame;
			
			while (true){
				numArray[0]=rand()%10;
				numArray[1]=rand()%10;
				numArray[2]=rand()%10;
				if (numArray[0]!=numArray[1]
					&&numArray[0]!=numArray[2]
					&&numArray[1]!=numArray[2])
					break;
			}
			
			while (n<=7 && flag2){
				A=B=0;	
						
				cout << "���������²�����֣�" << endl;
				cin >> guessArray[0] >> guessArray[1] >> guessArray[2] ;
						
				for (k=0;k<=2;++k){
					if (guessArray[k]==numArray[k]) ++A;
					for (j=0;j<=2;++j){
					if (guessArray[k]==numArray[j] && j!=k) ++B;
					}
				}
				cout << A << 'A' << B << 'B' << endl;
				
				if (A==3) {
					++numOfWin ;
					cout << "��ϲ����¶�����" << endl; 
					flag2=false;
				}
				++n;
			}
				
			if (flag2) {
				cout <<"���ź�����û���ڹ涨�����ڲ¶ԡ�����";
				cout << numArray[0]<<numArray[1]<<numArray[2];
				cout<<endl;
			}
		}
	}
	
	return 0;
 } 
