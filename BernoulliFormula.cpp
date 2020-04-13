#include <iostream>
#include <cmath> 
using namespace std;

  
double n, p, i;
double combination;
double value; 
double sum = 0;

double facti(double i) 
{ 
  if ((i==0)||(i==1))
      return 1;
  else
      return i*facti(i-1);
}

double factx(double x) 
{ 
  if ((x==0)||(x==1))
      return 1;
  else
      return x*factx(x-1);
}

double factn(double n) 
{ 
  if ((n==0)||(n==1))
      return 1;
  else
      return n*factn(n-1);
}


double formula() 
{

cout << "Enter p, n, i" << endl;
cin >> p >> n >> i; 
double x = n - i;  
combination = (factn(n))/(factx(x)*facti(i)); 

value = pow(1-p,x) * combination * pow(p,i);  
sum += value; 

return value; 
}

int main() 
{
  bool y = true;
  bool x = false;  
  char choice; 
  while(y)
  {
    formula(); 
    cout << "Value: " << value << endl;
    cout << "Total Sum: " << sum << endl; 
    cout << "Do you want to continue" << endl;
    cin >> choice; 
    if(choice != 'y') {y = false;}
    else {y = true;}     
  } 
}

// 0.3456