// Star Pattern using User Input 
  
 #include <iostream> 
 using namespace std; 
  
 int main()  
 { 
  
   int a; 
   cout << "Enter the number of rows: "; 
   cin >> a; 
  
   for(int i=1; i<=a; i++) { 
     for(int j=1; j<=i; j++) { 
       cout << "*";  
     } 
     cout << endl;  
   } 
  
   return 0; 
 }
