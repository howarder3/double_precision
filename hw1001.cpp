#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//�ޤJ�ܼ�
	int number_of_bars,one_weight;
	double a;
	
	//��p���I��ĤT��
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

	/*
	//������Pcin���t�O
	cin>>number;
	cin>>size;

	cin>>number>>size;
	cin>>number
	   >>size;
	*/
	
	//��X
	cout<<"Enter the number of bars(an integer): ";
    cin>>number_of_bars;
	cout<<"Enter the weight of one bar(an integer): ";
	cin>>one_weight;

	//������Pcout���t�O
	cout<<"\n\n�o�O�Ĥ@�����աG\n";
	cout<<number_of_bars<<" candy bats\n";
	cout<<one_weight<<" ounces each\n\n";

	cout<<"�o�O�ĤG�����աG\n";
	cout<<number_of_bars<<" candy bats\n"<<one_weight<<" ounces each\n\n";

	cout<<"�o�O�ĤT�����աG\n";
	cout<<number_of_bars<<" candy bats\n"
	    <<one_weight<<" ounces each\n\n\n\a\a\a";

	//��X�����
	a=1;
	cout<<"N\tSquare Root\n"
	    <<"1\t"<<sqrt(a)<<endl;
	
	a++;
	cout<<"2\t"<<sqrt(a)<<endl;
	
	a++;
	cout<<"3\t"<<sqrt(a)<<endl;
	
	a++;
	cout<<"4\t"<<sqrt(a)<<endl;
	
	a++;
	cout<<"5\t"<<sqrt(a)<<endl<<endl<<endl;


	system("PAUSE");
	return 0;
}

 