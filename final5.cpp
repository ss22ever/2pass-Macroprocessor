#include<iostream>
#include<queue>
#include<string>
#include<fstream>
#include<sstream>
#include<map>
using namespace std;
int main()
{int MDTC=0,MNTC=1,MDLC=0,MDI=0,SP=-1,f=0;
queue <string> mq;
map <string,string> m; 
int a[10];
 string data,info,datae;
ifstream ifile,iifile,efile;        //ifstream
ofstream onfile,nfile; 
cout<<"contents in acd \n";
ifile.open("acd.txt");
while(ifile){ 
getline(ifile,data);               //read box
cout<<data;
cout<<"\n";
}
ifile.close();
cout<<"____________________________________________________\n";
ofstream ofile,otfile;             //ofstream
ofile.open("mdt.txt");
ifile.open("acd.txt");
onfile.open("mnt.txt");
otfile.open("inter.txt");
nfile.open("new.txt");
while (ifile)
{
getline(ifile,data);
//cout<<"....";
//cout<<data;
//cout<<"......";
if(data=="MACRO")
{getline(ifile,data);
//onfile<<data<<"\n";
cout<<"IN MDT \n";
while(data!="MEND")                            ////mdt mnt making
   {
    

	
	{MDTC++;
		
	ofile<<MDTC<<data<<"\n";                           ///mdt creation

	
	cout<<data<<"\n";
	getline(ifile,data);}
	}
	ofile<<"MEND"<<"\n";
	cout<<"____________________________________\n";
}

else
{
otfile<<data<<"\n";	                                         //intermediate file creation
}
}
ofile.close();
ifile.close();
ifile.open("mdt.txt");
getline(ifile,data);
onfile<<data<<"\n";                                       //mnt creation
while(ifile)
{                                  
getline(ifile,data);
if(data=="MEND")
{getline(ifile,data);
onfile<<data<<"\n";                                           //mnt creation
}
}

ifile.close();
ofile.close();
onfile.close();
otfile.close();
              


ifile.open("mnt.txt");                                         //checking from the intermediate file starts
iifile.open("inter.txt");
efile.open("mdt.txt");

km:while(getline(iifile,data)&&(!data.empty()))
{ int n,ni,ne,nee;
string str,stri,stre,stre1;
f=0;


//iifile>>data;

stringstream iiss(data);
iiss>>stri;

cout<<stri<<"\n*****";   
      ifile.seekg(0, ios ::beg);                                 //EVERY LINES FIRST WORD BEING DISPLAYED FROM THE INTER                     
 im:while(getline(ifile,info)&&(!info.empty()))
{ cout<<"line============="<<info<<"\n";
cout<<info<<"\n";
stringstream iss(info);
iss>>n>>str;
cout<<str<<"&&\n "; 
//if(str=="NULL")
 //{ cout<<" ";    } 
                                 //***** ERROR NO SENSE 
if(str==stri)
{cout<<"$$$$$$$$$$$$"<<str<<"\n.$$$$$$$$$$$$$$$$$$....";                           //INTER name IN MNT///YES// f=1
   
   {     f=1;                              //ALA PREPARATION
   	         
string y=data;
string s="";
char i;
stringstream ss(y);
ss>>noskipws;
cout<<"";
while((ss>>i))
{ //cout<<i;
	

ss>>noskipws;     //no skip white space
if(i==' '||i==',')
{                                                                          ////elements being stored in the queue from intermediate

	xy:while((ss>>i)&&(i!=','))
	{s.append(1,i);
	
	
	}
cout<<">.............+++=="<<s<<"\n";
mq.push(s);
//string a=mq.front();
//mq.pop();
//cout<<a<<"\n";

//push into string
if(i==',')
{
		s="";
		goto xy;
}
}
}
                                                                         
   	
   	
   	
   	
   }                          //ALA PREP ENDS
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
       efile.seekg(0, ios ::beg);
   em:while(getline(efile,datae)&&(!datae.empty())){                                            //mdt loop
	
	
	
	stringstream ise(datae);
	{ise>>ne;
	if(n==ne)
	 {        
	                                                                                              //map them
	{   
	{string y(datae);
string s="";
char i;
stringstream ss(y);
while((ss>>i))
{ //cout<<i;
	
                  //////yahan pe use some constraint so that mdt ka mend tak hi ho..use if name in mnt or something.....

if(i=='&')         //mdt mein ayegaaaa
{ s.append(1,i);
	while((ss>>i)&&(i!=','))
	{s.append(1,i);
	
	
	}
	
	
//cout<<s<<"\n";
//push into string

m[s]=mq.front();
mq.pop();
cout<<"}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}"<<m[s]<<"$$$"<<s<<"\n";}

if(i==',')
	s="";
}




}



                                                                                                       //goto km;


}                             //MAAAPPIINNGGGGG ENDSSSS

{  
 {getline(efile,datae);                            //seek pos
while(datae!="MEND") {
string y(datae);            //herenew
string s="";
char i;
stringstream ss(y);
ss>>noskipws;
ss>>i;
while((ss>>i))
{ //cout<<i;
	ss>>noskipws;
	


if(i=='&')
{s.append(1,i);
	while((ss>>i)&&(i!=','))
	{s.append(1,i);
	
	
	}
cout<<s<<"\n";



{nfile<<m[s];
}
//push into string
if(i==',')
	s="";





}
else nfile<<i;






}
 
nfile<<"\n";


getline(efile,datae);	
	//herenew	
	
	
	
}
} goto km;
          }


  }}          
 
	goto em;	
}


}





goto im;
}
	cout<<"out of loop";     //set the file pointer of mnt i.e ifile to start of file
            
			
			
			
			if(f==0&&data!="START"&&data!="END")
        {
	              cout<<"------------------------------------";
	             
	             
	              nfile<<data<<"\n";
	
	
	
	
	
	
        }			
			
			
			                                         
goto km;	
	
}
 
ifile.close();
iifile.close();
efile.close(); 







}

