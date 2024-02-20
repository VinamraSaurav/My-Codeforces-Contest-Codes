#include <iostream>
#include <vector> // Include the vector header file

using namespace std;

void possible(vector<int>cont,int req){
         int same =1;
         int totalExtra=0;
         for(int i=0; i<cont.size(); i++){
            if(cont[i]>=req){
                int extra = cont[i]-req;
                cont[i]=req;
                totalExtra = totalExtra+extra;
             
            }
            else if(cont[i]<req && totalExtra>0){
                int needed = req-cont[i];
                if(totalExtra>=needed){
                    cont[i]=req;
                totalExtra = totalExtra-needed;

                }
                else{
                    cont[i]=totalExtra;
                    totalExtra =0;
                    same=0;
                }
                
              
            }
            else{
                same = 0;
            }
         }
         if(same){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
    }

int main() {
    int t; 
    cin >> t;


    for (int i = 0; i < t; i++) {
        int containers;
        cin >> containers;
            vector<int> g1; 

         int sum =0;
        for (int j = 0; j < containers; j++) {
            int water_units;
            cin >> water_units;
            g1.push_back(water_units); 
            sum = sum+water_units;
        }
        int targetValue=sum/containers;

        possible(g1,targetValue);
    }



    return 0;
}