//============================================================================
// Name        : A3.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
int max( int data[], std::size_t capacity);
void reverse( int data[], std::size_t capacity);
void rotate( int data[], std::size_t capacity, unsigned int rotate_by );
int main() {
	int test[7]={2,1,6,3,9,4,7};
	std::cout<<max(test,5)<<std::endl;
	reverse(test,7);
	std::cout<<std::endl;
	int test2[7]={ 1, 2, 3, 4, 5, 6, 7 };
	rotate(test2,7,2);

	return 0;
}

int max( int data[], std::size_t capacity){
	int max = 0;
	for(size_t i = 0;i < capacity;++i){
		if(data[i]>max){
			max = data[i];
		}
	}
	return max;
}
void reverse( int data[], std::size_t capacity){
	size_t amount=capacity;
	for(size_t k = 0; k < capacity-1;k++){

	size_t temp = data[0];
	size_t i;
	for ( i = 0; i < amount - 1; i++) {
			        data[i] = data[i + 1];
			    }
	  data[i] = temp;
	  amount--;
	}

	  for (size_t k = 0; k < capacity; k++){
	  		std::cout<<data[k]<<" ";
	  	}
}
void rotate( int data[], std::size_t capacity, unsigned int rotate_by ){
	for (size_t k = 0; k < rotate_by; k++){
		int temp = data[0];
		size_t i;
		    for ( i = 0; i < capacity - 1; i++) {
		        data[i] = data[i + 1];
		    }
		    data[i] = temp;
	}
	for (size_t i = 0; i < capacity; i++){
		std::cout<<data[i]<<" ";
	}

}
