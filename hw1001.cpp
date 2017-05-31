#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//引入變數
	int number_of_bars,one_weight;
	double a;
	
	//到小數點後第三位
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

	/*
	//比較不同cin的差別
	cin>>number;
	cin>>size;

	cin>>number>>size;
	cin>>number
	   >>size;
	*/
	
	//輸出
	cout<<"Enter the number of bars(an integer): ";
    cin>>number_of_bars;
	cout<<"Enter the weight of one bar(an integer): ";
	cin>>one_weight;

	//比較不同cout的差別
	cout<<"\n\n這是第一次嘗試：\n";
	cout<<number_of_bars<<" candy bats\n";
	cout<<one_weight<<" ounces each\n\n";

	cout<<"這是第二次嘗試：\n";
	cout<<number_of_bars<<" candy bats\n"<<one_weight<<" ounces each\n\n";

	cout<<"這是第三次嘗試：\n";
	cout<<number_of_bars<<" candy bats\n"
	    <<one_weight<<" ounces each\n\n\n\a\a\a";

	//輸出平方根
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

 