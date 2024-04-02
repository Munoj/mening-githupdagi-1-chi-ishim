#include<iostream> 
#include<string.h>
#include<stdlib.h>
using namespace std; 
class hayvonlar{ 
 private : 
 string oilasi; 
 string turi; 
 int nomi; 
 string hajmi; 
 float sifati; 
 string rangi;

 public : 
  void show() 
  { 
   static int k=0; 
   cout<<++k<<" -hayvonlar "<<endl<<endl; 
   cout<<"oilasi: "<<oilasi<<endl; 
   cout<<"turi: "<<turi<<endl; 
   cout<<"nomi: "<<nomi<<endl; 
   cout<<"hajmi: "<<hajmi<<endl; 
   cout<<"sifati: "<<sifati<<endl; 
   cout<<"rangi: "<<rangi<<endl;
   
  }; 
  
  void input(){ 
   static int k=0; 
   
   cout<<++k<<" - hayvonlar"<<endl<<endl; 
   cout<<"oilasi: ";cin>>oilasi; 
   cout<<"turi: ";cin>>turi; 
   cout<<"nomi: ";cin>>nomi; 
   cout<<"hajmi: ";cin>>hajmi; 
   cout<<"sifati: ";cin>>sifati; 
   cout<<"rangi: ";cin>>rangi; 
   cout<<endl; 
  }; 
  void qidir(){ 
  int k; cout<<"Izlash turini kiriting: "<<endl;
  cout<<"oilasi: 1 "<<endl; 
   cout<<"turi: 2 "<<endl; 
   cout<<"nomi: 3 "<<endl; 
   cout<<"hajmi: 4 "<<endl; 
   cout<<"sifati: 5 "<<endl; 
   cout<<"rangi: 6 "<<endl; 
      cin>>k;
	  if(k==1){
	  	string s;
	  	cout<<endl<<"Qidiriliyotgan hayvonning oilasini kriting";cin>>s; 
	  	if(oilasi.compare(s)==0){
		  cout<<"Bunday nomli oilalar mavjud"; 
		  show(); }}
		  
		   if(k==2){
	  	string s;
	  	cout<<endl<<"Qidiriliyotgan hayvonning turini kriting";cin>>s; 
	  	if(turi.compare(s)==0){
		  cout<<"Bunday hayvon turi mavjud"; 
		  show(); }}
		  
		   if(k==3){
	  	int s;
	  	cout<<endl<<"Qidiriliyotgan hayvoning nomi kriting";cin>>s; 
	  	if(nomi==s){
		  cout<<"Bunday nomli hayvon mavjud"; 
		  show(); }}
		  
		   if(k==4){
	  	string s;
	  	cout<<endl<<"Qidiriliyotgan hayvoning hajmi kriting";cin>>s; 
	  	if(hajmi.compare(s)==0){
		  cout<<"Bunday hayvoning hajmi mavjud"; 
		  show(); }}
		  
		   if(k==5){
	  	float s;
	  	cout<<endl<<"Qidiriliyotgan hayvoning sifatini kriting";cin>>s; 
	  	if(sifati==s){
		  cout<<"Bunday hayvoning sifati mavjud"; 
		  show(); }}
		  if(k==3){
		  
		   if(k==6){
	  	string s;
	  	cout<<endl<<"Qidiriliyotgan hayvoning rangini kriting";cin>>s; 
	  	if(rangi.compare(s)==0){
		  cout<<"Bunday hayvonning rangi mavjud"; 
		  show(); }}
		  
		   if(k==7){
	  	string s;
	  	}
	  }
}
}; 
int main() { 
 hayvonlar t[100]; 
 int N;cout<<"hayvonlar sonni kriting";cin>>N;  
 for(int i=0;i<N;i++) 
 { 
  t[i].input(); 
 } 
  
 for(int i;i<N;i++) 
 { 
  t[i].qidir(); 
  }
}
 
// string d; 
// cout<<endl<<"Qidiriliyotgan mevaning hajmini kriting";cin>>s; 
//  
// for(int i;i<N;i++) 
// { 
//  t[i].qidir1(d); 
// } }
