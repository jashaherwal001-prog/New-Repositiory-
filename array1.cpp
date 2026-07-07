#include<iostream>
using namespace std;

int main(){
    int arr[5]={0,1,2,3,4};
    int answer=INT32_MAX;
    int answer1=INT32_MIN;
    //min
    for(int i=0;i<5;i++){
        if(answer>arr[i]){
            answer=arr[i];
        }
    }
    cout<<answer<<endl;
    
    //max
    for(int i=0;i<5;i++){
        if (answer1<arr[i]){
            answer1=arr[i];
        }
    }
    cout<<answer1<<endl;
return 0;
}
