// CREATED BY MUHAMMAD HANAN ASGHAR
// PYTHONIST
#include <iostream>
using namespace std;
class LinearSearch{
  private:
  int *arr;
  int arraySize;
  public:
  LinearSearch(int size){
    arr = new int[size];
    arraySize = size;
  }
  void EnterData(){
    for(int i=0;i<arraySize;i++){
      cout<<"Enter Data - "<<i<<" : ";
      cin>>arr[i];
    }
  }
  void Display(){
    for(int i=0;i<arraySize;i++){
      cout<<arr[i]<<" - ";
    }
  }
  void Search(int data){
    for(int i=0;i<arraySize;i++){
      if(data == arr[i]){
        cout<<"Your Data Found At - "<<i<<" : "<<data;
        break;
      }
    }
  }
};

int main() {
  LinearSearch l(5);
  l.EnterData();
  cout<<endl;
  l.Display();
  cout<<endl;
  l.Search(12);
}
