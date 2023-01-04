// Demonstrates conversion
// from character array to string
#include<dirent.h>
#include <bits/stdc++.h>
using namespace std;
#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif
// converts character array
// to string and returns it
string convertToString(char* a)
{
	int i;
	string s = "";
	for (i = 0; i < sizeof(a)/sizeof(char); i++) {
		s = s + a[i];
	}
	return s;
}

string yyy(){
   struct dirent *d;
   DIR *dr;
   dr = opendir(".");
   if(dr!=NULL)
   {
      cout<<"List of Files & Folders:-\n";
      string s = "";
      for(d=readdir(dr); d!=NULL; d=readdir(dr))
      {
         string t = "\n";
         string a = d->d_name+t;
         s = s + a;
      }
      closedir(dr);
      return s;
   }
   else
      cout<<"\nError Occurred!";
   cout<<endl;
   return 0;
}

// Driver code
int main()
{
	char buff[FILENAME_MAX];
   GetCurrentDir( buff, FILENAME_MAX );
   string current_working_dir(buff);
   cout << current_working_dir;
}
