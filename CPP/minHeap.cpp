#include <iostream>
using namespace std;
define max 100;

int heap_arr[max];
int count=0;

int insert(int num){
	int i, int parent;
	if(count == max){
		heap_arr[count] = num;
		i=count;
		count++;
	}
	else return 0;
	while(i > 0 && heap_arr[i] < heap_arr[parent]){
		parent = (i-1)/2;
		int temp = heap_arr[i];
		heap_arr[i] = heap_arr[parent];
		heap_arr[parent] = temp;
		i = parent;
	}
	return 1;
}

int main(){
	int c;
	cin >> c;
	int num,key;
	while(c != 'e'){
		switch(c){
			case 'i' : cin >> num;
						int ret_val = insert(num);
						if (ret_val == 0)
							cout << "Number cannot be inserted." << endl;
						else 
							cout << num << " inserted." << endl;
						break;
			case 'd' : cin >> el >> key
				cout << "kEY" << endl;
				break;
		}
	}
}