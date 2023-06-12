 #include<iostream>
 #include<vector>
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
vector <char> s1;
for(char i='a';i<='z';i++)
s1.push_back(i);

for(auto i=s1.begin();i!=s1.end();i++)
cout<<*i;

for( auto i=s1.rbegin();i!=s1.rend();i++)
cout<<*i;

cout<<s1.size();

if( s1.empty())
cout<<" not empty vector";
else 
cout<<" empty vector";
cout<<endl;
//reference opretor to get  element at particular position
cout<<s1[3];
cout<<s1[4];
cout<<endl;

//at[g] is same as reference operator
cout<<s1.at(3);
cout<<s1.at(4);
//front and back used to prinnt element at front and  at the back
cout<<s1.front()<<s1.back();
//data used as pointer at first element 
 



//modifiers of vectors

//assign():replace values of elements with new one
 vector<int> v;
//print 10 five times
v.assign(5,10);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
		cout<<endl;
//assign for arrays 
int a[]={1,2,3,4,45,6,778,8,8};
int n=sizeof(a)/sizeof(a[0]);
v.assign(a,a+n);
//this n can be a number like +3,+2 or+n also
 for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
cout<<endl;
//insert fuction
//insert at particular position
v.insert(v.begin()+3,100);
for(auto x:v)
cout<<x<<"  ";
cout<<endl;
// insert at particular postion mmultiple times
v.insert(v.begin()+4,6,23);
//vector.insert(postion,times,value)
for(auto x:v)
cout<<x<<"  ";
cout<<endl;
//insert from one vector to other
vector<int> v1;
//vector.insert(postion_of_mainvector,startingpointofothervector,ending point of other vector)
//other vector is inserted  to main vector from sstarting pos to ending pos
v1.insert(v1.begin(),v.begin()+3,v.end());
for( auto x:v1)
cout<<x<<" ";

//clear is used to remove all the elment 
//vector.clear();


//erase is used to remove elements at articular position or range for elements
//syntax:
//vector.erase()
cout<<endl;
v1.erase(v1.begin()+1);
//use erase in range 
cout<<endl;
v1.erase(v1.begin()+1,v1.begin()+5);

for(auto x:v1)
cout<<x<<"  ";
cout<<endl;
//swap is used to interchange elemets
//vector1.swap(vector2)
v1.swap(v);
//emplace is used to insert at a particlar postion
//vector.emplace(vector.begin()+3,values);
v.emplace(v.begin(),22333);
for(auto x:v)
cout<<x<<"  ";

//emplace_back is  used to insert at the back of vector
//vector.emplace_back(value);

//copy one vector to other 
for( int i=0;i<v.size();i++)
v1.push_back(v[i]);
//another way using assignment operator

v1=v;
//another method v1<-v
copy(v.begin(),v.end(),back_inserter(v1));


//pass by value of vector
int fucttion( vector <int> a)
//pass by reffernce 
char funvction(vector<int>& a)


//   
 // initializing using fill() function

    fill(v1.begin(), v1.end(), 5);

//*********************************************************************



	return 0;
 }