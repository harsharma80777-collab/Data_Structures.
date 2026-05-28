// (1) For loops:

// #include <iostream>
// using namespace std;
// int main(){
            // int n ;
            // cin >> n;
            // loop goes for 100 times so
            // for(int i=0;i<=n;i++){
            //  if (i%2==0) cout << i <<" ";
            
            // Table for 19
            // for(int i=1;i<=10;i=i+1){
            //     cout << "19x"<< i <<"= " << 19*i <<"\n";
            // }

            // for (int i=19 ; i<=190; i++){
            //     if(i%19==0) cout << i << " ";
            // }

            // A.P.of n terms:
                // int a = 4; // (Starting term)
                // for (int i=1 ; i<=i +(n-1)*3; i=i+3){
                //     cout << a << " ";
                //     a+=3; // adding common difference
                // }

            // -------->
                // int a , n;
                // cin >> a >> n;
                // for (int i=1 ; i<=n ; i++){
                //     cout << a << " ";
                //     a = a*2; // where 2 being the common ratio
                // }

            // -------->
            //  int a , n, r;
        //     cin >> a >> n >> r;
        //     for (int i=1; i <=n ; i ++){
        //         cout << a << " ";
        //         a=a*r;
        //   }

            // --------->for getting the highest factor other than n itself
                // int n;
                // int fact=1;  (Storing the highest factor)
                // cin >> n;
                // for (int i = 1 ; i<n ; i ++){
                //     if (n%i==0){
                //     fact= i;
                //     } 
                // }
                // cout << fact << " "; (Printing the highest factor)


                //<----------OR-----------> (running the loop backwards and getting the first factor we encounter would be the highest factor)

                // int n;
                // cin >> n;  
                // int f=1; (Storing the highest factor)  
                // for (int i=n/2 ; i >=1 ; i --){
                //     if (n%i==0){
                //     f= i;
                //     }
                // cout << f << " "; (Printing the highest factor)
                //     }

            // --------->  Composite number or Prime (When a number has more than 2 factors then it is a composite number)
                //    int n;
                //     cin >> n;
                //     // we will store it in a boolean 
                //     bool flag = false; //(Storing the result)  [ most commonly used is "flag"]
                //     for (int i=2 ; i<n ; i++){  //(if a number is found a factor between 2 and n-1 then it is a composite number)
                //         if (n%i==0){
                //             flag = true;
                //             break; // (Breaking the loop as we have found a factor)
                //         }
                //     }
                //     if (n==1) cout << "Neither Prime nor Composite"
                //     else if (flag == true ) cout << "Composite Number";
                //     else cout << "Prime Number";

            //---------------> continue; is used to skip a round while break; is used when u have to skip the whole loop

            // for (int i=1 ; i<=20; i++){
            //   if ( i==3 || i==8 ) continue; (Or simply use)
            //   // if (i!=3 && i!=8)
            //   cout << i << " ";
        // ------> Odd number using continue;
            // for (int i=1 ; i<=100; i++){
            //if ( i%2==0 ) continue;
            // cout << i << " ";
// }


// <----------(2) While loops: (It is used when we don't know the number of iterations like kitni baar chalega and multiple conditions)----------->

