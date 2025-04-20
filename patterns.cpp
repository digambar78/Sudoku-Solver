#include <iostream>
using namespace std; 


int main(){


//     for(int row=0; row<5; row=row+1){
//         for(int col=0; col<5; col=col+1){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }

// cout<<endl;

//     for(int row=1; row<=5; row=row+1){
//         for(int col=1; col<=5; col=col+1){
//             cout<<col*col<<" ";
//         }
//         cout<<endl;
//     }

// cout<<endl;

// char name = 'a';
//     for(int row=1; row<=5; row=row+1){
//         for(int col=1; col<=5; col=col+1){
//             cout<<name<<" ";
//         }
//         cout<<endl;
//         name++;
//     }

// cout<<endl;

   
//     for(int row=1; row<=5; row=row+1){
//          char name = 'a';
//         for(int col=1; col<=5; col=col+1){
//             cout<<name<<" ";
//             name++;
//         }
//         cout<<endl;
        
//     }


//     cout<<endl;
//     int n = 1;
//     for(int row=1; row<=5; row=row+1){
//         for(int col=1; col<=5; col=col+1){
//             cout<<n<<" ";
//             n++;
//         }
//         cout<<endl;
//     }



    // cout<<endl;
    
    // for(int row=1; row<=5; row=row+1){
    //     for(int col=1; col<=row; col=col+1){
    //         cout<<'*'<<" ";
           
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;
    // int n=1;
    // for(int row=1; row<=5; row=row+1){
    //     for(int col=1; col<=row; col=col+1){
    //         cout<<row<<" ";
            
           
    //     }
    //     cout<<endl;
    // }


    // cout<<endl;
    
    // for(int row=1; row<=5; row=row+1){
    //     for(int col=row; col>=1; col=col-1){
    //         cout<<col<<" ";
            
           
    //     }
    //     cout<<endl;
    // }


//     cout<<endl;

//    char name = 'a';
//     for(int row=1; row<=5; row=row+1){
         
//         for(int col=1; col<=row; col=col+1){
//             cout<<name<<" ";
            
//         }
//         cout<<endl;
//         name++;
        
//     }


//     cout<<endl;

//    char name = 'a';
//     for(int row=1; row<=5; row=row+1){
         
//         for(int col=1; col<=row; col=col+1){
//             cout<<name<<" ";
//             name++;
//         }
//         cout<<endl;
        
        
//     }

  
    // for(int row=1; row<=5; row=row+1){
    //     for(int col=5; col>=row; col=col-1){
    //         cout<<'*'<<" ";
           
    //     }
    //     cout<<endl;
    // }
//////////////

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

//     for(int row=1; row<=5; row=row+1){
//         int n = 1;
//         for(int col=5; col>=row; col=col-1){
//             cout<<n<<" ";
//             n++;
//         }
        
//         cout<<endl;
        
//     }

// cout<<endl;
///////////////////
// 5 
// 5 6 
// 5 6 7 
// 5 6 7 8 
// 5 6 7 8 9 
    // for(int row=1; row<=5; row=row+1){
    //     int n = 5;
    //     for(int col=1; col<=row; col=col+1){
    //         cout<<n<<" ";
    //         n++;
    //     }
        
    //     cout<<endl;
        
    // }

//cout<<endl;
    /////////
// int col;
//     for(int row=1; row<=5; row=row+1){
        
//         for(col = 1;col<=5-row;col=col+1){
//             cout<<"  ";
//         }

//         for(col=1; col<=row; col=col+1){
//             cout<<'*'<<" ";
            
//         }
        
//         cout<<endl;
        
//     }

//     cout<<endl;
int col;
    for(int row=1; row<=5; row=row+1){
        char name = 'a';
        for(col=1; col<=5-row; col=col+1){
            cout<<"  ";
        }
        for(int col=1; col<=row; col=col+1){
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
       
        
    }


}