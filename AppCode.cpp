#include <iostream>
#include <string>

using namespace std ;


    int main(){
    
        int total  ;
        int seated ;
        int amount ;
        string name ;
       cout<<"enter Name";
       cin>>name;

       cout<<"welcome " + name <<endl;
        
        cout << "Enter total & seated number of passangers :";
        cin >>total >> seated ;
        
         int tot = total - seated ;

         if (tot > 0){

         cout <<"There is " << tot<< " emty seats in the taxi" << endl ;
            
         cout << "_______________________________________________" <<endl ;
         
         cout << "Enter taxi fare" <<endl ;
         cin >>amount ;
         
         cout << "you have to give driver "<<"R " <<amount * seated <<endl ;
         cout << "________________________________________________" <<endl ;
         
         int i = 0 ;
         
         while (i <= 4){
             
             if (i != 4) {
         int noofpeople ;
         float fare ;
         float change ;
         
        
         do {
         cout << "Enter number of people and fare received " <<endl ;
         cin >> noofpeople>> fare ;
         change = fare - (noofpeople * amount) ;
         cout << "Give them "<<"R " <<change << " change " <<endl;
         }
         while(change <=0);

         int total1 = seated - noofpeople ;
        cout << "No of unpaid passangers: " << total1 <<endl;

        seated = total1 ;
         i++ ;
         
         }
         
         else {
             
          cout << "Taxi fare should be finalized"<<endl;   
          break ;
         }
         
         
         }
         }

         else {
             cout << " Taxi cant have a negative number" <<endl;
         }
         
    }
    
    
   