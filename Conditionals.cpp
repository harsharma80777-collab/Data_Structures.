// (1) If else / ladder

#include <iostream>
using namespace std;

int main(){
    // int N;
    // cin >> N;

// Question of divisiblity
    // if (N%5 == 0) cout << "Number "<< N << " is divisible by 5";
    // else cout << "Number is not divisible";
    
// Question for absolute value i.e. MOD of value
    // if (N>= 0) cout << N;
    // else cout << (-N);
    // return 0;

  // if u want to change it logically then 
    // if (N<0) N=-N;
    // cout << N;

// Profit-Loss question 
    // int CP , SP;
    // cin >> CP >> SP;
    // cout << "Cost Price = " << CP << endl;
    // cout << "Selling Price = " << SP << endl;
    // if (CP << SP) cout<< "Profit made " << "i.e " << SP-CP;
    // else cout << "Loss occured = " << CP-SP;
    // return 0;

// Area Question :
    // int L , B ;
    // cin >> L >> B ;
    // cout << " Length is = " << L << endl;
    // cout << " Breadth is = " << B << endl;
    // if ( L*B > 2*(L+B)) cout << "Area " << L*B << " of Rectangle is greater than it's Perimeter " << 2*(L+B) ;
    // else  cout << "Perimeter "<< 2*(L+B) << " of Rectangle is greater than it's Area " << L*B ;
    // return 0;

// Multiple Conditions (&& --> and || --> or)
    // int x;
    // cin >> x;
    // if (x > 99 and x < 1000 )  cout << "Required 3 digit Number";  //(> means strictly greater ) (we could simply use and as an operator too)

// --------->

    // if( x%5==0 && x%3==0) cout << " Number is divisible by both ";
    // else cout << "Choose an appropriate number";
    // if( x%5==0 or x%3==0) cout << " Number is divisible ";
    // else cout << "Choose an appropriate number";

// ---------->
    // int a, b, c;
    // cin >> a >> b >> c;
        // if (a+b>c && a+c>b && b+c>a) cout << "Yes, they form a valid triangle";
        // else cout << "Give appropriate sides";

// ---------->
        // if (a > b && a > c) cout << "Greatest number is " << a;
        // else if (b > c && b > a)  cout << "Greatest number is " << b;
        // else cout << "Greatest number is " << c;
// ----------->

    // int x;
    // cin >> x;
    //     if ((x%5==0 or x%3==0) and x%15!=0) cout << "Yes it is " << x;    //( here we have to use brackets as 5 and 3 is one common codition while 15 one's is another)
    //     else cout << "Give another appropriate number " ;
    //     return 0;

//<-------------------------->
    // int a, b, c;
    // cin >> a >> b >> c;
    // //Ages question:
    //     cout << "Age of Ram " << a << endl;
    //     cout << "Age of Shyam " << b << endl;
    //     cout << "Age of Ajay " << c << endl;
    //     if (a>b){
    //         if (a>c) cout << "Ram is greatest" ;
    //         else cout << "Ajay is greatest";
    //     }
    //     else if (b>a){
    //         if (b>c) cout << "Ram is greatest" ;
    //         else cout << "Ajay is greatest" ;
    //     }
        
//-------------->
  // Grade inputing
//   int m;
//   cin >> m;
//   cout << "Enter the marks :" << m << endl;
//     if (m >= 81 && m < 100) cout << "Very Good";
//   if (m >= 61 && m <= 80) cout << "Good";
//   if (m >= 41 && m <= 60) cout << "Average";
//   if (m<=40) cout << "Fail";
     //---------->
     //(Here we if we had used else if then we don't have to give the other codition of lesser than)

    //  else if (m >= 61 ) cout << "Good";
    //  else if (m >= 41 ) cout << "Average";
    //  else cout << "Fail";
   
    
//------------------>
  //Coordinate Question

//    int x,y;
//    cin >> x >> y;
//    cout << "Coordinate is "<< "(" << x << "," << y << ")"<< endl;
//    if (x>0 && y >0) cout << "Lies in the 1st Quad";
//    if (x<0 && y >0) cout << "Lies in the 2nd Quad";
//    if (x<0 && y >0) cout << "Lies in the 3rd Quad";
//    else if (x>0 && y <0) cout << "Lies in the 4th Quad";
//    else if (x=0) cout << "Lies on the y axis ";
//    else if (y=0) cout << "Lies on the x axis";
//    else cout << "point lies on the origin";



//<--------------(2)TERNARY OPERATOR------------->
//(it's also same as if else but just cool banne k liye aur line bachane k liye)     ======> Syntax-->expression 1?expression 2:expression 3; and that too without any if else as shown below
    // int n ;
    // cin >> n;
      //(condition) ? if true : if false ; 
        // (n%2==0) ? cout << "Even Number": cout << "Odd Number";


//<--------->(3)Switch Statement<---------->(Useless)  Case making Question

// Making of Calculator

int n1 ;
cin >> n1;
char op;
cin >> op;
int n2;
cin >> n2;
// if (op == '+') cout << a+b;
// if (op == '-') cout << a-b;
// if (op == '*') cout << a*b;
// if (op == '/') cout << a/b;

//Now Using Switch
//and we have to use break otherwise jo case accept ho jayega uske baad ka saara print hone lagega 

switch (op){
    case '+':
        cout << n1+n2 << endl;
    break;
    case '-':
        cout << n1-n2 << endl;
    break;
    case '*':
        cout << n1*n2 << endl;
    break;
    case '/':
        cout << n1/n2 << endl;
    break;
    
    default:
        cout << "Invalid operator";
}
}

