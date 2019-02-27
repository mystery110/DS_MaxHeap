#include<iostream>
#include<sstream>
#include<vector>
#include<cstdlib>
using namespace std;

vector<int>element;

void strSplit(string );
void AddEle(int );
void RenewELe(int ,int);
void Show();
void Find(int x);

const char Split=' ';
int Heap[101],number_of_Ele=0;
int index_Find;


int main(){
	string s;
	cout<<"Please enter number"<<endl;
	getline(cin,s);
	strSplit(s);
	for(unsigned int i=element.size();i>0;i--){
		AddEle(element.at(0));
		element.erase(element.begin());
	}
	cout<<"Which element to be deleted and added"<<endl;
	getline(cin,s);
	strSplit(s);
	RenewELe(element.at(0),element.at(1));
	Show();
}


void AddEle(int x){
	if(number_of_Ele==101){
		cout<<"The Heap is full!!!"<<endl;
	}
	else{
		int i=++number_of_Ele;
		while((i!=1) && Heap[i/2]<x){
			Heap[i]=Heap[i/2];
			i/=2;
		}
		Heap[i]=x;}
}

void Show(){
	for (int i=1;i<=number_of_Ele;i++){
		cout<<Heap[i]<<" ";
	}
	cout<<endl;
}
	

void Find(int x){
	index_Find=1;
	while((Heap[index_Find]!=x)&&(index_Find<number_of_Ele)){
		index_Find++;
	}
}

void RenewELe(int x,int y){
	Find(x);
	Heap[index_Find]=y;
	int child=index_Find;
	int parent=child/2;
	while(parent>0){
		if(Heap[parent]>y){
			break;
		}
		Heap[child]=Heap[parent];
		child=parent;
		parent/=2;
	}
	Heap[child]=y;
}

void strSplit(string s){
	istringstream ss(s);
	string temp;
	int x;
	while(getline(ss,temp,Split)){
			x=stoi(temp);
			element.push_back(x);
	}
}




