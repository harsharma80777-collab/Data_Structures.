// #include <iostream>
// using namespace std;

// int main() {

// // a b c d e 
// // a b c d e 
// // a b c d e 
// // a b c d e 
// // a b c d e 
// // a b c d e 
// // a b c d e 
//     int m , n; // Rectangle Star 
//     cin >> m; // number of rows
//     cin >> n; // number of columns
//     for (int i =1; i<=m ; i++){
//         for (int j = 1; j <= n ; j++){
//         cout << (char)(j+96) << " ";       // for aaaaaaa  bbbbbbb ccccccc  ddddddd  We would use i instead of j
//         }
//         cout << endl;
//     }
//   }
  

// //------------------>
// // 1
// // AB
// // 123
// // ABCD
// // 12345
// // ABCDEF
// // 1234567

// int main() {
//   int m , n; // Rectangle Star 
//   cin >> m; // number of rows
//   cin >> n; // number of columns
//   for (int i =1; i<=m ; i++){
//       if (i%2!=0){
//          for (int j = 1; j <= i ; j++)
//         cout << j ;
//       }
//       else {
//          for (int j = 1; j <= i ; j++)
//          cout << (char)(j+64);
//       }
//     cout << endl;
//   }
// }


// //----------------> Odd Number triangle then basic formula of it is (2*j-1)
// // 1 
// // 1 3 
// // 1 3 5 
// // 1 3 5 7 
// // 1 3 5 7 9 
// // 1 3 5 7 9 11 
// // 1 3 5 7 9 11 13

// int main(){
//   int m,n;
//   cin >> m>> n;
//   for (int i=1; i<=m ; i++){
//     for (int j=1; j<=i ; j=j+1){   
//       cout << 2*j-1 <<" ";
//     }
//     cout << endl;
//   }
// }

//  //Method 2 for Odd Number Triangle
//  int main(){
//   int n;
//   cin >> n;
//   for (int i=1; i<=n ; i++){
//     int a = 1;
//     for (int j=1; j<=i ; j=j+1){   
//       cout << a <<" ";
//       a = a + 2;
//     }
//  }

// }


// //----------------> 
// // 1
// // 2 3
// // 4 5 6
// // 7 8 9 10  

// int main(){
//   int n;
//   cin >> n;
//   int a = 1;  // yaha se intialisation and fir andar jayega to humesha badhke jayega thus we will get the required pattern
//   for (int i=1; i<=n ; i++){
//     for (int j=1; j<=i ; j=j+1){   
//       cout << a <<" ";    // or use cout << a++ <<" ";  to avoid writing a = a + 1; in next line
//       a++;
//     }
//     cout << endl;
//   }
// }

// //---------------->
// // 1
// // 0 1
// // 1 0 1
// // 0 1 0 1   (Isme hume 1 aur 0 alternate chahiye thus we will use the condition if (i+j)%2==0 then print 1 else print 0)

// int n;
//    cin >> n;
//    for (int i=1; i <=n; i++){
//      for (int j=1; j<=i;j++){
//        if ((i+j)%2==0)
//        cout << 1;
//        else cout << 0;
//      }
//      cout<< endl;
//    }

// //----------------> 
// //   *
// //   *  
// // *****
// //   *  
// //   *

// int n;
//   cin >> n;  // Only for odd n
//   for(int i=1; i<=n; i++){
//     for (int j=1; j<=n; j++){
//       if(i==(n+1)/2 || j==(n+1)/2) cout << "* "; //Add space after star to maintain the alignment of stars
//       else cout << "  ";  // Add double space to maintain the alignment of stars
//     }
//     cout << endl;

//   // For hollow square pattern use i==j==1 and i==j==n and for hollow rectangle pattern use i==1 and i==m and j==1 and j==n
//   } 

// //---------------->
// // *     *
// //  *   * 
// //   * *  
// //    *   
// //   * *  
// //  *   * 
// // *     *
//  int n ;
//   cin >> n;  // Only for odd n
//   for(int i=1; i<=n; i++){
//     for (int j=1; j<=n; j++){
//       if(i==j || (i+j)==(n+1)) cout << "*";
//       else cout << " ";
//     }
//     cout << endl;
//   } 

//   //---------------->
// //       *
// //      **
// //     ***
// //    ****
// //   *****
// //  ******
// // *******

// just use the condition if (i+j >= n) cout << "*"; else cout << " "; to get the required pattern

// //---------------->
// //     *****
// //    *****
// //   *****
// //  *****
// // *****
// int n;
//   cin >> n;
//   for (int i=1; i<=n; i++){ // rows
//     for (int j=1; j<=n-i; j++){ // Spaces
//     cout << " ";
//     }
//     for (int j=1; j<=n; j++){ // Stars   (if we replace i with n then we will get the upper triangle pattern)
//     cout << "*";
//     }
//     cout << endl;
//   }

// //---------------->
// //     *   
// //    ***
// //   *****
// //  *******  
// int n;
//   cin >> n;
//   for (int i=1; i<=n; i++){ // rows
//     for (int j=1; j<=n-i; j++){ // Spaces
//     cout << " ";
//     }
//     for (int j=1; j<=2*i-1; j++){ // Stars   (if we replace i with n then we will get the upper triangle pattern)
//     cout << "*";
//     }
//     cout << endl;
//   }