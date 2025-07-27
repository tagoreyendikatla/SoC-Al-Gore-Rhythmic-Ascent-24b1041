#include<bits/stdc++.h>
using namespace std;

//define a class with three attributes, arr, size, start(beginning), count(to keep tract no of elements)
class ShiftableArray{
    private:
    int* arr;
    int size;
    int start;
    int count;

    public:
    ShiftableArray(int capacity): size(capacity), start(0), count(0){
        arr = new int[size]{0};     //initialize to 0
    }

    void push(int value){
        if(count>=size){
            cerr<<"Error: array full!\n";
            return;
        }
        int End = (start+count)% size;
        arr[End]= value;
        count++;
    }
    
    int pop(){
        if(count<=0){
            cerr<< "error: array empty!\n";
            return -1;
        }
        int val = arr[start];
        start = (start+1)%size;
        count--;
        return val;
    }

    void shiftleft(){
        if(count==0)return;
        start = (start+1)%size;
        count--;
    }

    void shiftright(){
        if(count==0)return;
        start = (start-1+size)%size;
        count++;
    }

    int get(int index){
        if(index<0 || index >=count){
            cerr<< "error: index out of range!\n";
            return -1;
        }
        return arr[(start+index)%size];
    }

    void print(){
        cout<<"[";
        for(int i=0; i<count; i++){
            cout<<get(i)<<" ";
        }
        cout<<"]";
    }

    ~ShiftableArray(){
        delete[] arr;
    }
};

int main(){
    ShiftableArray arr(5);

    arr.push(10);
    arr.push(20);
    arr.push(30);
    arr.print();

    arr.shiftleft();
    arr.print();

    arr.shiftright();
    arr.print();

    return 0;
}