#include <iostream>
using namespace std;
int main(){
    // int i=1;
    // while(i<=10){
    //     cout << i << " ";
    //     i++;
    // }

    //------> Do while loop: (It is used when we want to execute the loop at least once even if the condition is false)
    // int i=3;
    // do{
    //   cout << i << endl;
    //   i++;
    // } while (i<=10);

    // O/P----> 3 4 5 6 7 8 9 10

//------------->Count the number of digits in a number (we will be using while loop becoz we don't knw how many digits are there in the number)

    // int n;
    // cin >> n;
    // int count = 0; (Storing the count of digits)
    // while (n>0){
    //     n=n/10; (Removing the last digit)
    //     count++; (Incrementing the count)
    // }
    // cout << count << " "; (Printing the count of digits)

//------------->Sum of digits in a number:

    // int n;
    // cin >> n;
    // int sum = 0; (Storing the sum of digits)
    // while (n>0){
    //     int lastDigit = n%10; (Getting the last digit)
    //     sum = sum + lastDigit; (Adding the last digit to the sum)
    //     n=n/10; (Removing the last digit)
    // }
    // cout << sum << " "; (Printing the sum of digits)

//-------------> Product of digits in a number:

    // int n;
    // cin >> n;
    // int product = 1; (Storing the product of digits)
    // while (n>0){
    //     int lastDigit = n%10; (Getting the last digit)
    //     product = product * lastDigit; (Multiplying the last digit to the product)
    //     n=n/10; (Removing the last digit)
    // }
    // cout << product << " "; (Printing the product of digits)

// -------------> Sum of even and odd digits in a number:

    // int n;
    // cin >> n;
    // int sumEven = 0; (Storing the sum of even digits)
    // int sumOdd = 0; (Storing the sum of odd digits)
    // while (n>0){
    //     int lastDigit = n%10; (Getting the last digit)
    //     if (lastDigit%2==0) sumEven = sumEven + lastDigit; (Adding the last digit to the sum of even digits if it is even)
    //     else sumOdd = sumOdd + lastDigit; (Adding the last digit to the sum of odd digits if it is odd)
    //     n=n/10; (Removing the last digit)
    // }
    // cout << "Sum of Even Digits: " << sumEven << endl; (Printing the sum of even digits)
    // cout << "Sum of Odd Digits: " << sumOdd << endl; (Printing the sum of odd digits)


//-------------> Reverse a number:

        //     int n;
        //   cin >> n;
        //   while(n!=0){
        //     int ld=n%10;
        //     cout << ld;
        //     n/=10;
        // }
//OR
//--------------> Reverse a number :
    // int n;
    // cin >> n;
    // int reverse = 0; (Storing the reverse of the number)
    // while (n>0){
    //     int lastDigit = n%10; (Getting the last digit)
    //     reverse = reverse*10 + lastDigit; (Adding the last digit to the reverse)
    //     n=n/10; (Removing the last digit)
    // }
    // cout << reverse << " "; (Printing the reverse of the number)

// --------------> Reverse and add the number and the reverse of the number 

        // int main() {
        //    int n;
        //    cin >> n;
        //    int org = n;
        //    int rev = 0;
        //   while(n!=0){
        //     int ld=n%10;
        //     rev = rev *10 + ld;
        //     n/=10;
        // }
        // int sum = org + rev;
        // cout << rev << endl << sum;
        // return 0 ; 
        // }
    
// --------------> Factorial of a number:

    // int n;
    // cin >> n;
    // int fact = 1; (Storing the factorial of the number)
    // while (n>0){
    //     fact = fact * n; (Multiplying the number to the factorial)
    //     n--; (Decreasing the number)
    // }
    // cout << fact << " "; (Printing the factorial of the number)

// --------------> Factorial of frst n numbers 
    // int n;
    // cin >> n;
    // int fact = 1; (Storing the factorial of the number)
    // for (int i=1 ; i<=n ; i++){
    //     fact = fact * i; (Multiplying the number to the factorial)
    //     cout << fact << " "; (Printing the factorial of the number)
    // }

// --------------> Fibonacci series:

    // int n;
    // cin >> n;
    // int a = 0; (Storing the first term of the Fibonacci series)
    // int b = 1; (Storing the second term of the Fibonacci series)
    // for (int i=1 ; i<=n ; i++){
    //     cout << a << " "; (Printing the first term of the Fibonacci series)
    //     int nextTerm = a + b; (Calculating the next term of the Fibonacci series)
    //     a = b; (Updating the first term to the second term)
    //     b = nextTerm; (Updating the second term to the next term)
    // }

// --------------> GCD of two numbers:
//Euclid's Algorithm for GCD of two numbers:
// gcd(a,b) = gcd(b, a%b) until b becomes 0 then gcd is 'a' (a>b) and (a%b) is the remainder when a is divided by b. This algorithm is based on the principle that the GCD of two numbers also divides their difference. Thus, we can replace the larger number with the difference of the two numbers until we reach a point where one of the numbers becomes zero. The non-zero number at this point will be the GCD of the original two numbers.


    // int a , b;
    // cin >> a >> b;
    // int gcd = 1; (Storing the GCD of the two numbers)
    // for (int i=1 ; i<=min(a,b) ; i++){
    //     if (a%i==0 && b%i==0) gcd = i; (Updating the GCD if it is a factor of both numbers)
    // }
    // cout << gcd << " "; (Printing the GCD of the two numbers)

// --------------> LCM of two numbers:

    // int a , b;
    // cin >> a >> b;
    // int lcm = max(a,b); (Storing the LCM of the two numbers)
    // while (true){
    //     if (lcm%a==0 && lcm%b==0) break; (Breaking the loop if the LCM is a multiple of both numbers)
    //     lcm++; (Increasing the LCM)
    // }
    // cout << lcm << " "; (Printing the LCM of the two numbers)

// -------------> ASCII value of Alphabets:

    // for (int i=65; i<=90; i++){
    // cout << i << " is ASCII value for " << char(i) << endl;
    // }
}
